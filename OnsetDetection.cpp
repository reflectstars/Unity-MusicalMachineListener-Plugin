//(c) Nick Collins 2019 all rights reserved

//Nick Collins 13/6/05 onset detection MIREX algorithm (adapted from SC3 UGen for stream based calculation)
//C code version Nick Collins 20 May 2005
//js version 2018
//trying to implement the best onset detection algo from AES118 paper, with event analysis data to be written to a buffer
//for potential NRT and RT use
//stores up to a second of audio, assumes that events are not longer than that minus a few FFT frames
//assumes 44100 SR and FFT of 1024, 512 overlap



//assumes sampling rate 44.1kHz
//assumes blocksizes itself?
//function OnsetDetector(N,SR)



#include "OnsetDetection.h"


int g_eqlbandbins[43]= {1,2,3,4,5,6,7,8,9,11,13,15,17,19,22,25,28,32,36,41,46,52,58