@class PLXPCListenerOperatorComposition, NSString, NSMutableDictionary, PLEntryNotificationOperatorComposition, NSArray, NSDictionary, NSDate;

@interface PLCPUEnergyIssueDetectorService : PLService

@property (retain) PLEntryNotificationOperatorComposition *coalitionCallback;
@property (retain) PLEntryNotificationOperatorComposition *batteryCallback;
@property (readonly) NSString *entryKeyPLCoalitionAgentEventIntervalCoalition;
@property BOOL deviceIsPluggedIn;
@property BOOL pluggedInBetweenCoalitionSBC;
@property (retain) NSMutableDictionary *cpuUsage;
@property (retain) NSArray *cpuAllowList;
@property (retain) NSDictionary *cpuThresholds;
@property (retain) NSDate *detectionStartTime;
@property (retain) PLXPCListenerOperatorComposition *detectorListener;

+ (id)defaults;
+ (id)entryAggregateDefinitions;
+ (void)load;
+ (id)entryAggregateDefinitionAppRunTime;

- (id)init;
- (void)handleCoalitionCallback:(id)a0;
- (void)initOperatorDependancies;
- (id)loadCPUAllowlist;
- (id)loadCpuThresholds;
- (void)testService;
- (void)sendEnergyIssueSignatureNotification:(id)a0 withThreshold:(double)a1;
- (void)checkCpuUsage:(id)a0 withNewCoaltionArray:(id)a1;
- (double)getCPUTime:(id)a0;
- (void).cxx_destruct;
- (int)customLongTermCPUThreshold;
- (void)listAllRunningPidsWithBuffer:(int *)a0 withSizeOfBuffer:(int)a1;
- (int)matchingPidWithProcessName:(id)a0 withBundleID:(id)a1;
- (void)handleBatteryCallback:(id)a0;
- (id)buildCallBack:(id)a0 withGroup:(BOOL)a1 withHandler:(id /* block */)a2;

@end
