@interface MobileTimerSupport.MTTimerSessionsProvider : MobileTimerSupport.MTBaseSessionsProvider {
    void /* unknown type, empty encoding */ activities;
    void /* unknown type, empty encoding */ serializerQueue;
}

- (id)init;
- (long long)numberOfActiveSessions;
- (void)finishSessionWithTimerId:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)hasActiveTimerSession;
- (id)alertingSessionId;
- (id)activityIdForTimerIdWithTimerId:(id)a0;
- (void)createSessionWithContext:(id)a0 completion:(id /* block */)a1 forAlert:(BOOL)a2;
- (void)restoreSessionsWithCompletion:(id /* block */)a0;
- (void)updateSessionWithContext:(id)a0 completion:(id /* block */)a1;

@end
