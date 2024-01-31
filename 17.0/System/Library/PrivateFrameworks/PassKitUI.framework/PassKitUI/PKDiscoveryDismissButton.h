@interface PKDiscoveryDismissButton : UIButton

@property (readonly, nonatomic) long long style;

+ (long long)_blurEffectStyleForUserInterfaceStyle:(long long)a0;
+ (id)_tintColorForUserInterfaceStyle:(long long)a0;
+ (id)buttonWithStyle:(long long)a0 primaryAction:(id)a1;

- (id)_tintColor;
- (void)_dynamicUserInterfaceTraitDidChange;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_backingEffect;
- (void)_updateStyleWithStyle:(long long)a0;
- (void)updateStyleWithStyle:(long long)a0 animated:(BOOL)a1;

@end
