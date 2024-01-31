@class UIImage, UIImageView, UIView;

@interface LoadingViewController : UIViewController {
    BOOL _imageIsFullScreen;
    UIImage *_image;
    UIImageView *_imageView;
    long long _orientation;
    UIView *_statusBarView;
    long long _preferredStatusBarStyle;
}

- (void)viewDidLayoutSubviews;
- (long long)preferredStatusBarStyle;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (id)initWithWebClip:(id)a0 orientation:(long long)a1;

@end
