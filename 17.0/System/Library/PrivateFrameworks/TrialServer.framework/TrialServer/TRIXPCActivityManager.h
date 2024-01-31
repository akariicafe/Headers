@class TRIServerContext, TRITaskQueue, NSObject;
@protocol OS_dispatch_queue;

@interface TRIXPCActivityManager : NSObject <TRIXPCActivityManagementProtocol> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (retain, nonatomic) TRIServerContext *context;
@property (retain, nonatomic) TRITaskQueue *taskQueue;

- (void)_registerClientTriggeredActivities;
- (void)_registerHotfixTargetingActivity;
- (void)_registerCellularActivityWithDelay:(double)a0;
- (void)registerActivities;
- (void)_registerRetryFailuresActivity;
- (void)postponeCellularActivity;
- (void)_registerMaintenanceWorkActivity;
- (void)_scheduleMaintenanceTaskWithActivityDescriptor:(id)a0 label:(id)a1;
- (void)_registerPlaceholderTaskQueueActivity;
- (void)_scheduleBMLTFetchTaskWithActivityDescriptor:(id)a0 label:(id)a1;
- (void)_scheduleFetchTaskWithActivityDescriptor:(id)a0 label:(id)a1;
- (void)_registerPostUpgradeActivityRequireInexpensiveNetworking;
- (void)_registerPostUpgradeActivity;
- (void)_setDelaySeconds:(long long)a0 forXPCActivity:(id)a1 withLabel:(id)a2 replacementCriteria:(id)a3;
- (void).cxx_destruct;
- (void)_registerFetchExperimentsActivity;
- (id)initWithDispatchQueue:(id)a0;
- (void)registerSetupAssistantFetchActivity;
- (void)_registerFetchBMLTActivity;
- (void)_setJitterForXPCActivity:(id)a0 withLabel:(id)a1 replacementCriteria:(id)a2;

@end
