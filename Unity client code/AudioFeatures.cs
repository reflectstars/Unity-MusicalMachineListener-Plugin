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
        private unsafe static extern void CalculateL(float* dat