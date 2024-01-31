@class UIVisualEffectView, NSLayoutConstraint;

@interface _SFSettingsAlertItemBackgroundView : UIView {
    UIVisualEffectView *_highlightView;
    NSLayoutConstraint *_highlightToTopConstraint;
    NSLayoutConstraint *_highlightToBottomConstraint;
    NSLayoutConstraint *_highlightToLeadingConstraint;
    NSLayoutConstraint *_highlightToLeadingWithSpaceConstraint;
    NSLayoutConstraint *_highlightPixelWidthConstraint;
    NSLayoutConstraint *_highlightPixelHeightConstraint;
}

@property (nonatomic) long long mode;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (id)_highlightEffect;

@end
