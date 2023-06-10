//(c) Nick Collins 2019 all rights reserved

#pragma once

#include "MMLLSTFT.h"



class KeyClarity {
    
    
	//coping with different sampling rates
	float m_srate;		//use as a flag to check sample rate is correct
	float * m_weights;  //will point to the sample rate specific data
	int * m_bins;
	float m_frameperiod;
    
	//counter
	//uint32 m_frame;
    
	//experimental transient avoidance
	//float m_prevphase[720]; //60*12
	//float m_leaknote[60];
    
	float m_chroma[12];
	float m_key[24];
    
	float m_histogram[24];   //key histogram
    //float m_keyleak; /