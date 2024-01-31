@class PPXPCClientPipelinedBatchQueryManager, PPXPCClientHelper;

@interface PPEventClient : NSObject <PPEventClientProtocol> {
    PPXPCClientHelper *_clientHelper;
    PPXPCClientPipelinedBatchQueryManager *_queryManager;
}

+ (id)sharedInstance;

- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (id)_remoteObjectProxy;
- (void)scoredEventsBatch:(id)a0 isLast:(BOOL)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)_unblockPendingQueries;
- (id)init;
- (void)eventHighlightsBatch:(id)a0 isLast:(BOOL)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (BOOL)eventHighlightsFrom:(id)a0 to:(id)a1 options:(int)a2 error:(id *)a3 handleBatch:(id /* block */)a4;
- (void)eventNameRecordChangesBatch:(id)a0 isLast:(BOOL)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)logEventInteractionForEventWithEventIdentifier:(id)a0 interface:(unsigned short)a1 actionType:(unsigned short)a2;
- (BOOL)eventNameRecordsForClient:(id)a0 error:(id *)a1 handleBatch:(id /* block */)a2;
- (BOOL)interactionSummaryMetricsWithError:(id *)a0 handleBatch:(id /* block */)a1;
- (void)interactionSummaryMetricsBatch:(id)a0 isLast:(BOOL)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (BOOL)sendRTCLogsWithError:(id *)a0;
- (BOOL)scoredEventsWithQuery:(id)a0 error:(id *)a1 handleBatch:(id /* block */)a2;
- (BOOL)resolveEventNameRecordChanges:(id)a0 client:(id)a1 error:(id *)a2 handleBatch:(id /* block */)a3;
- (void)eventNameRecordBatch:(id)a0 isLast:(BOOL)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;

@end
