@interface OADMiterLineJoin : OADLineJoin {
    float mLimit;
    unsigned char mIsLimitOverridden : 1;
}

+ (id)defaultProperties;

- (void)setLimit:(float)a0;
- (unsigned long long)hash;
- (float)limit;
- (BOOL)isEqual:(id)a0;
- (id)initWithDefaults;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (BOOL)isLimitOverridden;
- (void)removeUnnecessaryOverrides;

@end
