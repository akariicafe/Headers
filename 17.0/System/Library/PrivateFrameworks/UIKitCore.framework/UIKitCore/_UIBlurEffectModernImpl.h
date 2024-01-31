@interface _UIBlurEffectModernImpl : _UIBlurEffectImpl {
    double _blurRadius;
    double _blurScale;
}

- (void)_updateEffectDescriptor:(id)a0 forEnvironment:(id)a1 usage:(long long)a2;
- (void)appendDescriptionTo:(id)a0;
- (unsigned long long)hash;
- (id)initWithBlurRadius:(double)a0 scale:(double)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
