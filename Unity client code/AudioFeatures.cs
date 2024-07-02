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
    public float