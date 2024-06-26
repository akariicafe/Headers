@class PXStoryOverlayController, PXStoryValidationController, UIImpactFeedbackGenerator, NSMutableSet, PXPhotosViewInteraction, PXInfoUpdater, PXStoryPausableLoadingCoordinator, PXStoryPersistenceController, PXStoryAudioSessionController, PXVolumeController, PXStoryConfiguration, PXMediaProvider, PXStoryModel, NSMapTable, PXStoryMuteStateController, PXStoryRelatedController, PXStoryErrorRepository, PXUpdater, PXExtendedTraitCollection, PXStoryResourcesPreloadingCoordinator, PXStoryViewBufferingController, PXStoryViewLayoutSpecManager, PXStoryViewResourcesPreloadingController, PXStoryPacingController, PXStoryMusicPlayer, PXGItemPlacement, NSArray, PXStoryViewModeTransition, PXStoryViewAccessibilityHUDContentProvider, NSAttributedString, NSDateFormatter, NSString, NSObject, NSError, PXObservable, PXPhotosViewModel, NSTimer, PXStorySongController, NSDate;
@protocol PXStoryPacingTimeSource, PXStoryViewLayoutSpec, UICoordinateSpace, PXUserDefaultsDataSource, PXStoryViewEnvironmentModel, OS_dispatch_queue, PXAnonymousViewController, PXStoryViewActionPerformer, PXDisplayAssetCollection, PXStoryErrorReporter, PXDisplayAsset;

@interface PXStoryViewModel : PXObservable <PXTapToRadarDiagnosticProvider, PXVisualDiagnosticsProvider, PXStoryDiagnosticHUDContentProvider, PXStoryMutableViewModel, PXChangeObserver, PXSettingsKeyObserver, PXInfoProvider, PXInfoUpdaterObserver, PXNetworkStatusObserver, PXStoryQueueParticipant, PXStoryDiagnosticHUDDataSource> {
    BOOL _hasBeenActiveOnce;
    long long _axStoredPlayStateLastViewModeOnUpdate;
    BOOL _axStoredPlayStateHasStoredPlayState;
    long long _axStoredPlayState;
    PXStoryViewAccessibilityHUDContentProvider *_accessibilityHUDContentProvider;
}

