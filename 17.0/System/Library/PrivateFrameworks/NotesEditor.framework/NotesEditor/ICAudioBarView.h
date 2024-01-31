@class CALayer, UIButton, NSLayoutConstraint;

@interface ICAudioBarView : UIView

@property (nonatomic) double oldWidth;
@property (retain, nonatomic) CALayer *borderLayer;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (retain, nonatomic) UIButton *doneButton;
@property (nonatomic) double height;

- (id)accessibilityLabel;
- (id)accessibilityElements;
- (void)traitCollectionDidChange:(id)a0;
- (double)height;
- (void)setHeight:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupConstraints;
- (long long)accessibilityContainerType;
- (void).cxx_destruct;
- (void)updateLayoutMargins;
- (void)layoutSubviews;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;

@end
