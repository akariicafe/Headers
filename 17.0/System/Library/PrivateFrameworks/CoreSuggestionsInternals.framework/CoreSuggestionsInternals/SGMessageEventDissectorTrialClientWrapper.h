@class _PASLock;

@interface SGMessageEventDissectorTrialClientWrapper : SGTrialClientWrapper {
    _PASLock *_lock;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)updateFactors;
- (id)eventClassifierModelPath;
- (id)eventClassifierThreshold;
- (id)eventExtractionAssetsPath;
- (id)messageProcessingLimit;
- (id)rateLimitInterval;

@end
