@class NSString, UIView;

@interface PUImportCustomViewBarButton : UIButton

@property (readonly, nonatomic) UIView *customView;
@property (copy, nonatomic) NSString *customAccessibilityLabel;

- (id)accessibilityLabel;
- (void)invalidateIntrinsicContentSize;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setHighlighted:(BOOL)a0;
- (void)sizeToFit;
- (void)updateConstraints;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithCustomView:(id)a0;

@end
