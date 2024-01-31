@class NSString;

@interface CSSpringboardStartMonitor : CSEventMonitor <CSSystemShellStartProviding> {
    int _notifyToken;
    BOOL _isSpringBoardStarted;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (id)init;
- (void)_didReceiveSpringboardStartedInQueue:(BOOL)a0;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_notifyObserver:(id)a0 withStarted:(BOOL)a1;
- (void)_didReceiveSpringboardStarted:(BOOL)a0;
- (BOOL)isSystemShellStarted;
- (BOOL)_checkSpringBoardStarted;
- (BOOL)isSpringboardStarted;

@end
