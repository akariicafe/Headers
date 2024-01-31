@class UIVisualEffectView, UIActivityIndicatorView;

@interface VUIAppSpinnerView : UIView {
    UIVisualEffectView *_effectView;
    UIActivityIndicatorView *_spinner;
    BOOL _didLayout;
}

- (void).cxx_destruct;
- (void)layoutSubviews;

@end
