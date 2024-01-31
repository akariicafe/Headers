@class UIViewController;

@interface PUAddToAlbumActivity : PXActivity {
    UIViewController *_presenterViewController;
}

+ (long long)activityCategory;

- (id)activityType;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)activityImage;
- (id)_systemImageName;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)_activityBundleImageConfiguration;
- (BOOL)_presentActivityOnViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)_albumPickerViewControllerWithAssets:(id)a0;

@end
