@class NSString;

@interface CSPineboardStartMonitor : CSEventMonitor <CSSystemShellStartProviding> {
    int _notifyToken;
    BOOL _isPineBoardStarted;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_notifyObserver:(id)a0 withStarted:(BOOL)a1;
- (BOOL)isSystemShellStarted;
- (BOOL)_checkPineBoardStarted;
- (void)_didReceivePineboardStarted:(BOOL)a0;
- (void)_didReceivePineboardStartedInQueue:(BOOL)a0;
- (BOOL)isPineboardStarted;

@end
