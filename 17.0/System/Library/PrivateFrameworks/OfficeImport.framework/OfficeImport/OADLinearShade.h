@interface OADLinearShade : OADShade {
    float mAngle;
    BOOL mIsAngleOverridden;
    BOOL mScaled;
    BOOL mIsScaledOverridden;
}

+ (id)defaultProperties;

- (unsigned long long)hash;
- (BOOL)scaled;
- (BOOL)isEqual:(id)a0;
- (void)setScaled:(BOOL)a0;
- (id)initWithDefaults;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)angle;
- (void)setAngle:(float)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAngleOverridden;
- (BOOL)isAnythingOverridden;
- (BOOL)isScaledOverridden;
- (void)removeUnnecessaryOverrides;

@end
