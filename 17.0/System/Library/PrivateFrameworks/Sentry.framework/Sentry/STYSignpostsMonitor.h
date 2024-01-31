@class STYGeneralSignpostMonitorHelper, STYSpecialAppLaunchSignpostMonitorHelper, STYWorkflowResponsivenessMonitorHelper, NSDate, NSObject, SignpostSupportObjectExtractor;
@protocol OS_dispatch_queue;

@interface STYSignpostsMonitor : NSObject

@property (retain) NSObject<OS_dispatch_queue> *monitorQueue;
@property (retain) SignpostSupportObjectExtractor *signpostExtractor;
@property (retain) NSDate *timeOfLastExtractorFailure;
@property unsigned int successiveExtractorFailureCount;
@property unsigned int eventCount;
@property (retain) STYGeneralSignpostMonitorHelper *generalSignpostHelper;
@property (retain) STYSpecialAppLaunchSignpostMonitorHelper *specialAppLaunchSignpostHelper;
@property (retain) STYWorkflowResponsivenessMonitorHelper *workflowResponsivenessHelper;

+ (id)sharedMonitor;

- (BOOL)monitorAppLaunchSignposts;
- (id)init;
- (void)disable;
- (void)stopMonitoringWorkflows;
- (void)checkMonitoring:(BOOL)a0;
- (void)stopMonitoringSignposts;
- (void)setupRetryAfterFailure;
- (void)forEachEnabledHelper:(id /* block */)a0;
- (void)forEachHelper:(id /* block */)a0;
- (BOOL)needsEnablementChange;
- (void).cxx_destruct;
- (void)stopMonitoringAppLaunchSignposts;
- (void)reportLatencyToReceiveSignposts:(id)a0;
- (BOOL)monitorWorkflowsWithDailyLogLimit:(int)a0 perPeriodLogLimit:(int)a1 periodLengthSec:(int)a2;
- (BOOL)monitorSignposts:(BOOL)a0;

@end
