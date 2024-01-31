@class UILabel, UIVisualEffectView;

@interface HACCCapsuleTitleView : UIView

@property (retain, nonatomic) UIVisualEffectView *titleContainer;
@property (retain, nonatomic) UILabel *titleLabel;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;

@end
