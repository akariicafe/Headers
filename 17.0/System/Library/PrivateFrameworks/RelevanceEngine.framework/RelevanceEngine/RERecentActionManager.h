@class NSLock, NSMutableDictionary, REPredictedActionServer;

@interface RERecentActionManager : RESingleton {
    NSLock *_lock;
    NSMutableDictionary *_dateValues;
    REPredictedActionServer *_server;
}

- (void)dealloc;
- (id)_init;
- (void).cxx_destruct;
- (id)_dataForAction:(id)a0;
- (void)_handleRecentActionNotification:(id)a0;
- (void)_storePerformAction:(id)a0 date:(id)a1 remote:(BOOL)a2;
- (unsigned long long)actionNumberOfTimesPeformedToday:(id)a0;
- (BOOL)actionWasPerformedLocally:(id)a0;
- (void)didPerformAction:(id)a0;
- (id)lastPerformedDateForAction:(id)a0;

@end
