@class UILabel, NSLayoutConstraint, UIActivityIndicatorView;

@interface HRWDSpinnerView : UIView {
    UIActivityIndicatorView *_spinner;
    UILabel *_label;
    NSLayoutConstraint *_spinnerTopConstraint;
}

@property (readonly, nonatomic, getter=isAnimating) BOOL animating;

- (id)init;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)_setupSubviews;
- (void)stopSpinner;
- (void)setMessageFont:(id)a0;
- (void)setMessageWhileSpinning:(id)a0;
- (void)startSpinner;

@end
