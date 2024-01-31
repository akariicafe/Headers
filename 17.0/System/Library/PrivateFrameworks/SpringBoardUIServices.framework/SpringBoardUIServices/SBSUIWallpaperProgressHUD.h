@class _UIBackdropView, UILabel, UIActivityIndicatorView;

@interface SBSUIWallpaperProgressHUD : UIView {
    _UIBackdropView *_backdropView;
    UIActivityIndicatorView *_activityIndicatorView;
    UILabel *_label;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)hide;
- (void)showMessage:(id)a0 inView:(id)a1;

@end
