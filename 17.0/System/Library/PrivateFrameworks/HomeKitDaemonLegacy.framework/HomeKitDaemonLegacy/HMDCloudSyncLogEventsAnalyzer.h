@class HMDEventCountersManager;
@protocol HMDMetricsDeviceStateProvider, HMMLogEventSubmitting;

@interface HMDCloudSyncLogEventsAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing>

@property (readonly, nonatomic) id<HMDMetricsDeviceStateProvider> deviceStateProvider;
@property (retain, nonatomic) HMDEventCountersManager *eventCountersManager;
@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property unsigned long long dataSyncState;

+ (id)managedEventCounterRequestGroups;

- (void).cxx_destruct;
- (void)resetDataSource;
- (void)didReceiveEventFromDispatcher:(id)a0;
- (void)handleDecryptionCompletedEvent:(id)a0;
- (void)resetAggregationAnalysisContext;
- (id)cloudSyncAnalysisResult;
- (void)handleFetchLogEvent:(id)a0;
- (void)handleIncomingCloudPushLogEvent:(id)a0;
- (void)handleMaximumDelayLogEvent:(id)a0;
- (void)handleRecordOperationLogEvent:(id)a0;
- (void)handleUploadLogEvent:(id)a0;
- (void)handleUploadReasonLogEvent:(id)a0;
- (id)initWithEventCountersManager:(id)a0 logEventSubmitter:(id)a1 deviceStateProvider:(id)a2;
- (void)populateAggregationAnalysisLogEvent:(id)a0;

@end
