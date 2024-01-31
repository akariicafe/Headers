@interface SSChromeHelper : NSObject

+ (long long)statusBarStyle;
+ (id)separatorView;
+ (id)barSeparatorColor;
+ (long long)backgroundBlurEffectStyle;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })availableRectForFullscreenContent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layoutBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 bleedToBottom:(BOOL)a2 topBarHeight:(double)a3 bottomBarHeight:(double)a4 userInterfaceIdiom:(long long)a5 multipleScreenshots:(BOOL)a6;
+ (double)barButtonItemsLeftOfOpacitySlider;
+ (double)barSeparatorSize;
+ (void)configureNavigationBarAppearance:(id)a0;
+ (double)contentSwitcherPadding;
+ (double)countIndicatorOffset;
+ (id)createFixedSpaceBarButtonItemWithWidth:(double)a0;
+ (double)cropsCornerLength;
+ (double)cropsCornerWidth;
+ (double)cropsHandleOutset;
+ (double)defaultBarButtonSpacing;
+ (double)defaultBarButtonWidth;
+ (double)screenshotTopBottomMargin:(long long)a0;
+ (double)screenshotTopBottomMarginPad;
+ (double)screenshotTopBottomMarginPhone;
+ (int)statusBarVisibilityForTraitCollection:(id)a0 isPortrait:(BOOL)a1;
+ (double)widthForContentSwitcher:(id)a0 forView:(id)a1;
+ (double)widthForOpacityControlInView:(id)a0 withContentSwitcher:(id)a1;

@end
