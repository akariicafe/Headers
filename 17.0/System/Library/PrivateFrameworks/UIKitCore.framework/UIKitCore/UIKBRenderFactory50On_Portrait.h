@interface UIKBRenderFactory50On_Portrait : UIKBRenderFactory10Key_Round

- (long long)assetIdiom;
- (id)lightKeycapsFontName;
- (double)keyCornerRadius;
- (void)_customizeTraits:(id)a0 forPopupForKey:(id)a1 withRenderingContext:(id)a2 keycapsFontName:(id)a3;
- (id)_traitsForKey:(id)a0 onKeyplane:(id)a1;
- (double)controlColumnWidthFactor;
- (double)deleteKeyFontSize;
- (unsigned long long)edgesWithInsetsForKey:(id)a0 onKeyplane:(id)a1;
- (double)keyplaneSwitchKeyFontSize;
- (id)messagesWriteboardKeyImageName;
- (double)returnKeyFontSize;
- (unsigned long long)roundCornersForKey:(id)a0 onKeyplane:(id)a1;
- (void)setupLayoutSegments;
- (BOOL)shouldShowBottomRowEdge;
- (BOOL)shouldShowTopRowEdge;
- (double)spaceKeyFontSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })symbolFrameInsets;
- (id)thinKeycapsFontName;

@end
