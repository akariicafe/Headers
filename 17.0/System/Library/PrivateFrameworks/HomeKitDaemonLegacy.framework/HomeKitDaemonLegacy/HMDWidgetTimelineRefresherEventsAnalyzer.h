@class NSDictionary, NSString;
@protocol HMMLogEventSubmitting;

@interface HMDWidgetTimelineRefresherEventsAnalyzer : HMDLogEventAnalyzer <HMDLogEventDailyTaskRunner, HMDAggregationAnalysisEventContributing>

@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly, nonatomic) NSDictionary *widgetRefreshReasonCounterGroupByKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)didReceiveEventFromDispatcher:(id)a0;
- (void)resetAggregationAnalysisContext;
- (id)initWithEventCountersManager:(id)a0 logEventSubmitter:(id)a1 dailyScheduler:(id)a2;
- (void)populateAggregationAnalysisLogEvent:(id)a0;
- (void)runDailyTask;

@end
