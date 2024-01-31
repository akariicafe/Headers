@class PLNSNotificationOperatorComposition, PLTimer, CLPCReportingStatSelection, NSDate, CLPCReportingReadResult;
@protocol CLPCReportingAccess;

@interface PLCLPCAgent : PLAgent

@property (retain) NSDate *lastEntryDate;
@property (retain) PLTimer *tenMinuteTimer;
@property (retain) id<CLPCReportingAccess> provider;
@property (retain) CLPCReportingStatSelection *selection;
@property (retain) CLPCReportingReadResult *readResults;
@property (retain) PLNSNotificationOperatorComposition *thermalMonitorListener;

+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (void)load;
+ (id)entryEventIntervalDefinitionAccumulators;
+ (id)entryEventIntervalDefinitionCPUClusterAccumulators;
+ (id)entryEventIntervalDefinitionLostPerformance;
+ (id)entryEventNoneAccumulatorsLookup;
+ (id)entryEventNoneCPUClusterAccumulatorsLookup;
+ (id)entryEventNoneLostPerformanceLookup;

- (void)setupTimer;
- (id)init;
- (void)initOperatorDependancies;
- (void).cxx_destruct;
- (id)trimConditionsForEntryKey:(id)a0 forTrimDate:(id)a1;
- (BOOL)configureCPUClusterAccumulators;
- (void)addToLookupTableAndCache:(unsigned long long)a0 forEntryKey:(id)a1 andLookupMap:(id)a2;
- (BOOL)configureAccumulators;
- (BOOL)configureLostPerformance;
- (void)constructCache:(id)a0 forEntryKey:(id)a1;
- (void)createLookupCache:(id)a0;
- (void)createLookupMaps;
- (void)logCLPCCPUClusterAccumulators:(id)a0;
- (void)logCLPCLostPerformance:(id)a0;
- (void)logCLPCStatsAccumulators:(id)a0;
- (void)logLookupTable:(id)a0 withEntryKey:(id)a1;
- (void)setEntryKeys;
- (BOOL)setupStats;
- (void)setupThermalMonitor;

@end
