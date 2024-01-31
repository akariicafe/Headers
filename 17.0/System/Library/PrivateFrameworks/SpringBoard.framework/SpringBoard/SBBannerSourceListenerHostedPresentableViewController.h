@class SBBannerGestureRecognizerPriorityAssertion, NSString, NSMutableDictionary, SBBarSwipeAffordanceView, SBBannerCustomTransitioningDelegate, NSMutableArray, UIViewController;
@protocol BNPresentableContext, SBPresentableSystemDragCancellationHandler, SBUIPresentableHomeGestureContext;

@interface SBBannerSourceListenerHostedPresentableViewController : BNBannerSourceListenerHostedPresentableViewController <SBBarSwipeAffordanceObserver, SBPresentableSystemDragCancelling, SBBannerPhysicalButtonTarget, SBBannerManagerPresentable, SBUIPresentableLocalHomeGestureParticipant, SBButtonEventsHandler, SBBannerLayoutCustomizing> {
    NSMutableArray *_wantsHomeAffordanceActionsAwaitingResponse;
    SBBannerGestureRecognizerPriorityAssertion *_gestureRecognizerPriorityAssertion;
    NSMutableDictionary *_buttonEventsToActions;
    SBBarSwipeAffordanceView *_barSwipeAffordanceView;
    BOOL _supportsCancellingSystemDragGesture;
    SBBannerCustomTransitioningDelegate *_customTransitioningDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBPresentableSystemDragCancellationHandler> systemDragCancellationHandler;
@property (readonly, nonatomic) long long presentableBehavior;
@property (weak, nonatomic) id<BNPresentableContext> presentableContext;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) long long presentableType;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (weak, nonatomic) id<SBUIPresentableHomeGestureContext> homeGestureContext;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } bannerContentOutsets;

- (void)scene:(id)a0 didReceiveActions:(id)a1;
- (void)dealloc;
- (id)transitioningDelegate;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (BOOL)handleVoiceCommandButtonPress;
- (BOOL)handleHomeButtonLongPress;
- (BOOL)handleVolumeUpButtonPress;
- (BOOL)handleLockButtonPress;
- (void)presentableWillDisappearAsBanner:(id)a0 withReason:(id)a1;
- (void).cxx_destruct;
- (BOOL)handleHomeButtonDoublePress;
- (BOOL)handleVolumeDownButtonPress;
- (BOOL)handleHeadsetButtonPress:(BOOL)a0;
- (BOOL)handleHomeButtonPress;
- (BOOL)shouldDismissForReason:(id)a0 outReason:(out id *)a1;
- (void)homeGesturePerformedForBarSwipeAffordanceView:(id)a0;
- (void)presentableWillAppearAsBanner:(id)a0;
- (void)homeGestureOwnershipDidChange:(BOOL)a0;
- (void)_invalidateAllButtonEventActions;
- (BOOL)shouldDisableTouchCancellationForTouch:(id)a0 event:(id)a1;
- (id)targetSceneForPhysicalButtonInteraction;

@end
