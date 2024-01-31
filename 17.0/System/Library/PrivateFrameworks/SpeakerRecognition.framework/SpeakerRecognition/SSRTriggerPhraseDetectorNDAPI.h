@interface SSRTriggerPhraseDetectorNDAPI : NSObject {
    void *_novDetect;
    unsigned long long _phId;
}

- (void)reset;
- (void)dealloc;
- (id)getSuperVectorWithEndPoint:(unsigned long long)a0;
- (id)analyzeWavData:(id)a0 numSamples:(unsigned long long)a1;
- (id)initWithConfigPath:(id)a0 resourcePath:(id)a1 phId:(unsigned long long)a2;

@end
