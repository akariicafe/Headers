@class UIView, NSString, NSArray, NSHashTable, SAUIPreferredLayoutModeAssertion, UIImageView, NSMutableDictionary, NSPointerArray, NSMapTable, SAAutomaticallyInvalidatingAssertion;
@protocol SAUILayoutModePreferring, SAAutomaticallyInvalidatable, SAUILayoutHosting, SAElementViewProviding;

@interface SAUILayoutSpecifyingElementViewController : UIViewController <SAElementHosting, SAActivityHostingPrivate, SAUILayoutHosting, SAUILayoutSpecifyingPrivate, SAUILayoutSpecifyingOverridingParticipant, SAUIElementViewPreferencesAccepting, SAActivityHosting, SAAlertHosting, SAUIElementViewControlling, SAUILayoutSpecifying, SAUIContentTransitioning, SAUITransitionTracking> {
    UIImageView *_contentsTransitionShadowView;
    NSMutableDictionary *_transitionIDsToReasons;
    NSPointerArray *_preferredLayoutModeAssertions;
    SAUIPreferredLayoutModeAssertion *_preferredLayoutModeAssertion;
    NSMapTable *_reasonsToAlertingActivityAssertions;
    SAAutomaticallyInvalidatingAssertion *_cooldownAssertion;
    NSHashTable *_observers;
    long long _previousLayoutMode;
    double _blurProgress;
    double _sensorObscuringShadowProgress;
}

@property (readonly, nonatomic, getter=_containerView) UIView *containerView;
@property (readonly, nonatomic, getter=_contentView) UIView *contentView;
@property (readonly, nonatomic, getter=_isObstructedBySensorRegion) BOOL obstructedBySensorRegion;
@property (readonly, nonatomic, getter=_obstructedRegionSize) struct CGSize { double x0; double x1; } obstructedRegionSize;
@property (readonly, nonatomic, getter=_previousLayoutMode) long long previousLayoutMode;
@property (readonly, nonatomic, getter=_isNotInCustomLayoutOrTransitionFromCustomLayout) BOOL notInCustomLayoutOrTransitionFromCustomLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *temporallyOrderedAlertingActivityAssertions;
@property (readonly, weak, nonatomic) id<SAAutomaticallyInvalidatable> alertingActivityAssertion;
@property (readonly, nonatomic) id<SAUILayoutModePreferring> layoutModePreference;
@property (readonly, nonatomic) SAUIPreferredLayoutModeAssertion *preferredLayoutModeAssertion;
@property (readonly, copy, nonatomic) NSArray *preferredLayoutModeAssertions;
@property (readonly, nonatomic) long long layoutMode;
@property (readonly, nonatomic) long long minimumSupportedLayoutMode;
@property (readonly, nonatomic) long long maximumSupportedLayoutMode;
@property (readonly, nonatomic) long long preferredLayoutMode;
@property (weak, nonatomic) id<SAUILayoutHosting> layoutHost;
@property (readonly, nonatomic, getter=isInteractiveDismissalEnabled) BOOL interactiveDismissalEnabled;
@property (readonly, nonatomic, getter=isMinimalPresentationPossible) BOOL minimalPresentationPossible;
@property (readonly, nonatomic, getter=isRequestingMenuPresentation) BOOL requestingMenuPresentation;
@property (readonly, nonatomic) long long behaviorOverridingRole;
@property (nonatomic) double sensorObscuringShadowProgress;
@property (readonly, weak, nonatomic) id<SAAutomaticallyInvalidatable> alertingActivityAssertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<SAAutomaticallyInvalidatable> alertAssertion;
@property (readonly, nonatomic) id<SAElementViewProviding> elementViewProvider;
@property (readonly, nonatomic) long long layoutMode;
@property (readonly, nonatomic) long long minimumSupportedLayoutMode;
@property (readonly, nonatomic) long long maximumSupportedLayoutMode;
@property (readonly, nonatomic) long long preferredLayoutMode;
@property (weak, nonatomic) id<SAUILayoutHosting> layoutHost;
@property (readonly, nonatomic, getter=isInteractiveDismissalEnabled) BOOL interactiveDismissalEnabled;
@property (readonly, nonatomic, getter=isMinimalPresentationPossible) BOOL minimalPresentationPossible;
@property (readonly, nonatomic, getter=isRequestingMenuPresentation) BOOL requestingMenuPresentation;
@property (readonly, nonatomic, getter=isTrackingTransition) BOOL trackingTransition;

