using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;
using UnityEngine.UI;

public class AudioFeatures : MonoBehaviour
{

    //talk to dynamic link library (dll)
    //used to be AudioFeatureExtractor

    #if UNITY_EDITOR
        [DllImport("MusicalMachineListeningUnityPlugin", CallingConvention = CallingConvention.Cdecl, EntryPoint = "SetupAudioFeatureExtractor")]
        private static extern int SetupAudioFeatureExtractor(float sampleRate, int blocksize);
        //if use EntryPoint can have a different name for C# function wrapping the call to the dll
        [DllImport("MusicalMachineListeningUnityPlugin", CallingConvention = CallingConvention.Cdecl, EntryPoint = "Calculate")]
        private unsafe static extern void Calculate(float* data, float* features);
        [DllImport("MusicalMachineListeningUnityPlugin", CallingConvention = CallingConvention.Cdecl, EntryPoint = "SetupAudioFeatureExtractorL")]
        private static extern int SetupAudioFeatureExtractorL(float sampleRate, int blocksize);
        //if use EntryPoint can have a different name for C# function wrapping the call to the dll
        [DllImport("MusicalMachineListeningUnityPlugin", CallingConvention = CallingConvention.Cdecl, EntryPoint = "CalculateL")]
        private unsafe static extern void CalculateL(float* data, float* features);
        [DllImport("MusicalMachineListeningUnityPlugin", CallingConvention = CallingConvention.Cdecl, EntryPoint = "SetupAudioFeatureExtractorR")]
        private static extern int SetupAudioFeatureExtractorR(float sampleRate, int blocksize);
        //if use EntryPoint can have a different name for C# function wrapping the call to the dll
        [DllImport("MusicalMachineListeningUnityPlugin", CallingConvention = CallingConvention.Cdecl, EntryPoint = "CalculateR")]
        private unsafe static extern void CalculateR(float* data, float* features);
    //#endif

#elif UNITY_ANDROID
    [DllImport("__Internal")]
    //[DllImport("__Internal", CallingConvention = CallingConvention.Cdecl, EntryPoint = "SetupAudioFeatureExtractor")]
    private static extern int SetupAudioFeatureExtractor(float sampleRate, int blocksize);
    //if use EntryPoint can have a different name for C# function wrapping the call to the dll
    [DllImport("__Internal")]
    private unsafe static extern void Calculate(float* data, float* features);
    [DllImport("__Internal")]
    private static extern int SetupAudioFeatureExtractorL(float sampleRate, int blocksize);
    //if use EntryPoint can have a different name for C# function wrapping the call to the dll
    [DllImport("__Internal")]
    private unsafe static extern void CalculateL(float* data, float* features);
    [DllImport("__Internal")]
    private static extern int SetupAudioFeatureExtractorR(float sampleRate, int blocksize);
    //if use EntryPoint can have a different name for C# function wrapping the call to the dll
    [DllImport("__Internal")]
    private unsafe static extern void CalculateR(float* data, float* features);
#endif


    AudioSource _audioSource;
    //public float loudness = 0;
    public float centroid = 0;
    public float power = 0;
    public float irregularity = 0;
    public float spectralentropy = 0;
    public float sensorydissonance = 0;
    public float keyclarity = 0; //was rms
    public float qitch = 0; //was zcr
    public float densityofonsets = 0;
    public float meanIOI = 0;
    public float stddevIOI = 0;
    public float beathistogramentropy = 0;
    public float beathistogramfirsttosecondratio = 0;
    public float beathistogramdiversity = 0;
    public float beathistogrammetricity = 0;
    public float onset = 0;
    public float onsetdetected = 0;
    public float beatdetected = 0;

    [Range(0.0f, 1.0f)]
    public float alpha = 0.5f; //to control averaging in recursive IIR low pass filter


    //Good Latency gives me 512 sample blocksize
    int blocksize = 0;
    int sampleRate = 0;

    float[] fftbuffer2; //left channel or mono mix
    int numfeatures = 16;
    float[] rawfeaturedata;
    float[] featuredata;

    bool stereoseparatedextraction = true; 
    float[] fftbufferL;
    float[] rawfeaturedataL;
    float[] featuredataL;
    float[] fftbufferR;
    float[] rawfeaturedataR;
    float[] featuredataR;

