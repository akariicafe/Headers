@class NSHashTable, NSString, SBBarSwipeAffordanceViewController, UITapGestureRecognizer, SBFWindow, SBFFrameRateAssertion, NSCountedSet, UIPanGestureRecognizer, UIViewController, SBHomeScreenOverlayViewController;
@protocol SBHomeScreenOverlayControllerDelegate, SBFOverlayDismissalDelegate, BSInvalidatable, SBHLibraryViewControllerPresenter, SBHWidgetSheetViewControllerPresenter, SBHVisibleContentPresenter;

@interface SBHomeScreenOverlayController : NSObject <SBBarSwipeAffordanceDelegate, SBBarSwipeAffordanceObserver, SBHomeScreenOverlayViewControllerDelegate, UIGestureRecognizerDelegate, SBFOverlayControlling, SBFIdleTimerBehaviorProviding, CSExternalBehaviorProviding, CSExternalEventHandling, BSDescriptionProviding, SBFOverlayDismissalDelegate, SBHVisibleContentPresenter> {
    NSHashTable *_observers;
    NSCountedSet *_reasonsToDisablePanGestureRecognizer;
    SBFFrameRateAssertion *_frameRateAssertion;
}

@property (readonly, nonatomic) SBFWindow *window;
@property (readonly, nonatomic) SBBarSwipeAffordanceViewController *homeAffordanceViewController;
@property (readonly, nonatomic) SBHomeScreenOverlayViewController *overlayViewController;
@property (retain, nonatomic) id<BSInvalidatable> displayLayoutAssertion;
@property (nonatomic, getter=isDismissing) BOOL dismissing;
@property (readonly, nonatomic) unsigned long long screenEdgeSystemGestureType;
@property (retain, nonatomic) UIPanGestureRecognizer *dismissPanGestureRecognizer;
@property (readonly, nonatomic) unsigned long long indirectScreenEdgeSystemGestureType;
@property (readonly, nonatomic) unsigned long long scrunchSystemGestureType;
@property (nonatomic, getter=isAnimatingPresentationProgress) BOOL animatingPresentationProgress;
@property (nonatomic, getter=isOverlayAppearing) BOOL overlayAppearing;
@property (weak, nonatomic) UIViewController *existingAvocadoVC;
@property (nonatomic) double initialPresentationProgress;
@property (nonatomic) BOOL shouldUseReducedMotionAnimation;
@property (weak, nonatomic) id<SBHomeScreenOverlayControllerDelegate> delegate;
@property (readonly, nonatomic) UIViewController<SBHLibraryViewControllerPresenter, SBHWidgetSheetViewControllerPresenter> *viewController;
@property (retain, nonatomic) UIViewController<SBHVisibleContentPresenter> *leadingSidebarViewController;
@property (retain, nonatomic) UIViewController<SBHVisibleContentPresenter> *trailingSidebarViewController;
@property (readonly, nonatomic) UIViewController *activeSidebarViewController;
@property (readonly, nonatomic) UITapGestureRecognizer *dismissTapGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double contentWidth;
@property (nonatomic) double presentationProgress;
@property (readonly, nonatomic, getter=isPresented) BOOL presented;
@property (weak, nonatomic) id<SBFOverlayDismissalDelegate> dismissalDelegate;
@property (readonly, nonatomic) long long idleTimerDuration;
@property (readonly, nonatomic) long long idleTimerMode;
@property (readonly, nonatomic) long long idleWarnMode;
@property (readonly, nonatomic) double customIdleExpirationTimeout;
@property (readonly, nonatomic) double customIdleWarningTimeout;
@property (readonly, nonatomic) long long scrollingStrategy;
@property (readonly, nonatomic) long long notificationBehavior;
@property (readonly, nonatomic) unsigned long long restrictedCapabilities;
@property (readonly, nonatomic) long long proximityDetectionMode;
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, nonatomic) long long participantState;
@property (nonatomic) unsigned long long contentVisibility;

