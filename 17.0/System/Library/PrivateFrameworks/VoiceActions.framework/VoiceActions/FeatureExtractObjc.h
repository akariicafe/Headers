@interface FeatureExtractObjc : NSObject {
    void /* unknown type, empty encoding */ audioSampleIngestionBuffer;
    void /* unknown type, empty encoding */ audioSampleWorkBuffer;
    void /* unknown type, empty encoding */ slidingCmvnBuffer;
    void /* unknown type, empty encoding */ spliceBuffer;
    void /* unknown type, empty encoding */ nnetIntakeBuffer;
    void /* unknown type, empty encoding */ spliceBufferCounter;
    void /* unknown type, empty encoding */ spliceBufferCounterAll;
    void /* unknown type, empty encoding */ frameCounter;
    void /* unknown type, empty encoding */ nn;
    void /* unknown type, empty encoding */ fftCalculator;
    void /* unknown type, empty encoding */ cmvnSlidingWindowSum;
    void /* unknown type, empty encoding */ cmvnBufferCount;
    void /* unknown type, empty encoding */ serialWorkQueue;
    void /* unknown type, empty encoding */ stateAccessQueue;
    void /* unknown type, empty encoding */ dataAvailableSem;
    void /* unknown type, empty encoding */ allProcessedAfterStopSem;
    void /* unknown type, empty encoding */ stopSignaled;
    void /* unknown type, empty encoding */ acousticModelOutputAvailable;
    void /* unknown type, empty encoding */ isRunning;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ spliceBufferLength;
    void /* unknown type, empty encoding */ splicedVectorDim;
    void /* unknown type, empty encoding */ numSamplesRemovedFromAudioSampleInjestionBuffer;
    void /* unknown type, empty encoding */ audioSampleIngestionBufferStartIndex;
    void /* unknown type, empty encoding */ frameDuration;
    void /* unknown type, empty encoding */ streamingMode;
}

- (id)init;
- (id)initWithConfig:(id)a0;
- (void)reset;
- (void).cxx_destruct;
- (id)configuration;
- (void)addCallbackForAcousticModelOutputAvailableWithCallback:(id /* block */)a0;
- (void)addFloatSamples:(const float *)a0 count:(long long)a1;
- (void)addSamples:(const short *)a0 count:(long long)a1;
- (id)audioForKeywordWithStartFrame:(long long)a0 endFrame:(long long)a1 actualEndFrame:(long long *)a2;
- (id)saveAudioBufferToFileWithPcmBuffer:(id)a0 keyword:(id)a1 score:(id)a2 duration:(int)a3;
- (id)saveAudioDataToFileWithData:(id)a0 keyword:(id)a1 score:(id)a2 duration:(int)a3;
- (id)saveStandaloneDebugSamplesToFileWithDebugAudioSamples:(id)a0 keyword:(id)a1 score:(id)a2 duration:(int)a3;
- (void)setCmvnMinWindowLengthWithCmvnMinWindowLength:(long long)a0;
- (void)setStreamingModeWithStreaming:(BOOL)a0;
- (void)startWithCompletionHandlerWithCompletionHandler:(id /* block */)a0;
- (void)stopWithCompletionHandlerWithCompletionHandler:(id /* block */)a0;

@end
