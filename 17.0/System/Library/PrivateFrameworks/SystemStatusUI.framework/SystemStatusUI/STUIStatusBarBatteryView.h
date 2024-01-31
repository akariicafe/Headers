@class NSString, UIAccessibilityHUDItem;

@interface STUIStatusBarBatteryView : _UIBatteryView <STUIStatusBarDisplayable>

@property (readonly, nonatomic) BOOL wantsCrossfade;
@property (readonly, nonatomic) BOOL prefersBaselineAlignment;
@property (readonly, nonatomic) BOOL prefersCenterVerticalAlignment;
@property (readonly, nonatomic) long long overriddenVerticalAlignment;
@property (readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })_batterySizeForIconSize:(long long)a0;
+ (double)_outsideCornerRadiusForIconSize:(long long)a0;
+ (double)_insideCornerRadiusForIconSize:(long long)a0;
+ (double)_lineWidthAndInterspaceForIconSize:(long long)a0;
+ (struct CGSize { double x0; double x1; })_pinSizeForIconSize:(long long)a0;
+ (struct CGSize { double x0; double x1; })_statusBarIntrinsicContentSizeForIconSize:(long long)a0;

- (double)_percentageFontCondensedWhenChargingForIconSize:(long long)a0;
- (double)_percentageFontSizeForIconSize:(long long)a0;
- (double)_percentTextVerticalAdjustmentForIconSize:(long long)a0;
- (double)_percentageBatteryBoltScaleFactorMultiplier;
- (double)_percentTextXAdjustmentWhenFullForIconSize:(long long)a0;
- (BOOL)hasValidIconSize;
- (void)applyStyleAttributes:(id)a0;
- (double)_batteryBoltScaleFactorMultiplier;

@end
