@class UIColor, UIImageView, UIImage, UIImageSymbolConfiguration;

@interface SFFaviconView : UIView {
    UIImageView *_imageView;
}

@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) long long iconContentMode;
@property (retain, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfiguration;
@property (retain, nonatomic) UIColor *themeColor;
@property (readonly, nonatomic) double trailingInset;
@property (copy, nonatomic) id /* block */ trailingInsetChangeHandler;

- (void)_updateIconBackingColorAndInset;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTrailingInset:(double)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_determineIconBackingColorAndInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a0;

@end
