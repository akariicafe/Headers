@class FBProcessWatchdogEventContext, FBProcessCPUStatistics, RBSProcessHandle;

@interface FBProcessWatchdog : FBSProcessWatchdog {
    RBSProcessHandle *_handle;
}

@property (readonly, nonatomic) long long event;
@property (readonly, retain, nonatomic) FBProcessWatchdogEventContext *eventContext;
@property (readonly, retain, nonatomic) FBProcessCPUStatistics *cpuStatistics;

- (id)initWithProcess:(id)a0 context:(id)a1 policy:(id)a2;
- (void)activate;
- (id)_policyDesc;
- (void).cxx_destruct;

@end
