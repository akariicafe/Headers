@class NSHashTable, NSXPCConnection;

@interface ATXTimeIntelligenceClient : NSObject <ATXTimeIntelligenceClientProtocol, ATXTimeIntelligenceInterface> {
    NSHashTable *_observers;
}

@property (retain, nonatomic) NSXPCConnection *xpcConnection;

- (id)init;
- (void)registerObserver:(id)a0;
- (void).cxx_destruct;
- (void)_notifyObserversOfReload;
- (void)computeCompactTimeSummaryWithOptions:(long long)a0 completionHandler:(id /* block */)a1;
- (void)computeDailySummaryWithDate:(id)a0 completionHandler:(id /* block */)a1;
- (void)dataSourcesDidUpdateWithCompletionHandler:(id /* block */)a0;
- (void)deletePinnedTimeEvent:(id)a0 completionHandler:(id /* block */)a1;
- (void)dumpTimeFeedbackStream:(id /* block */)a0;
- (void)invokeActionWithIdentifier:(id)a0 forEvent:(id)a1 completionHandler:(id /* block */)a2;
- (void)invokeFeedbackOption:(id)a0 forEvent:(id)a1 referenceDate:(id)a2 completionHandler:(id /* block */)a3;
- (void)loadPinnedTimeEventsWithCompletionHandler:(id /* block */)a0;
- (void)logDidInvokeWidgetForEvent:(id)a0 completionHandler:(id /* block */)a1;
- (void)logFocusFilterDidChange:(long long)a0 completionHandler:(id /* block */)a1;
- (void)predictedDailyOverviewWithDate:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)predictedFreeMomentsWithDateRange:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)predictedTimelineWithDate:(id)a0 completionHandler:(id /* block */)a1;
- (void)printRLPolicyTable:(id /* block */)a0;
- (void)registerGoalWithData:(id)a0 completionHandler:(id /* block */)a1;
- (void)rescheduleEvent:(id)a0 proposedDate:(id)a1 referenceDate:(id)a2 completionHandler:(id /* block */)a3;
- (void)savePinnedTimeEvent:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveScheduledPinnedTimeEvent:(id)a0 completionHandler:(id /* block */)a1;
- (void)triggerNudgerToPollWithCompletionHandler:(id /* block */)a0;
- (void)unhideAllEventsFromSource:(long long)a0 completionHandler:(id /* block */)a1;

@end