@property (readonly, nonatomic) NSString *diagnosticDescriptionForAllHUDTypes;
@property (readonly, nonatomic) PXStoryViewLayoutSpecManager *viewLayoutSpecManager;
@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly, nonatomic) id modelChangeOrigin;
@property (readonly, nonatomic) NSMapTable *diagnosticHUDContentProvidersByType;
@property (nonatomic) BOOL hasAnyError;
@property (readonly, nonatomic) BOOL isReadingFromPhotosGridViewModel;
@property (readonly, nonatomic) BOOL allowsRelated;
@property (nonatomic) BOOL isAtPlaybackStart;
@property (readonly, nonatomic) unsigned long long endBehavior;
@property (nonatomic) double solidLegibilityOverlayOpacity;
@property (retain, nonatomic) PXStoryViewModeTransition *viewModeTransition;
@property (readonly, nonatomic) PXStoryPausableLoadingCoordinator *loadingCoordinator;
@property (readonly, nonatomic) PXVolumeController *volumeController;
@property (readonly, nonatomic) id<PXUserDefaultsDataSource> userDefaults;
@property (nonatomic) BOOL wantsSoloPlayback;
@property (retain, nonatomic) NSAttributedString *displayTitle;
@property (retain, nonatomic) NSAttributedString *displaySubtitle;
@property (retain, nonatomic) id<PXDisplayAsset> mainAsset;
@property (readonly, nonatomic) PXInfoUpdater *mainAssetInfoUpdater;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *mainAssetInfoUpdateQueue;
@property (readonly, nonatomic) NSDateFormatter *mainAssetInfoUpdateQueue_titleDateFormatter;
@property (readonly, nonatomic) NSMutableSet *recentlyUsedFlexSongIDs;
@property (readonly, nonatomic) NSMutableSet *recentlyUsedAppleMusicSongIDs;
@property (weak, nonatomic) PXStoryModel *modelCoveredByRelated;
@property (nonatomic) BOOL shouldAutoHideMuteToggleButton;
@property (readonly, nonatomic) UIImpactFeedbackGenerator *scrubberFeedbackGenerator;
@property (retain, nonatomic) NSTimer *autoHideMuteToggleButtonTimer;
@property (retain, nonatomic) NSTimer *autoHideChromeTimer;
@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection;
@property (readonly, nonatomic) id<PXStoryPacingTimeSource> timeSource;
@property (readonly, nonatomic) PXMediaProvider *mediaProvider;
@property (readonly, nonatomic) PXStoryResourcesPreloadingCoordinator *resourcesPreloadingCoordinator;
@property (readonly, nonatomic) PXStoryErrorRepository *errorRepository;
@property (readonly, nonatomic) BOOL shouldAutoHideChrome;
@property (readonly, nonatomic) PXStoryAudioSessionController *audioSessionController;
@property (readonly, nonatomic) PXStoryOverlayController *overlayController;
@property (readonly, nonatomic) PXStoryRelatedController *relatedController;
@property (readonly, nonatomic) PXStoryMusicPlayer *musicPlayer;
@property (readonly, nonatomic) PXStoryPacingController *pacingController;
@property (readonly, nonatomic) PXStorySongController *songController;
@property (readonly, nonatomic) PXStoryViewResourcesPreloadingController *resourcesPreloadingController;
@property (readonly, nonatomic) PXStoryPersistenceController *persistenceController;
@property (readonly, nonatomic) PXStoryViewBufferingController *bufferingController;
@property (readonly, nonatomic) PXStoryMuteStateController *muteStateController;
@property (readonly, nonatomic) PXStoryValidationController *validationController;
@property (retain, nonatomic) PXPhotosViewInteraction *photosGridViewInteraction;
@property (retain, nonatomic) NSDate *lastMainModelChangeDate;
@property (nonatomic) BOOL pausingPlaybackShowsChrome;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) long long viewMode;
@property (readonly, nonatomic) long long desiredPlayState;
@property (readonly, nonatomic) double playbackFractionCompleted;
@property (readonly, nonatomic) BOOL isAtPlaybackEnd;
@property (readonly, nonatomic) double outroFractionCompleted;
@property (readonly, nonatomic) BOOL wantsChromeVisible;
@property (readonly, nonatomic) BOOL needsStatusBarVisible;
@property (readonly, nonatomic) double chromeVisibilityFraction;
@property (readonly, nonatomic) unsigned long long chromeItems;
@property (readonly, nonatomic) double bufferingIndicatorVisibilityFraction;
@property (readonly, nonatomic) double muteToggleButtonVisibilityFraction;
@property (readonly, nonatomic) double maximumIndividualTopChromeItemVisibilityFraction;
@property (readonly, nonatomic) BOOL wantsRelatedOverlayVisible;
@property (readonly, nonatomic) BOOL wantsRelatedOverlayScrollable;
@property (readonly, nonatomic) double relatedOverlayVisibilityFraction;
@property (readonly, nonatomic) double fadeOutOverlayVisibilityFraction;
@property (readonly, nonatomic) BOOL isRelatedOverlayScrolledIntoView;
@property (readonly, nonatomic) BOOL wantsRelatedOverlayNavigationButtonsVisible;
@property (readonly, nonatomic) BOOL shouldCountDownToUpNext;
@property (readonly, nonatomic) BOOL wantsPlaybackEndDarkening;
@property (readonly, nonatomic) double playbackEndDarkening;
@property (readonly, nonatomic) double topGradientLegibilityOverlayOpacity;
@property (readonly, nonatomic) double bottomGradientLegibilityOverlayOpacity;
@property (readonly, nonatomic) struct { struct CGPoint { double x; double y; } initialLocation; struct CGPoint { double x; double y; } location; struct CGPoint { double x; double y; } velocity; NSObject<UICoordinateSpace> *coordinateSpace; double initialTimestamp; double lastTimestamp; } swipeDownInteractionState;
@property (readonly, nonatomic) BOOL isPerformingViewControllerTransition;
@property (readonly, copy, nonatomic) PXGItemPlacement *viewControllerDismissalTargetPlacement;
@property (readonly, nonatomic) BOOL swipeDownTriggeringDismissal;
@property (readonly, nonatomic) BOOL swipeDownDismissalPreviewEnabled;
@property (readonly, nonatomic) double swipeDownDismissalPreviewFraction;
@property (readonly, nonatomic) BOOL isScrubbing;
@property (readonly, nonatomic) BOOL wantsScrubberVisible;
@property (readonly, nonatomic) double scrubberVisibilityFraction;
@property (readonly, nonatomic) struct { long long firstSegmentIdentifier; double secondSegmentMixFactor; long long secondSegmentIdentifier; } scrubberPosition;
@property (readonly, nonatomic) NSDate *lastSkipSegmentActionDate;
@property (readonly, nonatomic) unsigned long long edgeToHighlight;
@property (readonly, nonatomic) double styleSwitcherVisibilityFraction;
@property (readonly, nonatomic) id<PXDisplayAssetCollection> mainAssetCollection;
@property (readonly, nonatomic) id<PXStoryViewLayoutSpec> viewLayoutSpec;
@property (readonly, weak, nonatomic) id<PXStoryViewActionPerformer> actionPerformer;
@property (readonly, nonatomic) id<PXStoryErrorReporter> errorReporter;
@property (readonly, weak, nonatomic) id<PXStoryViewEnvironmentModel> viewEnvironmentModel;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) PXStoryModel *mainModel;
@property (readonly, nonatomic) PXStoryConfiguration *mainConfiguration;
@property (readonly, copy, nonatomic) NSArray *relatedModels;
@property (readonly, copy, nonatomic) NSArray *relatedConfigurations;
@property (readonly, nonatomic) long long selectedRelatedIndex;
@property (readonly, nonatomic) BOOL didSelectAnyRelated;
@property (readonly, nonatomic) BOOL shouldPreventDisplaySleep;
@property (readonly, nonatomic) BOOL isAnyMenuOpen;
@property (readonly, nonatomic) BOOL isActionMenuOpen;
@property (readonly, nonatomic) BOOL shouldShowErrorIndicator;
@property (readonly, nonatomic) NSError *displayedError;
@property (readonly, nonatomic) BOOL canToggleSelectMode;
@property (readonly, nonatomic) BOOL isInSelectMode;
@property (readonly, weak, nonatomic) NSObject<PXAnonymousViewController> *presentingViewController;
@property (readonly, nonatomic) BOOL showSongInTitleWhenPaused;
@property (readonly, nonatomic) BOOL isMuted;
@property (readonly, nonatomic) long long lastMutedChangeReason;
@property (readonly, nonatomic) double volume;
@property (readonly, nonatomic) BOOL canShowMuteToggleButtonWhenChromeIsHidden;
@property (nonatomic) BOOL isPerformingCrossfadeTransitionToRelated;
@property (readonly, nonatomic) PXPhotosViewModel *photosGridViewModel;
@property (readonly, nonatomic) long long highlightedRelatedIndex;
@property (readonly, nonatomic) BOOL isUserPerformingRemoteGesture;
@property (readonly, nonatomic) BOOL shouldSimplifyUIForAccessibility;
@property (nonatomic) BOOL isHUDVisible;
@property (nonatomic) long long diagnosticHUDType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue;
@property (readonly, nonatomic) PXObservable *HUDObservable;
@property (readonly, nonatomic) unsigned long long HUDVisibiltyChangeDescriptor;
@property (readonly, nonatomic) unsigned long long HUDContentChangeDescriptor;
@property (readonly, nonatomic) unsigned long long HUDStoryModelChangeDescriptor;
@property (readonly, nonatomic) PXStoryModel *HUDStoryModel;
@property (readonly, nonatomic) PXStoryRelatedController *HUDRelatedController;

