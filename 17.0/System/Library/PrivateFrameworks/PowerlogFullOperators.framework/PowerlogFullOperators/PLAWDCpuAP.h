@class NSDate, PLEntryNotificationOperatorComposition;

@interface PLAWDCpuAP : PLAWDAuxMetrics

@property (retain) PLEntryNotificationOperatorComposition *monitorEventCallback;
@property (retain) PLEntryNotificationOperatorComposition *wakeEventCallback;
@property (retain) PLEntryNotificationOperatorComposition *ioreportEnergyEventCallback;
@property (retain) NSDate *sleepStartTime;
@property BOOL isIoreportEnergy;
@property long long apSubmitCnt;
@property long long cpuLoadSubmitCnt;

+ (id)entryAggregateDefinitions;
+ (id)entryAggregateDefinitionAwdAp;
+ (id)entryAggregateDefinitionAwdCpu;
+ (id)getSharedObjWithOperator:(id)a0;

- (void).cxx_destruct;
- (void)addEntryToApMetricsTable:(id)a0 withValue:(double)a1;
- (void)handleIOReportEnergyCallback:(id)a0;
- (void)handleMonitorCallback:(id)a0;
- (void)handleWakeCallback:(id)a0;
- (void)resetApTable;
- (void)startApMetricCollection:(id)a0;
- (void)startCpuMetricCollection:(id)a0;
- (void)startMetricCollection:(id)a0;
- (void)stopMetricCollection:(id)a0;
- (BOOL)submitApDataToAWDServer:(id)a0 withAwdConn:(id)a1;
- (BOOL)submitCpuDataToAWDServer:(id)a0 withAwdConn:(id)a1;
- (BOOL)submitDataToAWDServer:(id)a0 withAwdConn:(id)a1;

@end
