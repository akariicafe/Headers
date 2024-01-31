@class NSString, PPRecordMonitoringHelper, PPClientFeedbackHelper;

@interface PPContactStore : NSObject <PPFeedbackAccepting, PPClientStore> {
    PPRecordMonitoringHelper *_monitoringHelper;
    PPClientFeedbackHelper *_clientFeedbackHelper;
}

@property (retain, nonatomic) NSString *clientIdentifier;

- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)a0 chosenContactIdentifier:(id)a1 completion:(id /* block */)a2;
- (BOOL)iterRankedContactsWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (BOOL)loadContactNameRecordsAndMonitorChangesWithDelegate:(id)a0 error:(id *)a1;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)upcomingRelevantContactsForQuery:(id)a0 error:(id *)a1;
- (void)_loadContactNameRecordsWithDelegate:(id)a0;
- (id)contactHandlesForTopics:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)iterContactNameRecordsForClient:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (id /* block */)_recordGenerator;
- (void)_sendChangesToDelegates;
- (id)contactHandlesForSource:(id)a0 error:(id *)a1;

@end
