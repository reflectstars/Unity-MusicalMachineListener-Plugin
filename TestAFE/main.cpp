//load dylib and test functionality

#include <iostream>
#include <math.h>

///data/durham/code/library/AudioFeatureExtractor
#include "../AudioFeatureExtractorInterface.h"

//#include "filenames.h"
#include "filenamesartmusic.h"

#include "SoundFile.h"

#define BLOCKSIZE 512
#define POLL 3000 //around once per 30 seconds of analysed audio
#define NUMFEATURES 16
//14 basic features + beat trigger + onset trigger in last slots


//[0,0,0.00097661,0,0,0,22.5081,0,0,0,0,0,0.443182,0.676811,]
//[0.845689,214.75,0.989537,463.233,9.21763,6.98894,95.2131,97,5.9327,2.9083,6.64386,2.79087,1,1,]



int main (int argc, const char * argv[]) {
    
    int numsamples;
    
    int maxlength = 44100*30; //12; //0;
    
    float features[NUMFEATURES];
    float maxima[NUMFEATURES];
    float minima[NUMFEATURES];
    float featurenow;
    
    int i;
    for(int i=0; i< NUMFEATURES; ++i) {
        maxima[i] = 0;
        minima[i] = 99999999.99;
        
    }
  
    //0
    //817
    for (int j=10; j<11; ++j) {
    
    //must pass sample rate and blocksize
    SetupAudioFeatureExtractor(44100.0,BLOCKSIZE);
    //SetupAudioFeatureExtractor(48000.0,BLOCKSIZE);
        
        std::cout << j << " " << strings[j] << std::end