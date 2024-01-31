@class NSString, UIViewController;
@protocol BNPresentableContext, SBUIPresentableHomeGestureContext;

@interface SBNotificationPresentableViewController : NCNotificationPresentableViewController <SBBannerManagerPresentable, SBButtonEventsHandler, SBBarSwipeAffordanceObserver, SBUIPresentableLocalHomeGestureParticipant>

@property (readonly, nonatomic) long long presentableBehavior;
@property (weak, nonatomic) id<BNPresentableContext> presentableContext;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) long long presentableType;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBUIPresentableHomeGestureContext> homeGestureContext;

- (BOOL)handleVoiceCommandButtonPress;
- (BOOL)handleHomeButtonLongPress;
- (BOOL)handleVolumeUpButtonPress;
- (BOOL)handleLockButtonPress;
- (void).cxx_destruct;
- (void)longLookWillDismissForNotificationViewController:(id)a0;
- (BOOL)handleHomeButtonDoublePress;
- (BOOL)handleVolumeDownButtonPress;
- (void)longLookWillPresentForNotificationViewController:(id)a0;
- (BOOL)shouldAcquireWindowLevelAssertion;
- (BOOL)handleHeadsetButtonPress:(BOOL)a0;
- (void)longLookDidPresentForNotificationViewController:(id)a0;
- (BOOL)handleHomeButtonPress;
- (BOOL)shouldDismissForReason:(id)a0 outReason:(out id *)a1;
- (void)homeGesturePerformedForBarSwipeAffordanceView:(id)a0;

@end
