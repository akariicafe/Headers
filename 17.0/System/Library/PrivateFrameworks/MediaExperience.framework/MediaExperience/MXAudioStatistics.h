@interface MXAudioStatistics : NSObject {
    void /* function */ *mSendSingleMessage;
}

+ (id)sharedInstance;

- (id)initInternal;
- (void)sendSinglePerformanceMessageForRoutine:(const char *)a0 operationTime:(long long)a1 details:(id)a2;
- (void)sendSinglePerformanceMessageForAssertion:(const char *)a0 explanation:(id)a1 activity:(id)a2;

@end
