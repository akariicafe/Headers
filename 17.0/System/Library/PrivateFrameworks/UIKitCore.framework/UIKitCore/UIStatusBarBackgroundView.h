@class UIStatusBarStyleAttributes, UIImageView;

@interface UIStatusBarBackgroundView : UIView {
    UIStatusBarStyleAttributes *_style;
    UIImageView *_glowView;
    BOOL _glowEnabled;
    BOOL _suppressGlow;
}

- (void).cxx_destruct;
- (id)style;
- (id)_backgroundImageName;
- (id)_baseImage;
- (id)_glowImage;
- (void)_setGlowAnimationEnabled:(BOOL)a0 waitForNextCycle:(BOOL)a1;
- (void)_startGlowAnimationWaitForNextCycle:(BOOL)a0;
- (void)_stopGlowAnimation;
- (BOOL)_styleCanGlow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(id)a1 backgroundColor:(id)a2;
- (void)setGlowAnimationEnabled:(BOOL)a0;
- (void)setSuppressesGlow:(BOOL)a0;

@end
