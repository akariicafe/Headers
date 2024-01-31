@class BSAbsoluteMachTimer, NSString, SBPIPAnalytics, NSMutableSet, PGPictureInPictureController, SBWindowSceneStatusBarSettingsAssertion, SBPIPController;
@protocol SBPIPControllerAdapterContextProviding, BSInvalidatable;

@interface SBPIPPegasusAdapter : NSObject <PGPictureInPictureControllerDelegate, SBPIPContainerViewControllerObserver, SBBannerManagerTransitionObserver, SBPIPControllerAdapter> {
    SBPIPController<SBPIPControllerAdapterContextProviding> *_pipController;
    NSMutableSet *_presentedExpanseBanners;
    PGPictureInPictureController *_pegasusController;
    SBPIPAnalytics *_analyticsHelper;
    BSAbsoluteMachTimer *_pipDefaultContentSizeResetTimer;
    SBWindowSceneStatusBarSettingsAssertion *_appStatusBarSettingsAssertion;
    BOOL _isReducingResourcesUsage;
    id<BSInvalidatable> _hideFaceTimePIPFromSharePlayScreenSharingAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isAutoPictureInPictureSupported;
+ (BOOL)isSupported;

- (void)_updateHasIdleTimerBehaviors;
- (void)pipController:(id)a0 willStartPictureInPictureTestActionForApplicationWithBundleIdentifier:(id)a1;
- (long long)contentTypeForPIPController:(id)a0;
- (id)init;
- (void)dealloc;
- (void)pictureInPictureController:(id)a0 didHidePictureInPictureViewController:(id)a1;
- (void)_actuallyUpdateBannerInsetsForExpanseBanner:(id)a0 isSizeChanging:(BOOL)a1 isFullScreen:(BOOL)a2;
- (void)containerViewControllerStartReducingResourcesUsage:(id)a0;
- (void)bannerManager:(id)a0 containerWillTransitionToSize:(struct CGSize { double x0; double x1; })a1 withTransitionCoordinator:(id)a2;
- (void)pictureInPictureController:(id)a0 didCreatePictureInPictureViewController:(id)a1;
- (void)pictureInPictureController:(id)a0 requestActivationOfSceneWithPersistenceIdentier:(id)a1 pictureInPictureViewController:(id)a2 completion:(id /* block */)a3;
- (id)pipController:(id)a0 morphAnimatorDataSourceForMorphAnimatorController:(id)a1;
- (void)pipController:(id)a0 willEndPIPInterruptionForAssertion:(id)a1;
- (void)containerViewControllerStopReducingResourcesUsage:(id)a0;
- (void)bannerManager:(id)a0 willPresentPresentable:(id)a1 withTransitionCoordinator:(id)a2;
- (void)_updateAppStatusBarSettingsAssertion;
- (void)pipController:(id)a0 didStartPictureInPictureForApplicationWithProcessIdentifierEnteringBackground:(int)a1 scenePersistenceIdentifier:(id)a2 animated:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)pipController:(id)a0 didCancelPictureInPictureForApplicationWithProcessIdentifierEnteringBackground:(int)a1 scenePersistenceIdentifier:(id)a2;
- (void)bannerManager:(id)a0 presentable:(id)a1 willTransitionToSize:(struct CGSize { double x0; double x1; })a2 withTransitionCoordinator:(id)a3;
- (void)pipController:(id)a0 willRestorePictureInPictureForTestForApplicationWithBundleIdentifier:(id)a1;
- (BOOL)_presentableIsDodgeableAndStatusBarSuppressing:(id)a0;
- (void)_updateHideFromClonedDisplaysAssertion;
- (void)_enumerateContainerViewControllersForApplication:(id)a0 scenePersistenceIdentifier:(id)a1 usingBlock:(id /* block */)a2;
- (void)pictureInPictureController:(id)a0 willHidePictureInPictureViewController:(id)a1;
- (BOOL)_layoutStateContainsSceneForSourceSceneSessionIdentifier:(id)a0 bundleIdentifier:(id)a1 windowScene:(id)a2;
- (void)setPIPController:(id)a0;
- (void)pictureInPictureController:(id)a0 didRequestStopForPictureInPictureViewController:(id)a1 sourceSceneSessionIdentifier:(id)a2 animated:(BOOL)a3;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (BOOL)isStoppingOrCancellingPictureForPIPController:(id)a0 applicationWithBundleIdentifier:(id)a1 scenePersistenceIdentifier:(id)a2;
- (void)_activateSceneWithPersistenceIdentifier:(id)a0 pictureInPictureViewController:(id)a1 completion:(id /* block */)a2;
- (BOOL)isStartingStoppingOrCancellingPictureInPictureForPIPController:(id)a0;
- (BOOL)shouldStartPictureInPictureForPIPController:(id)a0 applicationWithProcessIdentifierEnteringBackground:(int)a1 scenePersistenceIdentifier:(id)a2;
- (void)containerViewControllerDidUpdatePrefersHiddenFromClonedDisplays:(id)a0;
- (void)pictureInPictureController:(id)a0 willDestroyPictureInPictureViewController:(id)a1;
- (BOOL)pictureInPictureControllerCanBackgroundStartForFaceTimeVideoCall:(id)a0;
- (long long)tetheringModeForScenePersistenceIdentifier:(id)a0;
- (BOOL)pictureInPictureController:(id)a0 shouldAuthorizeBackgroundPIPForAppWithBundleIdentifier:(id)a1;
- (BOOL)pipController:(id)a0 willBeginPIPInterruptionForAssertion:(id)a1;
- (void)_postEnsuredInSwitcher_pictureInPictureController:(id)a0 didRequestStopForPictureInPictureViewController:(id)a1 sourceSceneSessionIdentifier:(id)a2 animated:(BOOL)a3;
- (BOOL)isPresentingPictureInPictureForPIPController:(id)a0 applicationBundleIdentifier:(id)a1;
- (void)_updateBannerInsetsForExpanseBanner:(id)a0 isSizeChanging:(BOOL)a1 isFullScreen:(BOOL)a2;
- (long long)_reasonForAssertion:(id)a0;
- (void)_bannerPresentableWillAnimateTransition:(id)a0 isPresentation:(BOOL)a1 isDismissal:(BOOL)a2 isFullScreen:(BOOL)a3 withTransitionCoordinator:(id)a4;
- (BOOL)pictureInPictureController:(id)a0 shouldDenyNewConnection:(id)a1;
- (void)bannerManager:(id)a0 willDismissPresentable:(id)a1 withTransitionCoordinator:(id)a2;
- (BOOL)preventStashAssertionsForPIPController:(id)a0;

@end