- (void)dismissTapGestureUpdated:(id)a0;
- (void)dismissUsingViewControllerTransitionCoordinator:(id)a0;
- (void)_addSystemGestureRecognizer;
- (void)homeScreenOverlayViewWantsToEndEditing:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)_enumerateHomeScreenOverlayObserversUsingBlock:(id /* block */)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithListLayoutProvider:(id)a0 windowLevel:(double)a1 windowScene:(id)a2 traitsRole:(id)a3 zStackParticipantIdentifier:(long long)a4 screenEdgeSystemGestureType:(unsigned long long)a5 indirectScreenEdgeSystemGestureType:(unsigned long long)a6 scrunchSystemGestureType:(unsigned long long)a7 secure:(BOOL)a8;
- (void)dismissScrollGestureUpdated:(id)a0;
- (id)backgroundViewForEditingDoneButtonForHomeScreenOverlayViewController:(id)a0;
- (void)removeReasonToDisableDismissGestureRecognizer:(id)a0;
- (void)_setHitTestingDisabled:(BOOL)a0;
- (void)prepareToSetPresentationProgress:(double)a0 fromPresentationProgress:(double)a1;
- (BOOL)interceptDismissalGestureForOverlayController:(id)a0;
- (id)_rootViewController;
- (double)_directionCoefficient;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)overlayControllerRequestsDismissal:(id)a0;
- (void)updateExtraButtonVisibilityAnimated:(BOOL)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)conformsToCSExternalBehaviorProviding;
- (void)setPresentationProgress:(double)a0 fromLeading:(BOOL)a1;
- (double)layerPresentationProgress;
- (void)presentAnimated:(BOOL)a0 fromLeading:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)animatePresentationProgress:(double)a0 withGestureLiftOffVelocity:(double)a1 completionHandler:(id /* block */)a2;
- (BOOL)showsAddWidgetButtonWhileEditingForHomeScreenOverlayViewController:(id)a0;
- (void)_dismissScrollGestureBegan:(id)a0;
- (void)presentAnimated:(BOOL)a0 fromLeading:(BOOL)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (BOOL)showsDoneButtonWhileEditingForHomeScreenOverlayViewController:(id)a0;
- (void)conformsToCSEventHandling;
- (void)_dismissScrollGestureChanged:(id)a0;
- (void)homeScreenOverlayViewController:(id)a0 setSuppressesEditingStateForListView:(BOOL)a1;
- (void)presentAnimated:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)setPresentationProgress:(double)a0 interactive:(BOOL)a1 animated:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)testScrollView;
- (void).cxx_destruct;
- (void)addHomeScreenOverlayObserver:(id)a0;
- (void)_removeSystemGestureRecognizer;
- (void)presentAnimated:(BOOL)a0;
- (double)finalPresentationProgressForTranslation:(double)a0 velocity:(double)a1 initialPresentationProgress:(double)a2 fromLeading:(BOOL)a3;
- (id)succinctDescription;
- (void)setPresentationProgress:(double)a0 fromLeading:(BOOL)a1 interactive:(BOOL)a2 animated:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)_dismissScrollGestureEndedOrCancelled:(id)a0;
- (void)addReasonToDisableDismissGestureRecognizer:(id)a0;
- (unsigned long long)barSwipeAffordanceView:(id)a0 systemGestureTypeForType:(long long)a1;
- (void)conformsToCSBehaviorProviding;
- (BOOL)wouldHandleButtonEvent:(id)a0;
- (void)cleanUpAfterSettingPresentationProgress:(double)a0;
- (void)_setHidden:(BOOL)a0;
- (id)initWithListLayoutProvider:(id)a0;
- (void)_configureDismissGestureRecognizer;
- (void)_dismissLevelAnimated:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)removeHomeScreenOverlayObserver:(id)a0;
- (double)presentationProgressForTranslation:(double)a0 initialPresentationProgress:(double)a1 fromLeading:(BOOL)a2;
- (void)homeScreenOverlayViewControllerRequestsDismissal:(id)a0;
- (BOOL)isEditingForHomeScreenOverlayViewController:(id)a0;
- (void)homeScreenOverlayViewWantsWidgetEditingViewControllerPresented:(id)a0;
- (BOOL)handleEvent:(id)a0;
- (void)_setDisplayLayoutElementActive:(BOOL)a0;
- (void)homeGesturePerformedForBarSwipeAffordanceView:(id)a0;
- (void)dismissAnimated:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
