@class _CDContextualChangeRegistration, _CDClientContext;

@interface _DKMDCSWorkoutMonitor : _DKMonitor {
    _CDClientContext *_userContext;
    _CDContextualChangeRegistration *_registration;
}

+ (id)eventStream;
+ (id)entitlements;

- (id)init;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (id)createWorkoutPredicate;

@end
