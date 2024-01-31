@class PLNSNotificationOperatorComposition, PLEntryNotificationOperatorComposition;

@interface PLPerformanceAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLNSNotificationOperatorComposition *dailyTaskNotification;
@property int randomSample;
@property int sampleCounter;

+ (id)entryEventIntervalDefinitions;
+ (void)load;
+ (id)entryEventPointDefinitionAPFSFragmentation;
+ (id)entryEventPointDefinitionJetsamPriority;
+ (id)entryEventPointDefinitionRollout;
+ (id)entryEventPointDefinitionDiskUsage;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionDiskFragmentation;
+ (id)entryEventIntervalDefinitionExperiment;
+ (BOOL)shouldCreateJetsamPriorityTable;
+ (id)entryEventPointDefinitionSystemMemory;

- (id)init;
- (void)log;
- (void)initOperatorDependancies;
- (void)logEventPointJetsamPrority;
- (void)logEventPointRollout;
- (void)logEventPointAPFSFragmentation;
- (void)logEventPointDiskFragmentation;
- (int)countFD:(int)a0;
- (int)countMachPort:(int)a0;
- (void).cxx_destruct;
- (void)logSharedCacheStatisticsToCA:(id)a0;
- (void)logEventPointDiskUsage;
- (void)logEventIntervalExperiment;
- (void)logSystemMemoryToCA:(id)a0;
- (void)logEventPointAPFSFragmentationWithContainer:(const char *)a0;
- (void)logEventPointSystemMemory;
- (id)descriptionForMemoryPressure:(int)a0;

@end
