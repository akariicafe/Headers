@class CAShapeLayer;

@interface WFCameraShutterButton : UIControl

@property (weak, nonatomic) CAShapeLayer *outlineLayer;
@property (weak, nonatomic) CAShapeLayer *buttonLayer;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (void)layoutSubviews;

@end
