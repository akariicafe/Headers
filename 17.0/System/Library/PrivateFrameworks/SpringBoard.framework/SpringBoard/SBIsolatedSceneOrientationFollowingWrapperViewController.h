@class SBIsolatedSceneOrientationFollowingWindow, NSString, UIView, SBDeviceApplicationSceneHandle, TRAOrientationResolutionPolicyInfo, TRAParticipant, SBWindowSelfHostWrapper, SBIsolatedSceneOrientationFollowingContainerView, UIViewController, SBWindowScene;
@protocol BSInvalidatable, SBIsolatedSceneOrientationFollowingWrapperOrientationDelegate, SBDeviceApplicationSceneOverlayView;

@interface SBIsolatedSceneOrientationFollowingWrapperViewController : UIViewController <SBTraitsParticipantDelegate, SBDeviceApplicationSceneOverlayViewController> {
    SBDeviceApplicationSceneHandle *_sceneHandle;
    UIViewController *_contentViewController;
    BOOL _contentViewControllerBeingRemoved;
    SBWindowScene *_windowScene;
    SBIsolatedSceneOrientationFollowingWindow *_appOverlayWindow;
    TRAParticipant *_traitsParticipant;
    id<BSInvalidatable> _traitsResolutionPolicySpecifier;
    TRAOrientationResolutionPolicyInfo *_traitsOrientationResolutionPolicy;
    BOOL _initialOrientationHasBeenApplied;
    SBWindowSelfHostWrapper *_appOverlayHostWrapper;
    SBIsolatedSceneOrientationFollowingContainerView *_containerView;
    long long _sceneInterfaceOrientationMode;
    BOOL _rendersWhileLocked;
}

@property (weak, nonatomic) id<SBIsolatedSceneOrientationFollowingWrapperOrientationDelegate> orientationDelegate;
@property (readonly, nonatomic) long long currentInterfaceOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView<SBDeviceApplicationSceneOverlayView> *overlayView;

- (void)updatePreferencesForParticipant:(id)a0 updater:(id)a1;
- (id)participantAssociatedWindows:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)containerDidUpdateTraitsParticipant:(id)a0;
- (void)appendDescriptionForParticipant:(id)a0 withBuilder:(id)a1 multilinePrefix:(id)a2;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)didChangeSettingsForParticipant:(id)a0 context:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundsForOverlayRootView;
- (void)_containerViewDidSetBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_containerViewDidSetCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)_containerViewDidSetHostOrientation:(long long)a0;
- (long long)_hostOrientation;
- (BOOL)_isSceneStatusBarHidden;
- (void)_updateOrientationResolutionPolicyWithContainerTraitsParticipant:(id)a0;
- (id)initWithContentViewController:(id)a0 sceneHandle:(id)a1 windowScene:(id)a2 orientationDelegate:(id)a3 rendersWhileLocked:(BOOL)a4;

@end