+ (void)registerViewModelDesiringSoloPlayback:(id)a0;
+ (void)unregisterViewModelDesiringSoloPlayback:(id)a0;

- (void)setViewMode:(long long)a0;
- (void)setIsActive:(BOOL)a0;
- (void)performChanges:(id /* block */)a0;
- (void)setVolume:(double)a0;
- (id)init;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)dealloc;
- (void)setIsInSelectMode:(BOOL)a0;
- (void)setActionPerformer:(id)a0;
- (void)didPerformChanges;
- (void)infoUpdaterDidUpdate:(id)a0;
- (void)setAudioSessionController:(id)a0;
- (id)requestInfoOfKind:(id)a0 withResultHandler:(id /* block */)a1;
- (void)setPersistenceController:(id)a0;
- (void)togglePlayback;
- (void)_setNeedsUpdate;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)a0;
- (void)setIsScrubbing:(BOOL)a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void).cxx_destruct;
- (BOOL)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1;
- (void)_attachAccessibilityHUDIfNeeded;
- (void)_invalidateMainModelControllers;
- (void)_registerForAccessibilityEvents;
- (void)_updatePhotosGridEffectProvider;
- (void)_updateScrubberFeedbackGeneratorWithShouldImpact:(BOOL)a0 shouldPrepare:(BOOL)a1;
- (id)memoryDebugInfo;
- (void)setChromeItems:(unsigned long long)a0;
- (void)setMusicPlayer:(id)a0;
- (void)_autoHideChrome;
- (void)_invalidateShouldAutoHideChrome;
- (void)_invalidateViewModelControllers;
- (void)_updateLegibilityOverlayOpacity;
- (void)_updateViewMode;
- (void)_accessibilityStatusDidChange;
- (void)_autoHideMuteToggleButton;
- (void)_cancelAutoHideChromeTimer;
- (void)_cancelMuteToggleButtonAutoHideTimer;
- (void)_changeMainModelToRelatedAtIndex:(long long)a0 changeOrigin:(unsigned long long)a1;
- (id)_gridEffectForAsset:(id)a0 colorGradingEffect:(id)a1 entityManager:(id)a2;
- (id)_internalRecoveryOptions;
- (void)_invalidateAXStoredPlayState;
- (void)_invalidateCanToggleSelectMode;
- (void)_invalidateControllersActiveness;
- (void)_invalidateDesiredPlayState;
- (void)_invalidateDiagnosticHUDState;
- (void)_invalidateDisplayTitleAndSubtitle;
- (void)_invalidateErrorIndicator;
- (void)_invalidateHUDSettings;
- (void)_invalidateIsAnyMenuOpen;
- (void)_invalidateIsInSelectMode;
- (void)_invalidateLegibilityOverlayOpacity;
- (void)_invalidateMainAsset;
- (void)_invalidateMainAssetCollection;
- (void)_invalidateMainModelProperties;
- (void)_invalidateOutroFractionCompleted;
- (void)_invalidatePhotosGridEffectProvider;
- (void)_invalidatePlaybackFractionCompleted;
- (void)_invalidateRecentlyUsedSongs;
- (void)_invalidateShouldAutoHideMuteToggleButton;
- (void)_invalidateShouldPreventDisplaySleep;
- (void)_invalidateSongControllerFailedAssets;
- (void)_invalidateSpecManager;
- (void)_invalidateViewLayoutSpec;
- (void)_invalidateViewMode;
- (void)_invalidateViewModeTransition;
- (void)_invalidateWantsRelatedOverlayScrollable;
- (void)_invalidateWantsSoloPlayback;
- (id)_mainAssetInfoUpdateQueue_infoForAsset:(id)a0;
- (void)_readFromPhotosGridViewModel:(id /* block */)a0;
- (void)_replayMusic;
- (void)_resetSelectedRelatedIndex;
- (void)_resetShouldAutoHideMuteToggleButton;
- (void)_scheduleMuteToggleButtonAutoHide;
- (void)_setMainModel:(id)a0 changeOrigin:(unsigned long long)a1;
- (void)_unregisterForAccessibilityEvents;
- (void)_updateAXStoredPlayState;
- (void)_updateCanToggleSelectMode;
- (void)_updateControllersActiveness;
- (void)_updateDesiredPlayState;
- (void)_updateDiagnosticHUDState;
- (void)_updateDisplayTitleAndSubtitle;
- (void)_updateErrorIndicator;
- (void)_updateHUDSettings;
- (void)_updateIsAnyMenuOpen;
- (void)_updateIsInSelectMode;
- (void)_updateMainAsset;
- (void)_updateMainAssetCollection;
- (void)_updateMainModelControllers;
- (void)_updateMainModelProperties;
- (void)_updateOutroFractionCompleted;
- (void)_updatePlaybackFractionCompleted;
- (void)_updateRecentlyUsedSongs;
- (void)_updateShouldAutoHideChrome;
- (void)_updateShouldAutoHideMuteToggleButton;
- (void)_updateShouldPreventDisplaySleep;
- (void)_updateSongControllerFailedAssets;
- (void)_updateSpecManager;
- (void)_updateViewLayoutSpec;
- (void)_updateViewModeTransition;
- (void)_updateViewModelControllers;
- (void)_updateWantsRelatedOverlayScrollable;
- (void)_updateWantsSoloPlayback;
- (void)addVisualDiagnosticsToContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)autoPlayUpNext;
- (BOOL)checkIfShouldPreventAdvancingAndReturnReason:(out id *)a0;
- (void)cycleHUDType;
- (void)deselectAllGridItems;
- (id)diagnosticErrorsByComponentForHUDType:(long long)a0;
- (id)diagnosticHUDContentProviderForType:(long long)a0;
- (id)diagnosticTextForHUDType:(long long)a0;
- (id)diagnosticTextForHUDType:(long long)a0 displaySize:(struct CGSize { double x0; double x1; })a1;
- (void)hideMuteToggleButtonWhenChromeIsHidden;
- (id)initWithConfiguration:(id)a0 extendedTraitCollection:(id)a1 timeSource:(id)a2 mediaProvider:(id)a3;
- (void)liveResizeDidEnd;
- (void)liveResizeWillStart;
- (void)networkStatusMonitor:(id)a0 didChangeBestAvailableNetworkType:(struct { unsigned long long x0; BOOL x1; BOOL x2; })a1;
- (void)rewindToBeginning:(BOOL)a0;
- (void)rewindToBeginning:(BOOL)a0 rewindMusic:(BOOL)a1;
- (void)selectAllGridItems;
- (void)selectRelatedAtIndex:(long long)a0;
- (void)setBottomGradientLegibilityOverlayOpacity:(double)a0;
- (void)setBufferingController:(id)a0;
- (void)setBufferingIndicatorVisibilityFraction:(double)a0;
- (void)setCanShowMuteToggleButtonWhenChromeIsHidden:(BOOL)a0;
- (void)setCanToggleSelectMode:(BOOL)a0;
- (void)setChromeVisibilityFraction:(double)a0;
- (void)setDesiredPlayState:(long long)a0;
- (void)setDiagnosticHUDContentProvider:(id)a0 forType:(long long)a1;
- (void)setDidSelectAnyRelated:(BOOL)a0;
- (void)setDisplayedError:(id)a0;
- (void)setEdgeToHighlight:(unsigned long long)a0;
- (void)setFadeOutOverlayVisibilityFraction:(double)a0;
- (void)setHighlightedRelatedIndex:(long long)a0;
- (void)setIsActionMenuOpen:(BOOL)a0;
- (void)setIsAnyMenuOpen:(BOOL)a0;
- (void)setIsAtPlaybackEnd:(BOOL)a0;
- (void)setIsPerformingViewControllerTransition:(BOOL)a0;
- (void)setIsRelatedOverlayScrolledIntoView:(BOOL)a0;
- (void)setIsUserPerformingRemoteGesture:(BOOL)a0;
- (void)setLastSkipSegmentActionDate:(id)a0;
- (void)setMainAssetCollection:(id)a0;
- (void)setMainConfiguration:(id)a0;
- (void)setMaximumIndividualTopChromeItemVisibilityFraction:(double)a0;
- (void)setMuteStateController:(id)a0;
- (void)setMuteToggleButtonVisibilityFraction:(double)a0;
- (void)setMuted:(BOOL)a0 reason:(long long)a1;
- (void)setNeedsStatusBarVisible:(BOOL)a0;
- (void)setOutroFractionCompleted:(double)a0;
- (void)setOverlayController:(id)a0;
- (void)setPacingController:(id)a0;
- (void)setPhotosGridViewModel:(id)a0;
- (void)setPlaybackEndDarkening:(double)a0;
- (void)setPlaybackFractionCompleted:(double)a0;
- (void)setRelatedConfigurations:(id)a0;
- (void)setRelatedController:(id)a0;
- (void)setRelatedModels:(id)a0;
- (void)setRelatedOverlayVisibilityFraction:(double)a0;
- (void)setResourcesPreloadingController:(id)a0;
- (void)setScrubberPosition:(struct { long long x0; double x1; long long x2; })a0;
- (void)setScrubberVisibilityFraction:(double)a0;
- (void)setSelectedRelatedIndex:(long long)a0;
- (void)setShouldAutoHideChrome:(BOOL)a0;
- (void)setShouldCountDownToUpNext:(BOOL)a0;
- (void)setShouldPreventDisplaySleep:(BOOL)a0;
- (void)setShouldShowErrorIndicator:(BOOL)a0;
- (void)setShouldSimplifyUIForAccessibility:(BOOL)a0;
- (void)setShowSongInTitleWhenPaused:(BOOL)a0;
- (void)setSongController:(id)a0;
- (void)setStyleSwitcherVisibilityFraction:(double)a0;
- (void)setSwipeDownDismissalPreviewEnabled:(BOOL)a0;
- (void)setSwipeDownDismissalPreviewFraction:(double)a0;
- (void)setSwipeDownInteractionState:(struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; id x3; double x4; double x5; })a0;
- (void)setSwipeDownTriggeringDismissal:(BOOL)a0;
- (void)setTopGradientLegibilityOverlayOpacity:(double)a0;
- (void)setValidationController:(id)a0;
- (void)setViewControllerDismissalTargetPlacement:(id)a0;
- (void)setViewEnvironmentModel:(id)a0;
- (void)setViewLayoutSpec:(id)a0;
- (void)setWantsChromeVisible:(BOOL)a0;
- (void)setWantsPlaybackEndDarkening:(BOOL)a0;
- (void)setWantsRelatedOverlayNavigationButtonsVisible:(BOOL)a0;
- (void)setWantsRelatedOverlayScrollable:(BOOL)a0;
- (void)setWantsRelatedOverlayVisible:(BOOL)a0;
- (void)setWantsScrubberVisible:(BOOL)a0;
- (BOOL)skipToBeginningOfSegmentWithIdentifier:(long long)a0;
- (BOOL)skipToSegmentWithOffset:(long long)a0;
- (BOOL)skipToSegmentWithOffset:(long long)a0 byTappingEdge:(BOOL)a1;
- (void)temporarilyShowMuteToggleButtonWhenChromeIsHidden;
- (void)toggleChrome;
- (void)toggleHUD;

@end
