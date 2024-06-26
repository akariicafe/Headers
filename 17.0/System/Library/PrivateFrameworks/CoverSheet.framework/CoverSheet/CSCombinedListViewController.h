@class CSNotificationAdjunctListViewController, CSDNDBedtimeGreetingViewController, NCNotificationStructuredListViewController, UIScrollView, CSLockScreenSettings, DNDEventBehaviorResolutionService, NSMutableSet, DNDStateService, _UIGestureStudyInteraction, BSAbsoluteMachTimer, NCNotificationRequest, NCNotificationViewController, CSComponent, NSMapTable, CSQuickActionsComponent, UIViewController, SBSLockScreenContentAssertion, CSStatusBarBackgroundComponent, _UILegibilitySettings, CSWallpaperFloatingLayerComponent, NSLayoutConstraint, UIView, CSLayoutStrategy, DNDState, FCActivityManager, NSMutableDictionary, NSString, NSHashTable, CSDNDBedtimeController, CSListItemManager, NSSet, SBFTouchPassThroughView, PRWidgetMetricsProvider, CSStatusBarComponent, NSDate;
@protocol CSProximitySensorProviding, CSCombinedListViewControllerNotificationObserver, SBUIBiometricResource, CSNotificationPresenting, CSNotificationDispatcher, CSCoverSheetViewPresenting, CSActivityItemObserving, CSScrollablePageViewControllerProtocol, CSRemoteContentInlineProviding, SBFAuthenticationStatusProvider, SBFActionProviding, BSInvalidatable, CSPageViewControllerProtocol, CSCombinedListViewControllerDelegate, CSUnlockRequesting, CSDeviceOrientationProviding, CSPlatterHomeGestureManaging, CSCoverSheetGestureHandling, CSApplicationInforming, CSHomeAffordanceControlling;

@interface CSCombinedListViewController : CSCoverSheetViewControllerBase <CSNotificationAdjunctListViewControllerDelegate, SBFMotionGestureObserver, NCNotificationStructuredListContentObserver, CSStatusBarBackgroundIntersecting, PTSettingsKeyObserver, CSHomeGestureParticipating, CSDNDBedtimeControllerObserver, DNDStateUpdateListener, CSDNDBedtimeGreetingDelegate, CSApplicationInformationObserving, NCNotificationStructuredListViewControllerDelegate, SBUICoronaAnimationControllerParticipant, _UIGestureStudyInteractionDelegate, CSProximitySensorProviderObserver, CSListItemContaining, FCActivityManagerObserving, CSNotificationDestination, CSDateViewScrolling, CSAppearanceProviding, CSCoverSheetViewControllerObserver, SBFBacklightSceneHostEnvironmentProviding> {
    UIViewController *_captureOnlyMaterialViewController;
    NCNotificationStructuredListViewController *_structuredListViewController;
    UIView *_containerViewForExpandedNotificationContent;
    NSHashTable *_notificationContainerViewAssertions;
    SBFTouchPassThroughView *_clippingView;
    double _cachedAdjunctHeight;
    double _footerOffset;
    BOOL _listDismissingContent;
    BOOL _listBeingLaidOut;
    BSAbsoluteMachTimer *_significantUserInteractionTimer;
    BOOL _listSuppressLongLookDismissal;
    NSMapTable *_overrideNotificationListDisplayStyleAssertions;
    CSComponent *_dateViewComponent;
    CSComponent *_complicationContainerComponent;
    BOOL _usesRemoteInlineContentComponent;
    CSComponent *_remoteInlineContentComponent;
    CSStatusBarBackgroundComponent *_statusBarBackgroundComponent;
    CSComponent *_proudLockComponent;
    CSComponent *_homeAffordanceComponent;
    CSComponent *_footerCallToActionLabelComponent;
    CSStatusBarComponent *_statusBarComponent;
    CSWallpaperFloatingLayerComponent *_wallpaperFloatingLayerComponent;
    NSMutableSet *_quickActionsHiddenReasons;
    CSQuickActionsComponent *_quickActionsComponent;
    CSDNDBedtimeController *_dndBedtimeController;
    CSDNDBedtimeGreetingViewController *_dndBedtimeGreetingViewController;
    NSMutableSet *_backgroundAnimationDisabledReasons;
    NSMutableSet *_footerCallToActionHiddenReasons;
    NSMutableSet *_notificationListHiddenReasons;
    NSMutableSet *_dismissGestureDisabledReasons;
    _UILegibilitySettings *_legibilitySettings;
    _UIGestureStudyInteraction *_gestureStudyInteraction;
    NSDate *_screenOnTime;
    BOOL _confirmedNotInPocket;
    BOOL _shouldPadBottomSpacingWhileDragging;
    id<SBUIBiometricResource> _biometricResource;
    id<BSInvalidatable> _faceDetectWantedAssertion;
    id<BSInvalidatable> _notificationLongPressProximitySensorAssertion;
    id<BSInvalidatable> _deviceWakeProximitySensorAssertion;
    BOOL _faceInView;
    BOOL _liftDetected;
    BOOL _homeButtonPressDetected;
    BOOL _lockButtonPressDetected;
    BOOL _coverSheetWasDismissed;
    BOOL _historyWasRevealed;
    BOOL _proximitySensorCoveredSinceWake;
    BOOL _hasProximitySensor;
    BOOL _hadBreakthroughContent;
    BOOL _coverSheetResignedActive;
    DNDState *_activeDNDState;
    NSHashTable *_breakthroughContentObservers;
    FCActivityManager *_focusActivityManager;
}

