@class NSString, UIView, FBScene, CSBackgroundContentView;
@protocol UIScenePresenter, UIScenePresentation, CSWallpaperView;

@interface CSBackgroundContentViewController : CSCoverSheetViewControllerBase <SBFBacklightSceneHostEnvironmentProviding>

@property (readonly, nonatomic) FBScene *scene;
@property (readonly, nonatomic) id<UIScenePresenter> scenePresenter;
@property (readonly, nonatomic) UIView<UIScenePresentation> *presentationView;
@property (readonly, nonatomic, getter=isScreenOff) BOOL screenOff;
@property (readonly, nonatomic) CSBackgroundContentView *backgroundContentView;
@property (readonly, nonatomic) UIView<CSWallpaperView> *wallpaperView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (id)sceneHostEnvironmentEntriesForBacklightSession;
- (void)loadView;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_updateForegroundState;
- (void)_updateUserInterfaceStyle;
- (void)backlightLuminanceChangedForEnvironment:(id)a0 previousTraitCollection:(id)a1;
- (id)initWithScene:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)tapGestureRecognizerAction:(id)a0;
- (void)userInterfaceStyleChangedForEnvironment:(id)a0 previousTraitCollection:(id)a1;

@end
