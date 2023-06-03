/*
 *  CalculateFFT.h
 *
 *  Created by Nick Collins on 23/11/2008.
 *  Copyright 2008 Nick Collins. All rights reserved.
 *
 */

#pragma once

#include "kiss_fftr.h"

//hop and shunt see FeatureFrame

class CalculateFFT {

private:
float * fftbuffer;
	float * zeropad; 	
//float * prefftbuffer;
//float * postfftbuffer;
float * window;

    //float * rin;
    kiss_fft_cpx * sout;
    kiss_fft_scalar * rin;
    
    
    kiss_fftr_cfg cfg;
    
    //int fftsize;
    //singleton audio feature extractor instantiated with library load? static object?
    int halffftsize;
    
    
    
    
//vDSP

void prepareHanningWindow();

public:
//default to hanning window for now
//CalculateFFT(int fftsize, int hopsize);
//~CalculateFFT();

int fftsize;
int inputsize; 
int padding; 
int nover2;
int dowindowing; 
//int hopsize;
//int halfsize;

//could have a Spectrum object to hold this data, and override for other spectral representations? 
//returns power spectrum
void calculateFrame(float * input, float * output);

//CalculateFFT::CalculateFFT(int fftsize, int hopsize) : fftsize(fftsize), hopsize(hopsize) {
CalculateFFT(int inputsize=1470, int fftsize=2048, int windowflag=0) : inputsize(inputsize), fftsize(fftsize), dowindowing(windowflag) {
	
	nover2= fftsize >>1;
	
	//in place
	//fftbuffer= new float[fftsize];
	
	//prefftbuffer = new float[fftsize];
	//postfftbuffer = new float[fftsize];
	window= new float[fftsize];
	padding = fftsize-inputsize; 
//	
//
//	//not needed
//	zeropad= new float[fftsize];
//