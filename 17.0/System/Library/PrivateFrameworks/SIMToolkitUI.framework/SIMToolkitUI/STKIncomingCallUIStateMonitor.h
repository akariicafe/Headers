@class BSTimer, NSHashTable;

@interface STKIncomingCallUIStateMonitor : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
    NSHashTable *_observersLock_observers;
    BSTimer *_fallbackTimer;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_showingIncomingCallUI;
    int _inCallAlertVisibleNotifyToken;
}

@property (nonatomic) BOOL isShowingIncomingCallUI;

+ (id)sharedInstance;

- (id)init;
- (void)removeObserver:(id)a0;
- (void)_refreshState;
- (void).cxx_destruct;
- (void)_setIncomingCallUIState:(BOOL)a0 forReason:(id)a1;
- (void)addObserver:(id)a0;
- (double)_fallbackTimerDuration;

@end
