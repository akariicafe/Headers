@class UIActivityIndicatorView;

@interface UIStatusBarActivityItemView : UIStatusBarItemView {
    UIActivityIndicatorView *_activityIndicator;
    UIActivityIndicatorView *_accessibilityHUDIndicator;
    BOOL _slowActivity;
    BOOL _syncActivity;
}

- (id)accessibilityHUDRepresentation;
- (void)setVisible:(BOOL)a0;
- (void).cxx_destruct;
- (void)_startAnimating;
- (long long)_activityIndicatorStyle;
- (void)_stopAnimating;
- (double)shadowPadding;
- (double)updateContentsAndWidth;
- (BOOL)updateForNewData:(id)a0 actions:(int)a1;

@end
