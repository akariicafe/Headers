@class NSString, PETGoalConversionEventTracker;

@interface SBSystemHapticsPreferencesMetric : NSObject <SBFAnalyticsBackendEventHandling> {
    PETGoalConversionEventTracker *_switchTracker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)handleEvent:(unsigned long long)a0 withContext:(id)a1;
- (void).cxx_destruct;

@end
