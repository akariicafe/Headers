@class PKStoreKitReviewPromptHelper, NSString, UIImageView, UIVisualEffectView, UIView;

@interface PKNavigationController : UINavigationController <UINavigationControllerDelegate> {
    BOOL _hasExplicitlyDefinedSupportedInterfaceOrientations;
    unsigned long long _explicitlyDefinedSupportedInterfaceOrientations;
    UIView *_backgroundView;
    UIImageView *_wallpaperView;
    UIVisualEffectView *_blurView;
    BOOL _hasStatusBarStyleOverride;
    long long _statusBarStyleOverride;
    PKStoreKitReviewPromptHelper *_reviewPromptHelper;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRootViewController:(id)a0;
- (id)init;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setSupportedInterfaceOrientations:(unsigned long long)a0;
- (void)promptAppStoreReviewForTrigger:(unsigned long long)a0;
- (void)_updateBarAppearanceForViewController:(id)a0 animated:(BOOL)a1;
- (void)_updateWithWallpaperImage:(id)a0;
- (void)setCustomFormSheetPresentationStyleForiPad;
- (void)setNeedsNavigationBarUpdate;
- (void)setPageSheetPresentation;
- (void)setupBackgroundViewWithBlurEffect:(long long)a0;
- (void)setupWallpaper;

@end