@property (readonly, nonatomic) UIViewController *notificationListViewController;
@property (retain, nonatomic) CSNotificationAdjunctListViewController *adjunctListViewController;
@property (retain, nonatomic) CSListItemManager *supplementaryItemManager;
@property (retain, nonatomic) NSMutableDictionary *supplementaryItemContainersByIdentifier;
@property (retain, nonatomic) NSLayoutConstraint *adjunctListViewTopConstraint;
@property (retain, nonatomic) NCNotificationRequest *activeRaiseToListenNotificationRequest;
@property (retain, nonatomic) NCNotificationViewController *activePlatterHomeAffordanceOwningNotificationViewController;
@property (retain, nonatomic) DNDEventBehaviorResolutionService *dndEventBehaviorResolutionService;
@property (retain, nonatomic) DNDStateService *dndStateService;
@property (retain, nonatomic) CSLockScreenSettings *lockScreenSettings;
@property (retain, nonatomic) SBFTouchPassThroughView *debugViewLeft;
@property (retain, nonatomic) SBFTouchPassThroughView *debugViewRight;
@property (retain, nonatomic) NSMutableSet *hasUserInteractionReasons;
@property (nonatomic, getter=_disableScrolling, setter=_setDisableScrolling:) BOOL disableScrolling;
@property (nonatomic, getter=_isScreenOn, setter=_setScreenOn:) BOOL screenOn;
@property (readonly, nonatomic) BOOL disableBackgroundAnimation;
@property (readonly, nonatomic) BOOL footerCallToActionLabelHidden;
@property (readonly, nonatomic) BOOL notificationListHidden;
@property (readonly, nonatomic) BOOL dismissGestureDisabled;
@property (nonatomic, getter=hasPresentationDirtiedAppearance) BOOL presentationDirtiedAppearance;
@property (retain, nonatomic) UIViewController *digestOnboardingSuggestionViewController;
@property (retain, nonatomic) SBSLockScreenContentAssertion *digestOnboardingSuggestionViewControllerAssertion;
@property (nonatomic) BOOL allowsDNDStateService;
@property (readonly, nonatomic) UIScrollView *notificationListScrollView;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly, nonatomic) BOOL hasVisibleContentToReveal;
@property (readonly, nonatomic) BOOL hasVisibleBreakthroughContent;
@property (readonly, nonatomic) BOOL hasUserInteraction;
@property (readonly, nonatomic, getter=isShowingMediaControls) BOOL showingMediaControls;
@property (nonatomic, getter=isShowingFocusActivityView) BOOL showingFocusActivityView;
@property (readonly, nonatomic) double itemSpacing;
@property (readonly, nonatomic) double horizontalInsetMargin;
@property (readonly, nonatomic) NSString *listViewControllerBackgroundGroupName;
@property (retain, nonatomic) CSLayoutStrategy *layoutStrategy;
@property (weak, nonatomic) id<CSCombinedListViewControllerDelegate> delegate;
@property (weak, nonatomic) id<CSPageViewControllerProtocol> page;
@property (weak, nonatomic) id<CSScrollablePageViewControllerProtocol> scrollablePage;
@property (weak, nonatomic) id<SBFActionProviding> contentActionProvider;
@property (weak, nonatomic) id<CSApplicationInforming> applicationInformer;
@property (weak, nonatomic) id<CSHomeAffordanceControlling> homeAffordanceController;
@property (weak, nonatomic) id<CSPlatterHomeGestureManaging> platterHomeGestureManager;
@property (weak, nonatomic) id<CSUnlockRequesting> unlockRequester;
@property (weak, nonatomic) id<CSNotificationPresenting> notificationPresenter;
@property (weak, nonatomic) id<SBFAuthenticationStatusProvider> authenticationStatusProvider;
@property (weak, nonatomic) id<CSProximitySensorProviding> proximitySensorProvider;
@property (weak, nonatomic) id<CSDeviceOrientationProviding> deviceOrientationProvider;
@property (weak, nonatomic) id<CSRemoteContentInlineProviding> remoteContentInlineProvider;
@property (weak, nonatomic) id<CSCoverSheetViewPresenting> coverSheetViewPresenting;
@property (weak, nonatomic) id<CSCoverSheetGestureHandling> coverSheetGestureHandling;
@property (weak, nonatomic) PRWidgetMetricsProvider *widgetMetricsProvider;
@property (readonly, nonatomic, getter=isScrollingListContent) BOOL scrollingListContent;
@property (readonly, nonatomic, getter=isNotificationHistoryRevealed) BOOL notificationHistoryRevealed;
@property (weak, nonatomic) id<CSActivityItemObserving> activityItemObserver;
@property (nonatomic) BOOL showNotificationsInAlwaysOn;
@property (readonly, nonatomic) unsigned long long visibleNotificationCount;
@property (readonly, nonatomic, getter=isInteractingWithNotificationList) BOOL interactingWithNotificationList;
@property (weak, nonatomic) id<CSCombinedListViewControllerNotificationObserver> notificationObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double distanceFromBarToContent;
@property (readonly, nonatomic) double topContentInset;
@property (weak, nonatomic) id<CSNotificationDispatcher> dispatcher;
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, nonatomic) long long participantState;
@property (readonly, nonatomic) double clippingOffset;
@property (readonly, copy, nonatomic) NSString *appearanceIdentifier;
@property (readonly, copy, nonatomic) NSSet *components;
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings;

