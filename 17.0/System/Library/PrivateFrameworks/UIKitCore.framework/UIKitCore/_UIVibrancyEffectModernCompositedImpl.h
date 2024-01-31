@class NSString, UIColor;

@interface _UIVibrancyEffectModernCompositedImpl : _UIVibrancyEffectImpl {
    long long _compositingMode;
    NSString *_filterType;
    UIColor *_compositingColor;
}

- (void)_updateEffectDescriptor:(id)a0 forEnvironment:(id)a1 usage:(long long)a2;
- (void)appendDescriptionTo:(id)a0;
- (id)implementationReplacingTintColor:(id)a0;
- (unsigned long long)hash;
- (id)initWithCompositingMode:(long long)a0 compositingColor:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
