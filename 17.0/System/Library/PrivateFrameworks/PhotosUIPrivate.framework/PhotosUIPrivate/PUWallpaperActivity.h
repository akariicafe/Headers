@class NSString, UIViewController;

@interface PUWallpaperActivity : PXActivity <SBSUIWallpaperPreviewViewControllerDelegate, PUWallpaperPRUIInlinePosterEditingViewControllerDelegate> {
    UIViewController *_wallpaperActivityViewController;
}

@property (nonatomic, getter=_isWallpaperModificationAllowed, setter=_setWallpaperModificationAllowed:) BOOL _wallpaperModificationAllowed;
@property (nonatomic, setter=_setNeedsUpdateWallpaperModificationAllowed:) BOOL _needsUpdateWallpaperModificationAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)activityType;
- (id)init;
- (void)dealloc;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)activityViewController;
- (id)_systemImageName;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)prepareWithActivityItems:(id)a0;
- (void)wallpaperPreviewViewControllerCancelButtonPressed:(id)a0;
- (void)wallpaperPreviewViewControllerSetButtonPressed:(id)a0;
- (void)_fetchImageForWallPaperAsset:(id)a0 resultHandler:(id /* block */)a1;
- (void)_handleSetWallpaperActionWithController:(id)a0 locations:(long long)a1;
- (void)_restrictionsChanged:(id)a0;
- (void)_updateWallpaperModificationAllowedIfNeeded;
- (void)inlineEditingViewController:(id)a0 didDismissWithResponse:(id)a1;

@end
