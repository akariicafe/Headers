@class UIImage;

@interface UIKBBackdropView : UIVisualEffectView

@property (retain, nonatomic) UIImage *imageForCorners;

- (void)_setRenderConfig:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void)transitionToStyle:(long long)a0;
- (id)_generateCornerContentsImage:(unsigned long long)a0;
- (void)updateCorners:(unsigned long long)a0;
- (void)updateFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withCorners:(unsigned long long)a1;
- (int)textEffectsVisibilityLevel;
- (void).cxx_destruct;
- (BOOL)_applyCornerMaskToSelf;

@end
