@class NSString, UIFontMetrics;

@interface AXDynamicTypeImageView : UIImageView

@property (retain, nonatomic) UIFontMetrics *fontMetrics;
@property (copy, nonatomic) NSString *minimumContentSizeCategory;
@property (copy, nonatomic) NSString *maximumContentSizeCategory;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (void)_commonInit;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithImage:(id)a0 highlightedImage:(id)a1;
- (void)_traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })_scaledSizeForSize:(struct CGSize { double x0; double x1; })a0;

@end
