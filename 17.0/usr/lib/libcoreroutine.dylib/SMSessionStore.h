@class NSString;

@interface SMSessionStore : RTStore <RTEnumerableStore, SMSessionStoreProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)areSessionConfigsInTheSameInterval:(id)a0 config2:(id)a1 timeInADayInterval:(id)a2 error:(id *)a3;
+ (id)getDateUsingYearMonthDayFromDate:(id)a0 hoursMinsSecsFromDate:(id)a1;
+ (BOOL)isDateBetweenStartDate:(id)a0 endDate:(id)a1 targetDate:(id)a2 error:(id *)a3;

- (id)fetchRequestFromOptions:(id)a0 offset:(unsigned long long)a1 error:(id *)a2;
- (void)_clearSessionMonitorStatesWithHandler:(id /* block */)a0;
- (void)_clearSessionsWithHandler:(id /* block */)a0;
- (void)_clearTriggerDestinationStatesWithHandler:(id /* block */)a0;
- (void)_deleteSessionMonitorStatesPredating:(id)a0 handler:(id /* block */)a1;
- (void)_deleteSessionsAssociatedWithSessionConfiguration:(id)a0 handler:(id /* block */)a1;
- (void)_deleteSessionsPredating:(id)a0 handler:(id /* block */)a1;
- (void)_deleteTriggerDestinationStatesPredating:(id)a0 handler:(id /* block */)a1;
- (void)_fetchMostRecentSessionManagerStateWithHandler:(id /* block */)a0;
- (void)_fetchMostRecentSessionMonitorStateWithSessionID:(id)a0 handler:(id /* block */)a1;
- (void)_fetchSessionConfigurationsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_fetchSessionCountWithDateInterval:(id)a0 handler:(id /* block */)a1;
- (void)_fetchSessionManagerStatesWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_fetchTriggerDestinationStateWithSessionID:(id)a0 handler:(id /* block */)a1;
- (void)_logStoreWithReason:(id)a0 handler:(id /* block */)a1;
- (void)clearSessionMonitorStatesWithHandler:(id /* block */)a0;
- (void)clearSessionsWithHandler:(id /* block */)a0;
- (void)clearTriggerDestinationStatesWithHandler:(id /* block */)a0;
- (void)deleteSessionMonitorStatesPredating:(id)a0 handler:(id /* block */)a1;
- (void)deleteSessionsAssociatedWithSessionConfiguration:(id)a0 handler:(id /* block */)a1;
- (void)deleteSessionsPredating:(id)a0 handler:(id /* block */)a1;
- (void)deleteTriggerDestinationStatesPredating:(id)a0 handler:(id /* block */)a1;
- (void)fetchMostRecentSessionManagerStateWithHandler:(id /* block */)a0;
- (void)fetchMostRecentSessionMonitorStateWithSessionID:(id)a0 handler:(id /* block */)a1;
- (void)fetchSessionConfigurationsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchSessionCountWithDateInterval:(id)a0 handler:(id /* block */)a1;
- (void)fetchSessionManagerStatesWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchSessionStatusWithHandler:(id /* block */)a0;
- (void)fetchTriggerDestinationStateWithSessionID:(id)a0 handler:(id /* block */)a1;
- (void)logStoreWithReason:(id)a0 handler:(id /* block */)a1;
- (void)removeSessionManagerStatus:(id)a0 handler:(id /* block */)a1;
- (void)storeSessionConfigurations:(id)a0 handler:(id /* block */)a1;
- (void)storeSessionManagerStates:(id)a0 handler:(id /* block */)a1;
- (void)storeSessionManagerStatus:(id)a0 handler:(id /* block */)a1;
- (void)storeSessionMonitorStates:(id)a0 handler:(id /* block */)a1;
- (void)storeTriggerDestinationStates:(id)a0 handler:(id /* block */)a1;
- (void)updateSessionManagerStatus:(id)a0 handler:(id /* block */)a1;

@end
