@interface MobileTimerSupport.MTAlarmSessionsProvider : MobileTimerSupport.MTBaseSessionsProvider {
    void /* unknown type, empty encoding */ serializerQueue;
    void /* unknown type, empty encoding */ activities;
}

- (id)init;
- (void)finishSessionWithAlarmId:(id)a0 completion:(id /* block */)a1;
- (long long)numberOfActiveSessions;
- (BOOL)hasActiveAlarmSession;
- (void).cxx_destruct;
- (id)activeAlarmSessions;
- (id)alertingSessionId;
- (id)activityIdForAlarmIdWithAlarmId:(id)a0;
- (void)createSessionWithContext:(id)a0 completion:(id /* block */)a1 forAlert:(BOOL)a2;
- (void)restoreSessionsWithCompletion:(id /* block */)a0;
- (void)updateSessionWithContext:(id)a0 completion:(id /* block */)a1;

@end