    public float centroidL = 0;
    public float powerL = 0;
    public float irregularityL = 0;
    public float spectralentropyL = 0;
    public float sensorydissonanceL = 0;
    public float keyclarityL = 0; //was rms
    public float qitchL = 0; //was zcr
    public float densityofonsetsL = 0;
    public float meanIOIL = 0;
    public float stddevIOIL = 0;
    public float beathistogramentropyL = 0;
    public float beathistogramfirsttosecondratioL = 0;
    public float beathistogramdiversityL = 0;
    public float beathistogrammetricityL = 0;
    public float onsetL = 0;
    public float onsetdetectedL = 0;
    public float beatdetectedL = 0;

    public float centroidR = 0;
    public float powerR = 0;
    public float irregularityR = 0;
    public float spectralentropyR = 0;
    public float sensorydissonanceR = 0;
    public float keyclarityR = 0; //was rms
    public float qitchR = 0; //was zcr
    public float densityofonsetsR = 0;
    public float meanIOIR = 0;
    public float stddevIOIR = 0;
    public float beathistogramentropyR = 0;
    public float beathistogramfirsttosecondratioR = 0;
    public float beathistogramdiversityR = 0;
    public float beathistogrammetricityR = 0;
    public float onsetR = 0;
    public float onsetdetectedR = 0;
    public float beatdetectedR = 0;


    bool awakened = false;
    //int whichaudio = 0;
    //int numaudioclips = 3;
    //AudioClip[] audioclips; 

    //public void OnValueChanged(float newValue)
    //{
    //    alpha = newValue;
    //}


    // Start is called before the first frame update but may be earlier audio callbacks
    void Awake()
    {


        AudioConfiguration config = AudioSettings.GetConfiguration();
        //config.dspBufferSize = 64;
        //AudioSettings.Reset(config);

        blocksize = config.dspBufferSize;
        sampleRate = config.sampleRate;

        int ok = SetupAudioFeatureExtractor(sampleRate, blocksize);
       
        fftbuffer2 = new float[blocksize];

        //numfeatures = 10; 
        rawfeaturedata = new float[numfeatures];
        featuredata = new float[numfeatures];

        for (int i = 0; i < blocksize; ++i)
        {
            fftbuffer2[i] = 0.0f;
        }

        for (int i = 0; i < numfeatures; ++i)
        {
            rawfeaturedata[i] = 0.0f;
            featuredata[i] = 0.0f;
        }

        if(stereoseparatedextraction)
        {
            ok = SetupAudioFeatureExtractorL(sampleRate, blocksize);
            ok = SetupAudioFeatureExtractorR(sampleRate, blocksize);

            fftbufferL = new float[blocksize];
            fftbufferR = new float[blocksize];

            //numfeatures = 10; 
            rawfeaturedataL = new float[numfeatures];
            featuredataL = new float[numfeatures];
            rawfeaturedataR = new float[numfeatures];
            featuredataR = new float[numfeatures];

            for (int i = 0; i < blocksize; ++i)
            {
                fftbufferL[i] = 0.0f;
                fftbufferR[i] = 0.0f;
            }

            for (int i = 0; i < numfeatures; ++i)
            {
                rawfeaturedataL[i] = 0.0f;
                featuredataL[i] = 0.0f;
                rawfeaturedataR[i] = 0.0f;
                featuredataR[i] = 0.0f;
            }

        }



        _audioSource = GetComponent<AudioSource>();

        awakened = true;

    }

    // Update is called once per frame
    void Update()
    {

        if (Input.GetKeyDown("space"))
        {
            print("space key was pressed");

            //_audioSource.clip()


        }

    }





    public unsafe void getFillArrayNative(float[] sampledata, float[] featurevalues)
    {
        //Pin Memory
        fixed (float* p = sampledata)
        {
            fixed (float* q = featurevalues)
            {
                Calculate(p, q);

            }
        }
    }


    public unsafe void getFillArrayNativeL(float[] sampledata, float[] featurevalues)
    {
        //Pin Memory
        fixed (float* p = sampledata)
        {
            fixed (float* q = featurevalues)
            {
                CalculateL(p, q);

            }
        }
    }


    pub