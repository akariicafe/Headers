@class NSObject, NSDate;
@protocol OS_dispatch_source;

@interface SFChargingUICoordinator : SFXPCClient {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _animationSPIAdopted;
    BOOL _runningAsCarry;
    NSDate *_uiUpdateMaxDate;
    NSDate *_uiUpdateRequestDate;
    id /* block */ _uiUpdateHandler;
    BOOL _uiUpdateMinTimeElapsed;
    BOOL _uiUpdateShouldDismiss;
    NSObject<OS_dispatch_source> *_uiUpdateTimer;
}

@property (nonatomic) long long defaultDuration;

- (void)onqueue_connectionInvalidated;
- (BOOL)shouldEscapeXpcTryCatch;
- (void)onqueue_connectionEstablished;
- (id)exportedInterface;
- (id)remoteObjectInterface;
- (void)onqueue_connectionInterrupted;
- (void)_sendDismissUIWithReason:(long long)a0;
- (void)_activate;
- (void)_timingRestartMinTimer;
- (void)_initialViewControllerDidDisappear;
- (void)_requestToDismissUIHandler:(id /* block */)a0;
- (void)_invalidate;
- (void)invalidate;
- (void)activate;
- (void)requestToDismissUIHandler:(id /* block */)a0;
- (void)_dismissUI;
- (void).cxx_destruct;
- (void)_requestToStartAnimationAtDate:(id)a0;
- (void)requestToShowUIWithHandler:(id /* block */)a0;
- (id)machServiceName;
- (void)initialViewControllerDidDisappear;
- (void)sendDismissUIWithReason:(long long)a0;
- (void)requestAnimationDateWithCompletion:(id /* block */)a0;
- (void)initialViewControllerDidAppear;
- (void)_timingInvalidateMinTimer;
- (void)requestToStartAnimationAtDate:(id)a0;
- (void)_initialViewControllerDidAppear;

@end