+ (void)initialize;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)_enumerateObserversRespondingToSelector:(SEL)a0 usingBlock:(id /* block */)a1;
- (void)viewDidLoad;
- (BOOL)handleLongPress:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)handleTap:(id)a0;
- (id)_elementHost;
- (void)addElementViewControllingObserver:(id)a0;
- (id)alertWithReason:(id)a0;
- (double)concentricPaddingForProvidedView:(id)a0 fromViewProvider:(id)a1;
- (void)contentProviderWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 inContainerView:(id)a1 transitionCoordinator:(id)a2;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })edgeOutsetsForSize:(struct CGSize { double x0; double x1; })a0;
- (void)elementRequestsNegativeResponse:(id)a0;
- (void)elementRequestsSignificantUpdateTransition:(id)a0;
- (BOOL)isInteractiveDismissalEnabledForTargetWithOverrider:(id)a0 isDefaultValue:(BOOL *)a1;
- (BOOL)isMinimalPresentationPossibleForTargetWithOverrider:(id)a0 isDefaultValue:(BOOL *)a1;
- (long long)layoutModeForTargetWithOverrider:(id)a0 isDefaultValue:(BOOL *)a1;
- (id)layoutModePreferenceForTargetWithOverrider:(id)a0 isDefaultValue:(BOOL *)a1;
- (long long)maximumSupportedLayoutModeForTargetWithOverrider:(id)a0 isDefaultValue:(BOOL *)a1;
- (void)menuPresentationRequestDidChangeForLayoutSpecifier:(id)a0;
- (long long)minimumSupportedLayoutModeForTargetWithOverrider:(id)a0 isDefaultValue:(BOOL *)a1;
- (void)preferredEdgeOutsetsDidInvalidateForLayoutSpecifier:(id)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })preferredEdgeOutsetsForLayoutMode:(long long)a0 suggestedOutsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 maximumOutsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })preferredEdgeOutsetsForLayoutMode:(long long)a0 suggestedOutsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 maximumOutsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a2 forTargetWithOverrider:(id)a3 isDefaultValue:(BOOL *)a4;
- (id)preferredLayoutModeAssertionForTargetWithOverrider:(id)a0 isDefaultValue:(BOOL *)a1;
- (void)preferredLayoutModeDidInvalidateForLayoutSpecifier:(id)a0;
- (void)preferredPromotionDidInvalidateForLayoutSpecifier:(id)a0;
- (void)removeElementViewControllingObserver:(id)a0;
- (void)setLayoutMode:(long long)a0 reason:(long long)a1;
- (void)setLayoutMode:(long long)a0 reason:(long long)a1 forTargetWithOverrider:(id)a2;
- (void)setPreferredLayoutMode:(long long)a0 reason:(long long)a1;
- (void)setPreferredLayoutMode:(long long)a0 reason:(long long)a1 forTargetWithOverrider:(id)a2;
- (id)systemManagedAlertingActivityAssertionWithReason:(id)a0;
- (id)systemManagedAlertingActivityAssertionWithReason:(id)a0 preferredLayoutMode:(long long)a1;
- (BOOL)_axCollapseIfExpandedByUserInteraction;
- (void)_axRequestDiminishment;
- (BOOL)_expandToCustomLayoutModeFromUserActionIfPossible;
- (BOOL)isTrackingTransitionWithReason:(id)a0;
- (id)_alertingActivityAssertionWithReason:(id)a0 withPreferredLayoutMode:(long long)a1;
- (void)_configureAlertAssertionIfNecessary;
- (void)_configureTransitionShadowViewIfNecessary;
- (double)_defaultAlertingDuration;
- (void)_insertSnapshotView:(id)a0;
- (void)_invalidateElementPromotionPreferences;
- (void)_invalidatePreferredLayoutModeAssertionWithReason:(long long)a0;
- (void)_layoutTransitionShadowView;
- (id)_overrideWithPreference:(id)a0;
- (void)_setBlurProgress:(double)a0 forView:(id)a1;
- (void)_setPreviousLayoutMode:(long long)a0;
- (id /* block */)_updatePreferredLayoutModeAssertionWithPreference:(id)a0;
- (void)beginTrackingTransitionWithUniqueIdentifier:(id)a0 reason:(id)a1;
- (void)endTrackingTransitionWithUniqueIdentifier:(id)a0;
- (id)initWithElementViewProvider:(id)a0;

@end
