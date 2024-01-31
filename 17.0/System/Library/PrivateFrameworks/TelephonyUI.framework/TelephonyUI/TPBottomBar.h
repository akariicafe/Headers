@interface TPBottomBar : UIView {
    long long _orientation;
    long long _style;
}

+ (double)defaultHeight;
+ (double)defaultHeightForOrientation:(long long)a0;
+ (double)defaultHeightForStyle:(long long)a0;
+ (long long)fullscreenStyle;
+ (double)defaultHeightForStyle:(long long)a0 orientation:(long long)a1;
+ (long long)overlayStyle;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (id)init;
- (void)setOrientation:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)orientation;
- (id)initWithDefaultSize;
- (id)initWithDefaultSizeForOrientation:(long long)a0;
- (void)setOrientation:(long long)a0 updateFrame:(BOOL)a1;

@end
