@interface SYApplicationStateObserver : NSObject {
    _Atomic BOOL _appStateIsActive;
    BOOL _needsRegisterForAppStateNotifications;
    id /* block */ _becomeActiveHandler;
    id /* block */ _resignActiveHandler;
}

- (BOOL)appIsActive;
- (void)_handleAppBecomeActive:(id)a0;
- (void)_handleAppResignActive:(id)a0;
- (void).cxx_destruct;
- (void)registerForAppStateNotifications;
- (void)_updateAppStateOnMainThread;
- (void)_updateAppStateWithCompletion:(id /* block */)a0;
- (id)initWithBecomeActiveHandler:(id /* block */)a0 resignActiveHandler:(id /* block */)a1;

@end
