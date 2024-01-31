@class STUIStatusBarCycleAnimation;

@interface STUIStatusBarCellularSignalView : STUIStatusBarSignalView

@property (nonatomic) BOOL needsLargerScale;
@property (nonatomic) BOOL needsCycleAnimationUpdate;
@property (retain, nonatomic) STUIStatusBarCycleAnimation *cycleAnimation;

+ (double)_interspaceForIconSize:(long long)a0;
+ (double)_barCornerRadiusForIconSize:(long long)a0;
+ (double)_heightForNormalBarAtIndex:(long long)a0 iconSize:(long long)a1;
+ (struct CGSize { double x0; double x1; })_intrinsicContentSizeForNumberOfBars:(long long)a0 iconSize:(long long)a1;
+ (double)_barWidthForIconSize:(long long)a0;

- (void)_iconSizeDidChange;
- (id)accessibilityHUDRepresentation;
- (void)_colorsDidChange;
- (double)_heightForBarAtIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)applyStyleAttributes:(id)a0;
- (void)_setNeedsUpdateCycleAnimation;
- (void)_updateCycleAnimationIfNeeded;
- (void)_updateFromMode:(long long)a0;
- (void)_updateBars;
- (void).cxx_destruct;
- (void)_updateCycleAnimationNow;
- (double)_heightForBarAtIndex:(long long)a0 mode:(long long)a1;
- (void)layoutSubviews;
- (void)_updateActiveBars;
- (void)didMoveToWindow;

@end