- (void)coverSheetViewControllerWillPresentPosterSwitcher:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insetMarginsToMimicForAdjunctListViewController:(id)a0;
- (BOOL)_hasUserInteraction;
- (void)updateNotificationRequest:(id)a0;
- (void)rebuildEverythingForReason:(id)a0;
- (void)_updateFaceDetectAssertion;
- (void)activeActivityDidChangeForManager:(id)a0;
- (void)_updateProudLockForHidden:(BOOL)a0 scrollOffset:(double)a1;
- (long long)presentationPriority;
- (void)notificationStructuredListViewController:(id)a0 setScheduledDelivery:(BOOL)a1 forSectionIdentifier:(id)a2;
- (void)_noteListContentsPotentiallyChanged;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })notificationStructuredListViewControllerRequestsEdgeInsetsForOverlayFooterView:(id)a0 forOrientation:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (id)_updateProximitySensorAssertion:(id)a0 wantsAssertion:(BOOL)a1 forReason:(id)a2;
- (void)_updateNotificationLongPressProximitySensorAssertion;
- (void)notificationStructuredListViewController:(id)a0 setAllowsTimeSensitive:(BOOL)a1 forSectionIdentifier:(id)a2;
- (void)_evaluateShouldShowGreeting:(id)a0 animated:(BOOL)a1;
- (void)setRestrictsTouchesForRemoteView:(BOOL)a0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)_setDisableBackgroundAnimation:(BOOL)a0 forReason:(id)a1;
- (void)dealloc;
- (void)notificationsLoadedForSectionIdentifier:(id)a0;
- (void)_screenTimeExpirationApplicationsDidChange:(id)a0;
- (void)_updateListItemAppearanceState;
- (void)_noteVisibleBreakthroughContentPotentiallyChanged;
- (void)_updateListViewContentInset;
- (void)_setQuickActionsHidden:(BOOL)a0 forReason:(id)a1;
- (void)_setDismissGestureDisabled:(BOOL)a0 forReason:(id)a1;
- (id)groupNameBaseForAdjunctListViewController:(id)a0;
- (long long)presentationType;
- (void)_updateCaptureOnlyMaterialView;
- (struct CGSize { double x0; double x1; })_adjunctListViewSizeIncludingSpacing;
- (void)dismissDNDBedtimeGreetingViewController:(id)a0 animated:(BOOL)a1;
- (BOOL)_shouldPadBottomSpacing;
- (void)notificationStructuredListViewController:(id)a0 didBeginUserInteractionWithViewController:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (id)unhideHomeAffordanceAnimationSettingsForNotificationStructuredListViewController:(id)a0;
- (BOOL)notificationStructuredListViewController:(id)a0 shouldFilterNotificationRequest:(id)a1;
- (void)notificationStructuredListViewController:(id)a0 setSystemScheduledDeliveryEnabled:(BOOL)a1 scheduledDeliveryTimes:(id)a2;
- (BOOL)notificationStructuredListViewController:(id)a0 shouldAllowInteractionsForNotificationRequest:(id)a1;
- (void)removeVisibleBreakthroughContentObserver:(id)a0;
- (void)_toggleGestureStudyInteractionIfNecessary;
- (void)_testingCoalesceExpandedBundleForNotificationRequest:(id)a0 withCompletion:(id /* block */)a1;
- (void)proximitySensorProvider:(id)a0 objectWithinProximityDidChange:(BOOL)a1;
- (void)_stopScreenOnTimer;
- (void)resetContentOffset;
- (void)focusActivityViewChangedToVisible:(BOOL)a0;
- (void)itemManager:(id)a0 removeItem:(id)a1;
- (void)_testingExpandCoalescedBundleForNotificationRequest:(id)a0 withCompletion:(id /* block */)a1;
- (void)_snapScrollView:(id)a0 toAcceptableOffsetAnimated:(BOOL)a1;
- (void)_liftToWakeGestureDetected;
- (BOOL)isNotificationContentExtensionVisible:(id)a0;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)_addStateCaptureHandlers;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)dndBedtimeControllerShowGreetingStateDidChange:(id)a0 animated:(BOOL)a1;
- (void)_handleBiometricEvent:(unsigned long long)a0;
- (BOOL)_notificationListExpandsVisibleRegionOnSignificantScroll;
- (BOOL)notificationStructuredListViewControllerShouldAllowNotificationHistoryReveal:(id)a0;
- (id)_modeIdentifierForDNDState:(id)a0;
- (void)notificationStructuredListViewController:(id)a0 setNotificationSystemSettings:(id)a1;
- (struct CGSize { double x0; double x1; })sizeToMimicForItemContentHost;
- (struct CGPoint { double x0; double x1; })_determineMaxContentOffsetForContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)notificationStructuredListViewController:(id)a0 requestsAuthenticationAndPerformBlock:(id /* block */)a1;
- (BOOL)_allowNotificationsRevealPolicy;
- (void)_startScreenOnTimer;
- (void)withdrawNotificationRequest:(id)a0;
- (void)stateService:(id)a0 didReceiveDoNotDisturbStateUpdate:(id)a1;
- (void)didReceiveRaiseGesture;
- (void)_updateNotificationListOffsetForExternalUpdate;
- (id)notificationStructuredListViewController:(id)a0 notificationRequestForUUID:(id)a1;
- (void)_updateRaiseGestureDetectionForNotificationRequest:(id)a0;
- (void)itemManagerDidAddNewSceneHostEnvironment;
- (id)sceneHostEnvironmentEntriesForBacklightSession;
- (BOOL)notificationStructuredListViewControllerShouldAllowLongPressGesture:(id)a0;
- (void)_performSelfCorrectingListViewAction:(id /* block */)a0;
- (void)_updateActiveDNDState:(id)a0;
- (void)notificationStructuredListViewControllerDidScrollToRevealNotificationHistory:(id)a0;
- (void)_setHasUserInteraction:(BOOL)a0 forReason:(id)a1;
- (BOOL)_isClockSnoozeAlarmNotificationRequest:(id)a0;
- (BOOL)isNotificationListSignificantlyScrolled;
- (void)notificationStructuredListViewControllerDidBeginUserInteraction:(id)a0;
- (void)notificationStructuredListViewControllerDidEndUserInteraction:(id)a0;
- (struct CGSize { double x0; double x1; })sizeToMimicForAdjunctListViewController:(id)a0;
- (BOOL)_shouldHideProudLockForScroll;
- (BOOL)_shouldPreventNotificationHistoryRevealForActiveDNDState;
- (id)initWithNibName:(id)a0 bundle:(id)a1 dndBedtimeController:(id)a2;
- (void)aggregateAppearance:(id)a0;
- (id)_threadIdentifierForNotificationRequest:(id)a0;
- (void)_removeAllUserInteractionReasons;
- (void)itemManager:(id)a0 significantUserInteractionBeganWithItem:(id)a1;
- (void)_updateStructuredListOverrideUserInterfaceStyle;
- (void)dndBedtimeControllerActiveStateDidChange:(id)a0;
- (void)_triggerSignificantUserInteractionIfNeeded;
- (void)notificationStructuredListViewController:(id)a0 setMuted:(BOOL)a1 untilDate:(id)a2 forSectionIdentifier:(id)a3 threadIdentifier:(id)a4;
- (void)updateForLegibilitySettings:(id)a0;
- (double)_minListHeightForPadding;
- (void)_testingClearAllNotificationRequests;
- (void)notificationStructuredListViewController:(id)a0 requestsClearingSupplementaryViewControllers:(id)a1;
- (void)coronaAnimationController:(id)a0 willAnimateCoronaTransitionWithAnimator:(id)a1;
- (void)revealNotificationHistory:(BOOL)a0 animated:(BOOL)a1;
- (void)postNotificationRequest:(id)a0;
- (void)updateAppearanceForStatusBarBackgroundHidden:(BOOL)a0;
- (void)_dismissDNDBedtimeGreetingViewAnimated:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)isTouchLocationInRestrictedRect:(struct CGPoint { double x0; double x1; })a0;
- (id)notificationStructuredListViewController:(id)a0 requestsSectionSettingsForSectionIdentifier:(id)a1;
- (void)_homeButtonPressDetected;
- (void)viewWillDisappear:(BOOL)a0;
- (void)updateAppearanceForHidden:(BOOL)a0 offset:(double)a1;
- (void)itemManager:(id)a0 significantUserInteractionEndedWithItem:(id)a1;
- (void)notificationStructuredListViewController:(id)a0 shouldFinishLongLookTransitionForNotificationRequest:(id)a1 trigger:(long long)a2 withCompletionBlock:(id /* block */)a3;
- (void)_updateDeviceWakeProximitySensorAssertion;
- (double)_minInsetsToPushDateOffScreen;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (id)hideHomeAffordanceAnimationSettingsForNotificationStructuredListViewController:(id)a0;
- (BOOL)isPresentingNotificationInLongLook;
- (id)initWithDNDBedtimeController:(id)a0;
- (void)applicationInformer:(id)a0 updatedApplications:(id)a1;
- (void)_setInlineContentHidden:(BOOL)a0;
- (double)interItemSpacingToMimicForAdjunctListViewController:(id)a0;
- (BOOL)dismissNotificationInLongLookAnimated:(BOOL)a0;
- (BOOL)notificationStructuredListViewControllerShouldHintForDefaultAction:(id)a0;
- (void)itemManager:(id)a0 insertItem:(id)a1;
- (void)_setListHasContent:(BOOL)a0;
- (void)addVisibleBreakthroughContentObserver:(id)a0;
- (void).cxx_destruct;
- (void)_setNotificationListHidden:(BOOL)a0 forReason:(id)a1;
- (void)layoutListView;
- (void)_updateHidingQuickActionsForSignificantScrolling:(BOOL)a0;
- (void)notificationStructuredListViewController:(id)a0 setAllowsNotifications:(BOOL)a1 forSectionIdentifier:(id)a2;
- (BOOL)interpretsViewAsAdjunctContent:(id)a0;
- (void)_lockButtonPressDetected;
- (void)_noteListContentsPotentiallyChangedAfterTransitionFrom:(BOOL)a0 to:(BOOL)a1;
- (long long)_uiBacklightLuminanceForBLSBacklightState:(long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_listViewDefaultContentInsets;
- (void)updateNotificationSystemSettings:(id)a0 previousSystemSettings:(id)a1;
- (double)_sanitizedContentOffset:(double)a0 forContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void)updateNotificationSectionSettings:(id)a0 previousSectionSettings:(id)a1;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)a0 ownsHomeGesture:(BOOL)a1;
- (void)_tearDownContainerViewForExpandedNotificationContent;
- (id)notificationUsageTrackingStateForNotificationStructuredListViewController:(id)a0;
- (void)_didUpdateSetHasUserInteraction;
- (id)metadataForTriggeredInteraction:(id)a0;
- (BOOL)_hasExperiencedSignificantScrollingOnScrollView:(id)a0;
- (void)notificationStructuredListViewController:(id)a0 requestsClearingNotificationRequestsInSections:(id)a1;
- (BOOL)_shouldScreenTimeSuppressNotificationsForBundleIdentifier:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_suggestedListViewFrame;
- (double)_statusBarHeight;
- (void)notificationStructuredListViewController:(id)a0 setAllowsCriticalAlerts:(BOOL)a1 forSectionIdentifier:(id)a2;
- (void)forceNotificationHistoryRevealed:(BOOL)a0 animated:(BOOL)a1;
- (id)_identifierForNotificationRequest:(id)a0;
- (struct CGSize { double x0; double x1; })_adjunctListViewSize;
- (void)notificationStructuredListViewController:(id)a0 requestPermissionToExecuteAction:(id)a1 forNotificationRequest:(id)a2 withParameters:(id)a3 completion:(id /* block */)a4;
- (void)aggregateBehavior:(id)a0;
- (void)structuredListContentChanged:(BOOL)a0;
- (id)acquireOverrideNotificationListDisplayStyleAssertionWithStyle:(unsigned long long)a0 hideNotificationCount:(BOOL)a1 reason:(id)a2;
- (BOOL)interpretsViewAsContent:(id)a0;
- (void)notificationStructuredListViewControllerDidSignificantUserInteraction:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)notificationStructuredListViewController:(id)a0 didEndUserInteractionWithViewController:(id)a1;
- (void)notificationStructuredListViewController:(id)a0 requestsClearingFromIncomingSectionNotificationRequests:(id)a1;
- (void)itemManager:(id)a0 cancelTouchesForInteractionWithItem:(id)a1;
- (BOOL)wouldHandleButtonEvent:(id)a0;
- (BOOL)notificationStructuredListViewController:(id)a0 isClockNotificationRequest:(id)a1;
- (void)_updatePresentation;
- (void)_snapToAcceptableOffsetForScrollView:(id)a0;
- (void)_requestAuthenticationWithCompletion:(id /* block */)a0;
- (void)performCustomTransitionToVisible:(BOOL)a0 withAnimationSettings:(id)a1 completion:(id /* block */)a2;
- (id)legibilitySettingsForNotificationStructuredListViewController:(id)a0;
- (void)_updateQuickActionsVisibilityForScrollView:(id)a0;
- (void)notificationStructuredListViewController:(id)a0 requestsCancelTouches:(BOOL)a1 onSupplementaryViewController:(id)a2;
- (void)notificationStructuredListViewController:(id)a0 requestsPresentingFocusActivityPickerFromView:(id)a1;
- (BOOL)_shouldPadBottomSpacingIsDragging:(BOOL)a0;
- (void)migrateIncomingNotificationsToNotificationCenter;
- (double)defaultRestingOffsetExcludingAdjunct;
- (void)itemManager:(id)a0 updateItem:(id)a1;
- (void)itemManager:(id)a0 setNowPlayingItem:(id)a1;
- (void)notificationStructuredListViewController:(id)a0 isPresentingLongLookForViewController:(id)a1;
- (void)adjunctListViewController:(id)a0 updatedNowPlayingVisbility:(BOOL)a1;
- (void)_layoutListView;
- (void)notificationStructuredListViewController:(id)a0 setAllowsDirectMessages:(BOOL)a1 forSectionIdentifier:(id)a2;
- (id)notificationStructuredListViewController:(id)a0 containerViewProviderForExpandedContentForViewController:(id)a1;
- (void)_setFooterCallToActionLabelHidden:(BOOL)a0 forReason:(id)a1;
- (struct CGSize { double x0; double x1; })effectiveContentSizeForScrollView:(id)a0;
- (void)adjunctListViewController:(id)a0 didUpdateWithSize:(struct CGSize { double x0; double x1; })a1;
- (void)itemManager:(id)a0 requestsModalPresentationOfViewController:(id)a1 forItem:(id)a2 animated:(BOOL)a3 completion:(id /* block */)a4;
- (void)notificationStructuredListViewController:(id)a0 requestsPresentingDigestOnboardingSuggestionViewController:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)itemManager:(id)a0 requestsAuthenticationAndPerformBlock:(id /* block */)a1;
- (void)notificationStructuredListViewController:(id)a0 didUpdateOverlayFooterContentVisibility:(BOOL)a1;
- (void)scrollViewDidScroll:(id)a0;
- (id)_testingNotificationRequestWithIdentifier:(id)a0 sectionIdentifier:(id)a1;
- (long long)presentationTransition;
- (id)notificationStructuredListViewController:(id)a0 keyboardAssertionForGestureWindow:(id)a1;
- (void)notificationStructuredListViewController:(id)a0 requestsExecuteAction:(id)a1 forNotificationRequest:(id)a2 requestAuthentication:(BOOL)a3 withParameters:(id)a4 completion:(id /* block */)a5;
- (void)setOverrideNotificationListDisplayStyleSetting:(unsigned long long)a0;
- (id)settleHomeAffordanceAnimationBehaviorDescriptionForNotificationStructuredListViewController:(id)a0;
- (void)resetOverrideNotificationListDisplayStyleSetting;
- (void)_updateStructuredListOverrideUserInterfaceStyleWithBacklightLuminance:(long long)a0;
- (void)notificationStructuredListViewControllerWillExpandNotificationListCount:(id)a0;
- (BOOL)_shouldFilterNotificationRequest:(id)a0;
- (void)notificationStructuredListViewController:(id)a0 setDeliverQuietly:(BOOL)a1 forSectionIdentifier:(id)a2;
- (id)notificationStructuredListViewControllerRequestsSystemSettings:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (BOOL)handleEvent:(id)a0;
- (BOOL)_allowsDateViewOrProudLockScroll;
- (void)itemManager:(id)a0 insertSection:(id)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)_publishVisibleNotificationCountOnContentChange;
- (Class)notificationStructuredListViewControllerNotificationViewControllerClass:(id)a0;
- (void)notificationStructuredListViewController:(id)a0 requestsClearingNotificationRequests:(id)a1;
- (void)settleContentOffset;

@end
