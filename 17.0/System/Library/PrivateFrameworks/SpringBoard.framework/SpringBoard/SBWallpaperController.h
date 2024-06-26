@class UIViewController, SBWindowScene, UIWindow, NSString, PRSService, NSMutableSet, SBFWallpaperCoreAnalyticsLogger, PBUIWallpaperConfigurationManager, PRSWallpaperObserver, SBFWallpaperAggdLogger, UIView, UIGestureRecognizer, FBServiceClientAuthenticator, UITraitCollection, PRSPosterConfiguration, PTSingleTestRecipe, FCActivityManager, NSMapTable, PBUIWallpaperViewController, SBPosterBoardModalEditingManager;
@protocol PBUIWallpaperPresentingDelegate, BSInvalidatable, PBUIWallpaperPresenting, PBUIWallpaperLegibilityProviding, PBUIIrisWallpaperPlaying;

@interface SBWallpaperController : NSObject <PBUILegibilitySettingsProviderDelegate, SBUIActiveOrientationObserver, _UISettingsKeyObserver, PBUIWallpaperPresentingDelegate, PBUIWallpaperReachabilityCoordinating, BSDescriptionProviding, SBWallpaperServerDelegate, PBUIWallpaperViewDelegate, FCActivityManagerObserving, SBFBacklightEnvironmentSceneProviding, UIWindowDelegate, CSWallpaperSnapshotUpdating, PBUILegacyWallpaperPresenting, PBUIWallpaperLegibilityProviding> {
    UIWindow *_wallpaperWindow;
    UIViewController *_rootWallpaperViewController;
    UIView *_wallpaperContainerView;
    UIView *_wallpaperOverlayContainerView;
    long long _displayedVariant;
    NSMutableSet *_activeOrientationSources;
    NSMapTable *_orientationProviders;
    PTSingleTestRecipe *_migrationTestRecipe;
    PTSingleTestRecipe *_reloadTestRecipe;
    PBUIWallpaperViewController *_wallpaperViewController;
    FCActivityManager *_activityManager;
    PRSService *_posterBoardService;
    PRSWallpaperObserver *_posterBoardStateObserver;
    PRSPosterConfiguration *_activeLockScreenPosterConfiguration;
    PRSPosterConfiguration *_lastActiveLockScreenPosterConfiguration;
    PRSPosterConfiguration *_activeHomeScreenPosterConfiguration;
    PRSPosterConfiguration *_lastActiveHomeScreenPosterConfiguration;
    SBPosterBoardModalEditingManager *_posterBoardModalEditingManager;
    BOOL _wallpaperObscured;
    BOOL _loadedLastActiveConfigurations;
    BOOL _updatedActiveConfigurations;
}

@property (class, readonly, nonatomic) SBWallpaperController *sharedInstance;
@property (class, readonly, nonatomic) FBServiceClientAuthenticator *accessAuthenticator;

@property (retain, nonatomic) SBFWallpaperAggdLogger *wallpaperAggdLogger;
@property (retain, nonatomic) SBFWallpaperCoreAnalyticsLogger *wallpaperCoreAnalyticsLogger;
@property (readonly, nonatomic, getter=_WallpaperOrientationNotForYou) long long _orientation;
@property (retain, nonatomic) UITraitCollection *fakeBlurViewOverrideTraitCollection;
@property (retain, nonatomic) id<BSInvalidatable> batterySaverAnimationAssertion;
@property (retain, nonatomic) id<BSInvalidatable> wallpaperStyleAnimationAssertion;
@property (weak, nonatomic) SBWindowScene *windowScene;
@property (readonly, copy, nonatomic) NSString *cachingIdentifier;
@property (readonly, nonatomic) id<PBUIWallpaperPresenting> presenter;
@property (readonly, nonatomic) id<PBUIWallpaperLegibilityProviding> legibilityProvider;
@property (nonatomic) double windowLevel;
@property (readonly, nonatomic) UIGestureRecognizer *wallpaperGestureRecognizer;
@property (readonly, nonatomic) PBUIWallpaperConfigurationManager *wallpaperConfigurationManager;
@property (readonly, nonatomic) long long activeOrientationSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double effectiveReachabilityYOffset;
@property (readonly, nonatomic) id<PBUIIrisWallpaperPlaying> irisWallpaperPlayer;
@property (weak, nonatomic) id<PBUIWallpaperPresentingDelegate> wallpaperPresentingDelegate;
@property (readonly, nonatomic) struct { long long x0; long long x1; double x2; } currentHomescreenStyleTransitionState;
@property (nonatomic) long long activeVariant;
@property (readonly, nonatomic) double minimumHomescreenWallpaperScale;
@property (readonly, nonatomic) double homescreenWallpaperScale;
@property (readonly, nonatomic) double minimumLockscreenWallpaperScale;
@property (readonly, nonatomic) double lockscreenWallpaperScale;
@property (readonly, nonatomic) unsigned long long significantEventsCounter;

- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (id)_window;
- (void)_batterySaverModeChanged:(id)a0;
- (id)initWithWindowScene:(id)a0 orientation:(long long)a1 variant:(long long)a2 wallpaperConfigurationManager:(id)a3 cachingIdentifier:(id)a4;
- (void)availableActivitiesDidChangeForManager:(id)a0;
- (void)_persistLastActiveLockScreenPosterConfiguration:(id)a0;
- (id)scenesForBacklightSession;
- (id)initWithWallpaperConfigurationManager:(id)a0 cachingIdentifier:(id)a1;
- (void)activeActivityDidChangeForManager:(id)a0;
- (id)newFakeBlurViewForVariant:(long long)a0 style:(long long)a1 transformOptions:(unsigned long long)a2;
- (void)cancelInProcessAnimations;
- (id)initWithWallpaperConfigurationManager:(id)a0;
- (void)orientationSource:(long long)a0 willAnimateRotationToInterfaceOrientation:(long long)a1 duration:(double)a2;
- (id)init;
- (BOOL)setWallpaperStyleTransitionState:(struct { long long x0; long long x1; double x2; })a0 forPriority:(long long)a1 forVariant:(long long)a2 withAnimationFactory:(id)a3;
- (void)dealloc;
- (void)_motionEffectsChanged;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_screenBoundsForOrientation:(long long)a0;
- (void)wallpaperServer:(id)a0 fetchLimitedOcclusionBoundsForOrientation:(long long)a1 completionHandler:(id /* block */)a2;
- (void)setOrientationProvider:(id)a0 forSource:(long long)a1;
- (void)preheatWallpaperForVariant:(long long)a0;
- (void)updateWallpaperAnimationWithWakeSourceIsSwipeToUnlock:(BOOL)a0;
- (id)succinctDescriptionBuilder;
- (long long)wallpaperPresenter:(id)a0 requestsOrientationWithRefresh:(BOOL)a1;
- (id)requireWallpaperWithReason:(id)a0;
- (void)wallpaperServer:(id)a0 setWallpaperColor:(id)a1 darkColor:(id)a2 forVariants:(long long)a3 completionHandler:(id /* block */)a4;
- (void)wallpaperServer:(id)a0 fetchLockScreenContentCutoutBoundsForOrientation:(long long)a1 completionHandler:(id /* block */)a2;
- (id)setHomescreenWallpaperScale:(double)a0 withAnimationFactory:(id)a1;
- (void)wallpaperServer:(id)a0 fetchOriginalImageDataForVariant:(long long)a1 completionHandler:(id /* block */)a2;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)a0;
- (void)wallpaperServer:(id)a0 setWallpaperVideoWithWallpaperMode:(id)a1 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 wallpaperMode:(long long)a3 completionHandler:(id /* block */)a4;
- (BOOL)posterHandlesWakeAnimation;
- (void)wallpaperPresenter:(id)a0 didChangeWallpaperForLocations:(long long)a1 withConfiguration:(id)a2;
- (void)updateWallpaperAnimationWithProgress:(double)a0;
- (id)averageColorInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forVariant:(long long)a1 withSmudgeRadius:(double)a2;
- (void)removeObserver:(id)a0 forVariant:(long long)a1;
- (void)updateWallpaperAnimationWithIconFlyInTension:(double)a0 friction:(double)a1;
- (void)addWallpaperOverlay:(id)a0;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)a0 willAnimateWithDuration:(double)a1 fromOrientation:(long long)a2;
- (void)setLockscreenOnlyWallpaperAlpha:(double)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)setActiveVariant:(long long)a0 withOutAnimationFactory:(id)a1 inAnimationFactory:(id)a2 completion:(id /* block */)a3;
- (void)_saveWallpaperCoreAnalyticsForLocations:(long long)a0 withConfiguration:(id)a1;
- (void)wallpaperServer:(id)a0 fetchLockScreenTimeBoundsForOrientation:(long long)a1 completionHandler:(id /* block */)a2;
- (id)requireWallpaperRasterizationWithReason:(id)a0;
- (void)deactivateOrientationSource:(long long)a0;
- (void)activateOrientationSource:(long long)a0;
- (void)_fetchUserTapEventsRequestedWithCompletionHandler:(id /* block */)a0;
- (void)_updateScreenBlanked;
- (void)wallpaperServer:(id)a0 setWallpaperColorName:(id)a1 forVariants:(long long)a2 completionHandler:(id /* block */)a3;
- (void)addObserver:(id)a0 forVariant:(long long)a1;
- (void)wallpaperServer:(id)a0 fetchContentCutoutBoundsForVariant:(long long)a1 orientation:(long long)a2 completionHandler:(id /* block */)a3;
- (void)wallpaperPresenterDidCompleteWallpaperChange:(id)a0;
- (void)wallpaperServer:(id)a0 setWallpaperGradient:(id)a1 forVariants:(long long)a2 completionHandler:(id /* block */)a3;
- (void)updateWallpaperForLocations:(long long)a0 wallpaperMode:(long long)a1 withCompletion:(id /* block */)a2;
- (void)removeWallpaperOverlay:(id)a0;
- (BOOL)_isAcceptingOrientationChangesFromSource:(long long)a0;
- (id)setWallpaperFloatingLayerContainerView:(id)a0 forReason:(id)a1 withAnimationFactory:(id)a2;
- (id)setLockscreenWallpaperScale:(double)a0 withAnimationFactory:(id)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)updatePosterSwitcherSnapshots;
- (void)_updateWallpaperForLocations:(long long)a0 options:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (id)embeddedWindowScene;
- (BOOL)removeWallpaperStyleForPriority:(long long)a0 forVariant:(long long)a1 withAnimationFactory:(id)a2;
- (void)triggerPosterTapEvent:(id)a0;
- (BOOL)setWallpaperStyle:(long long)a0 forPriority:(long long)a1 forVariant:(long long)a2 withAnimationFactory:(id)a3;
- (void)orientationSource:(long long)a0 didRotateFromInterfaceOrientation:(long long)a1;
- (void)_ingestPrimaryWallpaperLayersSnapshotIOSurface:(id)a0 floatingWallpaperLayerSnapshotIOSurface:(id)a1 snapshotScale:(double)a2 traitCollection:(id)a3 withCompletion:(id /* block */)a4;
- (void).cxx_destruct;
- (void)_updateWallpaperForLocations:(long long)a0 options:(unsigned long long)a1 wallpaperMode:(long long)a2 withCompletion:(id /* block */)a3;
- (void)providerLegibilitySettingsChanged:(id)a0;
- (void)_persistLastActiveHomeScreenPosterConfiguration:(id)a0;
- (id)legibilitySettingsForVariant:(long long)a0;
- (id)averageColorInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forVariant:(long long)a1;
- (BOOL)_isTraitsArbiterWallpaperActive;
- (void)_reloadWallpaperAndFlushCaches:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)_wallpaperViewForVariant:(long long)a0;
- (id)succinctDescription;
- (void)orientationSource:(long long)a0 willRotateToInterfaceOrientation:(long long)a1 duration:(double)a2;
- (BOOL)posterHidesDimmingLayer;
- (void)removeReachabilityObserver:(id)a0;
- (void)wallpaperServer:(id)a0 fetchLockScreenMaximalContentCutoutBoundsForOrientation:(long long)a1 completionHandler:(id /* block */)a2;
- (id)createWallpaperFloatingViewForReason:(id)a0 ignoreReplica:(BOOL)a1;
- (void)_saveWallpaperAggdKeysForLocations:(long long)a0 withConfiguration:(id)a1;
- (void)wallpaperServer:(id)a0 triggerPosterSignificantEventCompletionHandler:(id /* block */)a1;
- (void)wallpaperServer:(id)a0 restoreDefaultWallpaperWithCompletionHandler:(id /* block */)a1;
- (void)setWallpaperHidden:(BOOL)a0 variant:(long long)a1 reason:(id)a2;
- (void)updateOrientationAfterSourceChange;
- (void)wallpaperServer:(id)a0 fetchObscurableBoundsForOrientation:(long long)a1 completionHandler:(id /* block */)a2;
- (BOOL)_isMaglevActive;
- (void)_applicationDidFinishLaunching:(id)a0;
- (void)wallpaperServer:(id)a0 fetchOriginalVideoURLDataForVariant:(long long)a1 completionHandler:(id /* block */)a2;
- (void)wallpaperServer:(id)a0 fetchSignificantEventsCounterForPosterWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)homeScreenPosterMirrorsLock;
- (void)triggerPosterSignificantEvent;
- (id)activeInterfaceOrientationSourcesDescriptions;
- (BOOL)updateIrisWallpaperForStaticMode;
- (id)wallpaperView:(id)a0 wallpaperConfigurationIncludingValueTypes:(unsigned long long)a1;
- (id)suspendWallpaperAnimationForReason:(id)a0;
- (id)averageColorForVariant:(long long)a0;
- (void)wallpaperServer:(id)a0 fetchThumbnailDataForVariant:(long long)a1 completionHandler:(id /* block */)a2;
- (BOOL)isWindowIgnoredForReachability:(id)a0;
- (void)_updateForLockScreenPosterConfiguration:(id)a0 homeScreenPosterConfiguration:(id)a1;
- (void)updateWallpaperForLocations:(long long)a0 withCompletion:(id /* block */)a1;
- (long long)defaultInterfaceOrientationForSource:(long long)a0;
- (void)updateIrisWallpaperForInteractiveMode;
- (void)_noteSignificantTimeChanged:(id)a0;
- (double)contrastInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forVariant:(long long)a1;
- (void)_loadLastActiveConfigurations;
- (void)setWallpaperObscured:(BOOL)a0;
- (double)contrastForVariant:(long long)a0;
- (void)addReachabilityObserver:(id)a0;

@end
