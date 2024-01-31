@class _UIPageIndicatorView;

@interface _UIPageIndicatorImageView : UIImageView {
    struct CGSize { double width; double height; } _cachedSize;
}

@property (nonatomic) _UIPageIndicatorView *indicatorView;

- (void)invalidateIntrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImage:(id)a0;
- (void)prepare;
- (struct CGSize { double x0; double x1; })sizeForImage:(id)a0 traits:(id)a1;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateSymbolConfiguration;

@end
