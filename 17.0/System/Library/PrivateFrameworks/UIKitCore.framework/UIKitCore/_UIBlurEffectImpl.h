@interface _UIBlurEffectImpl : NSObject

+ (id)implementationFromCoder:(id)a0;

- (BOOL)invertAutomaticStyle;
- (BOOL)_needsUpdateForTransitionFromEnvironment:(id)a0 toEnvironment:(id)a1 usage:(long long)a2;
- (void)setEffect:(id)a0;
- (void)_updateEffectDescriptor:(id)a0 forEnvironment:(id)a1 usage:(long long)a2;
- (void)appendDescriptionTo:(id)a0;
- (id)implementationForUserInterfaceStyle:(long long)a0;
- (unsigned long long)hash;
- (BOOL)canProvideVibrancyEffect;
- (BOOL)requiresCopying;
- (void)encodeWithCoder:(id)a0;
- (id)tintColor;
- (BOOL)canProvideCoreMaterialVibrancyEffect;
- (long long)style;
- (BOOL)isEqual:(id)a0;

@end
