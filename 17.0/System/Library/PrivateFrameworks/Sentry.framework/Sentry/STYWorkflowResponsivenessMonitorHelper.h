@class NSArray, WRWorkflowProvider, SignpostSupportSubsystemCategoryAllowlist, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface STYWorkflowResponsivenessMonitorHelper : STYSignpostsMonitorHelper {
    SignpostSupportSubsystemCategoryAllowlist *_allowList;
    int _periodLengthSec;
}

@property (retain) WRWorkflowProvider *workflowProvider;
@property (retain) NSArray *workflowEventTrackers;
@property (retain) NSObject<OS_dispatch_queue> *settingsChangedCallbackQueue;
@property (copy) id /* block */ settingsChangedCallback;
@property (retain) NSObject<OS_dispatch_source> *perDayTimer;
@property (retain) NSObject<OS_dispatch_source> *perPeriodTimer;
@property int perDayLogLimit;
@property int perPeriodLogLimit;
@property int periodLengthSec;

- (void)resetState;
- (id)init;
- (void).cxx_destruct;
- (id)name;
- (id)allowList;
- (void)resetCounts;
- (void)handleInterval:(id)a0;
- (void)handleSignpost:(id)a0;
- (void)didEndMonitoring;
- (void)handleEmit:(id)a0;
- (void)handleIntervalBegin:(id)a0;
- (void)notifyWhenSettingsChanged:(id)a0 block:(id /* block */)a1;
- (void)resetPerDayCounts;
- (void)resetPerPeriodCounts;
- (void)willStartMonitoring;
- (void)workflowEventCompleted:(id)a0 overallIntervalStart:(id)a1 overallIntervalEnd:(id)a2 startSignpost:(id)a3 endSignpost:(id)a4;

@end
