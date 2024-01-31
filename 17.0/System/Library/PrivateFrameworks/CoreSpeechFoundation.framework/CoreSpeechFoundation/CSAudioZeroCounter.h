@class NSString;

@interface CSAudioZeroCounter : NSObject {
    NSString *_methodToken;
    unsigned int _continuousZeroCounter;
    unsigned int _zeroCounterWinSz;
    unsigned int _zeroCounterWinSzForReport;
    unsigned int _maxContinuousZeroCount;
    unsigned int _numChannels;
    unsigned int _analyzeStep;
    float _sampleRate;
    BOOL _shouldDeinterleaveAudio;
}

- (void)resetWithSampleRate:(float)a0;
- (id)initWithToken:(id)a0 sampleRate:(float)a1 numChannels:(unsigned int)a2;
- (void)getZeroStatisticsFromBuffer:(id)a0 entireSamples:(unsigned int)a1;
- (void).cxx_destruct;
- (void)stopCountingZeroStatisticsWithReporter:(id)a0;

@end
