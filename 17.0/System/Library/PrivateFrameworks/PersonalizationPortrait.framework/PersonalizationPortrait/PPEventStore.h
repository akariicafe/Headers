@class NSString, PPRecordMonitoringHelper, PPClientFeedbackHelper;

@interface PPEventStore : NSObject <PPFeedbackAccepting, PPClientStore> {
    PPRecordMonitoringHelper *_monitoringHelper;
    PPClientFeedbackHelper *_clientFeedbackHelper;
}

@property (retain, nonatomic) NSString *clientIdentifier;

- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)_loadEventNameRecordsWithDelegate:(id)a0;
- (BOOL)iterEventHighlightsFrom:(id)a0 to:(id)a1 options:(int)a2 error:(id *)a3 block:(id /* block */)a4;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)iterWeeklyEventHighlightsError:(id *)a0 block:(id /* block */)a1;
- (BOOL)iterWeeklyEventHighlightsWithOptions:(int)a0 error:(id *)a1 block:(id /* block */)a2;
- (BOOL)iterDailyEventHighlightsWithOptions:(int)a0 error:(id *)a1 block:(id /* block */)a2;
- (void)logEventInteractionForEventWithEventIdentifier:(id)a0 interface:(unsigned short)a1 actionType:(unsigned short)a2;
- (BOOL)interactionSummaryMetricsError:(id *)a0 block:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)sendRTCLogsWithError:(id *)a0;
- (void)_sendChangesToDelegates:(id)a0;
- (id /* block */)_recordGenerator;
- (BOOL)iterEventHighlightsFrom:(id)a0 to:(id)a1 error:(id *)a2 block:(id /* block */)a3;
- (BOOL)iterEventNameRecordsForClient:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (BOOL)iterScoredEventsWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (BOOL)iterDailyEventHighlightsError:(id *)a0 block:(id /* block */)a1;
- (BOOL)loadEventNameRecordsAndMonitorChangesWithDelegate:(id)a0 error:(id *)a1;

@end
