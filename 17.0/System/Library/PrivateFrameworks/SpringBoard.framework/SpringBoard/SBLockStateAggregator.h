@class SBFAnalyticsClient;

@interface SBLockStateAggregator : NSObject {
    unsigned long long _lockState;
}

@property (weak, nonatomic) SBFAnalyticsClient *analyticsClient;

+ (id)sharedInstance;

- (id)init;
- (void)_updateLockState;
- (void)dealloc;
- (unsigned long long)lockState;
- (BOOL)hasAnyLockState;
- (id)description;
- (void).cxx_destruct;
- (id)_descriptionForLockState:(unsigned long long)a0;
- (id)_initWithAnalyticsClient:(id)a0;

@end
