@class OADColor;

@interface OADSolidFill : OADFill {
    OADColor *mColor;
    BOOL mIsColorOverridden;
}

+ (id)defaultProperties;
+ (id)blackFill;
+ (id)whiteFill;

- (unsigned long long)hash;
- (id)color;
- (void)setColor:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDefaults;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (BOOL)isColorOverridden;
- (void)removeUnnecessaryOverrides;
- (void)setStyleColor:(id)a0;
- (BOOL)usesPlaceholderColor;

@end
