@class UIColor;

@interface WGColorHighlightButton : UIButton

@property (retain, nonatomic) UIColor *savedBackgroundColor;
@property (retain, nonatomic) UIColor *highlightedBackgroundColor;

- (void)setBackgroundColor:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateRealBackgroundColor;

@end
