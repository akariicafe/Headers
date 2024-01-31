@class NSString;

@interface _UIVibrancyEffectCoreMaterialImpl : _UIVibrancyEffectImpl {
    long long _blurStyle;
    long long _vibrancyStyle;
    NSString *_lightMaterial;
    NSString *_darkMaterial;
}

- (BOOL)invertAutomaticStyle;
- (BOOL)_needsUpdateForTransitionFromEnvironment:(id)a0 toEnvironment:(id)a1 usage:(long long)a2;
- (void)_updateEffectDescriptor:(id)a0 forEnvironment:(id)a1 usage:(long long)a2;
- (long long)vibrancyStyle;
- (void)appendDescriptionTo:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithLightMaterial:(id)a0 darkMaterial:(id)a1 vibrancyStyle:(long long)a2;
- (id)initWithStyle:(long long)a0 vibrancyStyle:(long long)a1;
- (void).cxx_destruct;
- (long long)style;
- (BOOL)isEqual:(id)a0;

@end
