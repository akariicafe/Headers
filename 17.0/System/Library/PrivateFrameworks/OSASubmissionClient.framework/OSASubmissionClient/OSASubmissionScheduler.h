@interface OSASubmissionScheduler : NSObject

+ (double)_lastSuccessTime;
+ (id)_calculateNewCadenceParametersWithPermissive:(BOOL)a0 fastLane:(BOOL)a1;
+ (void)scheduleSubmission;
+ (void)_incrementRetryCount;
+ (void)scheduleCleanupWithHomeDirectory:(id)a0;
+ (void)_resetRetryCount;
+ (long long)_retryCount;
+ (void)_updateCadenceForActivity:(id)a0 newCadenceParameters:(id)a1;
+ (void)_scheduleSubmissionWithPermissive:(BOOL)a0;
+ (void)_saveLastSuccessTime;
+ (id)_getCurrentCadenceParametersFromActivity:(id)a0;

@end
