@class SBWindowHidingManager, SBModalLibraryController, SBCoverSheetPresentationManager, SBSystemPointerInteractionManager, SBModalUIFluidDismissGestureManager, SBWallpaperController, SBMedusaHostedKeyboardWindowController, SBLayoutStateTransitionCoordinator, SBControlCenterController, SBLockScreenManager, SBSceneLayoutStateProvider, UIScene, SBAmbientPresentationController, SBTransientUIInteractionManager, SBDisplayAppInteractionEventSource, SBRecordingIndicatorManager, SBSystemApertureController, SBLockedPointerManager, SBWindowScene, SBFloatingDockController, SBReachabilitySceneController, SBWindowScenePIPManager, NSString, SBModalAlertPresentationCoordinator, SBAlertItemsController, SBSystemGestureManager, TRAArbiter, SBFZStackResolver, SBTraitsPipelineManager, SBSceneManager, SBSwitcherController, CSCoverSheetViewController, BNBannerController, SBMainDisplayLayoutStateManager;
@protocol SBAssistantSceneControlling, FBSDisplayLayoutPublishing, SBTransientOverlayPresenting, SBUILockStateProviding;

@interface SBWindowSceneContext : NSObject <_UISceneComponentProviding, SBWindowSceneContextProviding> {
    SBWindowScene *_sbWindowScene;
    SBMedusaHostedKeyboardWindowController *_medusaHostedKeyboardWindowController;
}

@property (retain, nonatomic) SBSceneManager *sceneManager;
@property (retain, nonatomic) SBAmbientPresentationController *ambientPresentationController;
@property (retain, nonatomic) id<SBAssistantSceneControlling> assistantController;
@property (retain, nonatomic) id<FBSDisplayLayoutPublishing> displayLayoutPublisher;
@property (retain, nonatomic) SBFloatingDockController *floatingDockController;
@property (retain, nonatomic) SBSceneLayoutStateProvider *layoutStateProvider;
@property (retain, nonatomic) SBMainDisplayLayoutStateManager *layoutStateManager;
@property (retain, nonatomic) SBLayoutStateTransitionCoordinator *layoutStateTransitionCoordinator;
@property (retain, nonatomic) SBLockedPointerManager *lockedPointerManager;
@property (retain, nonatomic) SBModalLibraryController *modalLibraryController;
@property (retain, nonatomic) SBModalUIFluidDismissGestureManager *modalUIFluidDismissGestureManager;
@property (retain, nonatomic) SBReachabilitySceneController *reachabilityController;
@property (retain, nonatomic) SBRecordingIndicatorManager *recordingIndicatorManager;
@property (retain, nonatomic) SBSwitcherController *switcherController;
@property (retain, nonatomic, setter=setUILockStateProvider:) id<SBUILockStateProviding> uiLockStateProvider;
@property (retain, nonatomic) SBSystemApertureController *systemApertureController;
@property (retain, nonatomic) SBSystemGestureManager *systemGestureManager;
@property (retain, nonatomic) SBSystemPointerInteractionManager *systemPointerInteractionManager;
@property (retain, nonatomic) SBWindowScenePIPManager *pictureInPictureManager;
@property (retain, nonatomic) TRAArbiter *traitsArbiter;
@property (retain, nonatomic) SBTraitsPipelineManager *traitsPipelineManager;
@property (retain, nonatomic) SBWindowHidingManager *windowHidingManager;
@property (retain, nonatomic) SBFZStackResolver *zStackResolver;
@property (retain, nonatomic) SBTransientUIInteractionManager *transientUIInteractionManager;
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) SBAlertItemsController *alertItemsController;
@property (readonly, nonatomic) SBDisplayAppInteractionEventSource *appInteractionEventSource;
@property (readonly, nonatomic) BNBannerController *bannerController;
@property (readonly, nonatomic) SBControlCenterController *controlCenterController;
@property (readonly, nonatomic) SBCoverSheetPresentationManager *coverSheetPresentationManager;
@property (readonly, nonatomic) CSCoverSheetViewController *coverSheetViewController;
@property (readonly, nonatomic) SBLockScreenManager *lockScreenManager;
@property (readonly, nonatomic) SBMedusaHostedKeyboardWindowController *medusaHostedKeyboardWindowController;
@property (readonly, nonatomic) SBModalAlertPresentationCoordinator *modalAlertPresentationCoordinator;
@property (readonly, nonatomic) id<SBTransientOverlayPresenting> transientOverlayPresenter;
@property (readonly, nonatomic) SBWallpaperController *wallpaperController;

- (id)initWithScene:(id)a0;
- (void).cxx_destruct;

@end
