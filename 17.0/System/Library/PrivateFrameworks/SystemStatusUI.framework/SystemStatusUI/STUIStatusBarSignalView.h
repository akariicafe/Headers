@class UIColor, UIAccessibilityHUDItem, NSString;

@interface STUIStatusBarSignalView : STUIStatusBarPersistentAnimationView <STUIStatusBarDisplayable>

@property (nonatomic) BOOL smallSize;
@property (nonatomic) BOOL rounded;
@property (nonatomic) long long iconSize;
@property (nonatomic) long long numberOfBars;
@property (nonatomic) long long numberOfActiveBars;
@property (nonatomic) long long signalMode;
@property (copy, nonatomic) UIColor *inactiveColor;
@property (copy, nonatomic) UIColor *activeColor;
@property (readonly, nonatomic) BOOL wantsCrossfade;
@property (readonly, nonatomic) BOOL prefersBaselineAlignment;
@property (readonly, nonatomic) BOOL prefersCenterVerticalAlignment;
@property (readonly, nonatomic) long long overriddenVerticalAlignment;
@property (readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })_intrinsicContentSizeForNumberOfBars:(long long)a0 iconSize:(long long)a1;

- (void)_iconSizeDidChange;
- (void)_colorsDidChange;
- (void)applyStyleAttributes:(id)a0;
- (void)_updateFromMode:(long long)a0;
- (void)_updateBars;
- (void).cxx_destruct;
- (void)_updateActiveBars;

@end
