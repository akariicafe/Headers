@class UIImage;

@interface _UIBlurEffectVariableImpl : _UIBlurEffectImpl {
    double _blurRadius;
    double _blurScale;
    UIImage *_imageMask;
}

- (void)_updateEffectDescriptor:(id)a0 forEnvironment:(id)a1 usage:(long long)a2;
- (void)appendDescriptionTo:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithBaseRadius:(double)a0 imageMask:(id)a1 scale:(double)a2;

@end
