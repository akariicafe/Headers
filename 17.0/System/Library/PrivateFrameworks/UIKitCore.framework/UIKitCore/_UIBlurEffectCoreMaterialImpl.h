@class NSString, NSBundle;

@interface _UIBlurEffectCoreMaterialImpl : _UIBlurEffectImpl {
    long long _style;
    NSString *_lightMaterial;
    NSString *_darkMaterial;
    NSBundle *_bundle;
}

- (BOOL)invertAutomaticStyle;
- (BOOL)_needsUpdateForTransitionFromEnvironment:(id)a0 toEnvironment:(id)a1 usage:(long long)a2;
- (void)_updateEffectDescriptor:(id)a0 forEnvironment:(id)a1 usage:(long long)a2;
- (void)appendDescriptionTo:(id)a0;
- (id)implementationForUserInterfaceStyle:(long long)a0;
- (unsigned long long)hash;
- (id)initWithStyle:(long long)a0;
- (BOOL)canProvideVibrancyEffect;
- (void)encodeWithCoder:(id)a0;
- (id)tintColor;
- (void).cxx_destruct;
- (id)initWithLightMaterial:(id)a0 darkMaterial:(id)a1 bundle:(id)a2;
- (BOOL)canProvideCoreMaterialVibrancyEffect;
- (long long)style;
- (BOOL)isEqual:(id)a0;

@end
