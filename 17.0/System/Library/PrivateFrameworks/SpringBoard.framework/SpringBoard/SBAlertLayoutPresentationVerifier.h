@class UIWindow, NSString, UIScreen, NSTimer, NSMutableArray, SBSharedModalAlertItemPresenter;

@interface SBAlertLayoutPresentationVerifier : NSObject <SBUIActiveOrientationObserver, SBReachabilityObserver> {
    BOOL _pendingLayoutVerification;
    BOOL _pendingScheduledLayoutVerification;
    NSMutableArray *_updateReasons;
    UIWindow *_alertWindow;
    SBSharedModalAlertItemPresenter *_alertPresenter;
    UIScreen *_screen;
    NSTimer *_bugCaptureTimer;
    double _lastAutoBugCaptureEventTime;
    double _firstLogEventTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)handleReachabilityYOffsetDidChange;
- (void)scheduleAlertLayoutVerificationForReason:(id)a0;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)a0;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)a0 willAnimateWithDuration:(double)a1 fromOrientation:(long long)a2;
- (id)initWithScreen:(id)a0;
- (void)setAlertPresenter:(id)a0;
- (void).cxx_destruct;
- (void)setAlertItemWindow:(id)a0;
- (void)scheduleDelayedAlertLayoutVerificationForReason:(id)a0;

@end
