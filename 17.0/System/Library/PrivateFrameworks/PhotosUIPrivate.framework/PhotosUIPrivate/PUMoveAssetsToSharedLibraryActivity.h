@class UIViewController;

@interface PUMoveAssetsToSharedLibraryActivity : PXActivity {
    UIViewController *_presenterViewController;
}

- (id)activityType;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)_systemImageName;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (BOOL)_presentActivityOnViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
