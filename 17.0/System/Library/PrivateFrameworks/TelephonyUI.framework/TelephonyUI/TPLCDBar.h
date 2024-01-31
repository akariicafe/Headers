@class UIImageView;

@interface TPLCDBar : UIView

@property (readonly) UIImageView *shadowView;

+ (id)backgroundImage;
+ (double)defaultHeight;
+ (double)defaultHeightForOrientation:(long long)a0;

- (void)setOrientation:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithDefaultSize;
- (id)initWithDefaultSizeForOrientation:(long long)a0;
- (void)setOrientation:(long long)a0 updateFrame:(BOOL)a1;

@end
