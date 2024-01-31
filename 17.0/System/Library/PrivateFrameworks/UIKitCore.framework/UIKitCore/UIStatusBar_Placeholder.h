@interface UIStatusBar_Placeholder : UIStatusBar_Base

+ (double)_heightForStyle:(long long)a0 orientation:(long long)a1 forStatusBarFrame:(BOOL)a2 inWindow:(id)a3 isAzulBLinked:(BOOL)a4;

- (void)setStyleRequest:(id)a0 animationParameters:(id)a1;
- (void)setForegroundColor:(id)a0 animationParameters:(id)a1;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 showForegroundView:(BOOL)a1 wantsServer:(BOOL)a2 inProcessStateProvider:(id)a3;
- (long long)currentStyle;
- (void)setLegibilityStyle:(long long)a0 animationParameters:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (double)defaultDoubleHeight;
- (void)_setHidden:(BOOL)a0 animationParameters:(id)a1;
- (void)_requestStyle:(long long)a0 partStyles:(id)a1 legibilityStyle:(long long)a2 foregroundColor:(id)a3 animationParameters:(id)a4 forced:(BOOL)a5;

@end
