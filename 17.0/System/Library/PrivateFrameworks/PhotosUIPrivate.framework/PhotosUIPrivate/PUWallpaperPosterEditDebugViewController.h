@class PUWallpaperPosterEditToolBar, UIScrollView, NSArray, UIView, _PUWallpaperPosterEditorDebugEnvironment, _PUWallpaperPosterEditorDebugPreferences, UIButton, UIAction, NSString, PUWallpaperPosterDateView, UIPageControl, PUWallpaperPosterEditorController;
@protocol PUWallpaperEditingLook;

@interface PUWallpaperPosterEditDebugViewController : UIViewController <PUWallpaperPosterEditToolbarDelegate, PUWallpaperEditor, PUWallpaperEditorLookViewProviding, UIScrollViewDelegate, UIColorPickerViewControllerDelegate> {
    BOOL _needsUpdateUserTransform;
}

@property (retain, nonatomic) PUWallpaperPosterEditorController *posterEditorController;
@property (copy, nonatomic) NSArray *availableLooks;
@property (nonatomic) long long currentLookIndex;
@property (retain, nonatomic) UIScrollView *looksScrollView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *foregroundView;
@property (retain, nonatomic) UIView *floatingView;
@property (retain, nonatomic) UIView *contentOverlayView;
@property (retain, nonatomic) PUWallpaperPosterEditToolBar *editToolBar;
@property (retain, nonatomic) UIAction *tapToRadarAction;
@property (retain, nonatomic) UIPageControl *pageControl;
@property (retain, nonatomic) UIButton *lookLabelButton;
@property (retain, nonatomic) PUWallpaperPosterDateView *dateView;
@property (retain, nonatomic) _PUWallpaperPosterEditorDebugEnvironment *editEnvironment;
@property (retain, nonatomic) _PUWallpaperPosterEditorDebugPreferences *editPreferences;
@property (copy, nonatomic) id /* block */ colorPickerChangeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) id<PUWallpaperEditingLook> pu_currentLook;
@property (readonly, nonatomic) BOOL pu_canApplyParallaxToViews;
@property (nonatomic, getter=isPerspectiveZoomEnabled) BOOL perspectiveZoomEnabled;
@property (readonly, nonatomic) BOOL pu_isDepthEffectDisallowed;
@property (readonly, nonatomic) UIAction *placeholderAction;

- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithAsset:(id)a0;
- (BOOL)prefersStatusBarHidden;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)colorPickerViewController:(id)a0 didSelectColor:(id)a1 continuously:(BOOL)a2;
- (void)colorPickerViewControllerDidFinish:(id)a0;
- (void)presentColorPickerWithConfiguration:(id)a0 changeHandler:(id /* block */)a1;
- (void)updateActions;
- (void)_handlePageControlSelectedPage:(id)a0;
- (void)_dismissAndCancel:(id)a0;
- (void)_dismissAndSave:(id)a0;
- (void)_setupEditorViews;
- (void)_setupPosterEditorController;
- (void)_setupSimulatedControls;
- (void)_updateLookControls;
- (void)_updateLookProperties;
- (void)_updateLooks;
- (id)initWithAsset:(id)a0 posterType:(long long)a1;
- (id)initWithAssets:(id)a0 posterType:(long long)a1 photoLibrary:(id)a2;
- (id)initWithExistingConfiguration:(id)a0 assetDirectory:(id)a1 overrideConfiguration:(id)a2 photoLibrary:(id)a3;
- (id)initWithMigratorOfLegacyConfigurationType:(unsigned long long)a0 photoLibrary:(id)a1;
- (id)initWithPosterType:(long long)a0 photoLibrary:(id)a1;
- (id)pu_beginBackgroundTaskForReason:(id)a0;
- (void)pu_endBackgroundTask:(id)a0 completionStatus:(long long)a1;
- (void)pu_requestDismissalWithAction:(long long)a0;
- (void)pu_updateLookProperties;
- (void)pu_updateLooks;
- (void)pu_updateLuminanceValuesForLooks;
- (void)pu_updatePreferences:(id /* block */)a0;

@end
