@interface AXWatchRemoteScreenUI.AXTwiceCompanionRootViewController : UIViewController <AXTwiceRemoteScreenMessengerDelegateProtocolObjc, AXTwiceCompanionAirplayReceiverDelegate, AXWatchRemoteScreenUI.AXTwiceCompanionRendererViewDelegate> {
    void /* unknown type, empty encoding */ eventSerialQueue;
    void /* unknown type, empty encoding */ $__lazy_storage_$_airplayReceiver;
    void /* unknown type, empty encoding */ lastHIDEvent;
    void /* unknown type, empty encoding */ intervalHIDThreshold;
    void /* unknown type, empty encoding */ $__lazy_storage_$_distanceHIDThreshold;
    void /* unknown type, empty encoding */ hidEventReason;
    void /* unknown type, empty encoding */ $__lazy_storage_$_eventProcessor;
    void /* unknown type, empty encoding */ gizmoErrorRetryLimit;
    void /* unknown type, empty encoding */ remoteMessenger;
    void /* unknown type, empty encoding */ currentState;
    void /* unknown type, empty encoding */ inactiveDate;
    void /* unknown type, empty encoding */ inactiveTimeInterval;
    void /* unknown type, empty encoding */ $__lazy_storage_$_inactiveTimer;
    void /* unknown type, empty encoding */ mainVC;
    void /* unknown type, empty encoding */ viewDidAppearDate;
}

- (void)twiceRemoteScreenReceiveMessage:(id)a0;
- (void)airplayDidStartStreamingWithMirroringLayer:(id)a0;
- (void)airplayDidStopStreaming;
- (void)axActionPerformWithAction:(int)a0 value:(id)a1 bridgeElement:(id)a2;
- (void)axElementActivate:(struct CGPoint { double x0; double x1; })a0;
- (void)crownButtonLongPressed;
- (void)crownButtonPressed;
- (void)crownButtonScrollDown;
- (void)crownButtonScrollUp;
- (void)dismissButtonTappedWithSender:(id)a0;
- (void)doubleCrownButtonPressed;
- (void)pullToDismissViewController;
- (void)sideButtonLongPressed;
- (void)sideButtonPressed;
- (void)stingButtonKeycord;
- (void)stingButtonLongPressed;
- (void)stingButtonPressed;
- (void)tripleCrownButtonPressed;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithCoder:(id)a0;

@end
