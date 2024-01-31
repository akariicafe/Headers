@class SBDeviceApplicationSceneViewController, NSString, SBDeviceApplicationSceneHandle, SBSceneViewStatusBarAssertion, SBSUIInCallSceneClientSettingsDiffInspector, UIViewController;
@protocol BNPresentableContext, SBInCallBannerPresentableViewControllerDelegate, BNPanGestureProxy;

@interface SBInCallBannerPresentableViewController : UIViewController <SBDeviceApplicationSceneHandleObserver, SBBannerManagerPresentable, SBButtonEventsHandler, BSInvalidatable> {
    BOOL _didCrossDefaultDraggingThreshold;
    id<BNPanGestureProxy> _lastGestureProxy;
    SBDeviceApplicationSceneViewController *_sceneViewController;
    SBSceneViewStatusBarAssertion *_statusBarHiddenAssertion;
    SBSUIInCallSceneClientSettingsDiffInspector *_inCallSceneClientSettingsDiffInspector;
}

@property (class, readonly) double cornerRadius;
@property (class, readonly, copy) NSString *requesterIdentifier;

@property (weak, nonatomic) id<SBInCallBannerPresentableViewControllerDelegate> delegate;
@property (nonatomic) struct CGSize { double width; double height; } preferredBannerContentSize;
@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;
@property (readonly, nonatomic, getter=isCallConnected) BOOL callConnected;
@property (readonly, nonatomic, getter=isPresented) BOOL presented;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long presentableBehavior;
@property (weak, nonatomic) id<BNPresentableContext> presentableContext;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) long long presentableType;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;

- (void)sceneHandle:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 transitionContext:(id)a2;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (BOOL)handleVoiceCommandButtonPress;
- (BOOL)handleHomeButtonLongPress;
- (void)viewDidLoad;
- (BOOL)handleVolumeUpButtonPress;
- (void)invalidate;
- (BOOL)handleLockButtonPress;
- (void)userInteractionDidEndForBannerForPresentable:(id)a0;
- (void)presentableWillDisappearAsBanner:(id)a0 withReason:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)presentableDidDisappearAsBanner:(id)a0 withReason:(id)a1;
- (void).cxx_destruct;
- (BOOL)handleHomeButtonDoublePress;
- (void)userInteractionWillBeginForBannerForPresentable:(id)a0;
- (void)presentableDidAppearAsBanner:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)handleVolumeDownButtonPress;
- (BOOL)handleHeadsetButtonPress:(BOOL)a0;
- (BOOL)handleHomeButtonPress;
- (id)initWithSceneHandle:(id)a0;
- (void)presentableWillAppearAsBanner:(id)a0;
- (void)draggingDidBeginWithGestureProxy:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSizeWithPresentationSize:(struct CGSize { double x0; double x1; })a0 containerSize:(struct CGSize { double x0; double x1; })a1;
- (void)_handlePanGestureProxyAction:(id)a0;
- (struct CGPoint { double x0; double x1; })translationInCoordinateSpace:(id)a0;
- (struct CGPoint { double x0; double x1; })velocityInCoordinateSpace:(id)a0;
- (struct CGPoint { double x0; double x1; })visualTranslationInCoordinateSpace:(id)a0;
- (void)_callConnectedStatusChanged;
- (void)_handleTapAction:(id)a0;
- (id)_inCallSceneClientSettingsDiffInspector;
- (BOOL)shouldDismissForReason:(id)a0;

@end
