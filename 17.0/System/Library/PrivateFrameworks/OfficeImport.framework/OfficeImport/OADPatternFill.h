@class OADPattern, OADColor;

@interface OADPatternFill : OADFill {
    OADColor *mFgColor;
    OADColor *mBgColor;
    OADPattern *mPattern;
}

+ (id)defaultProperties;

- (void)setParent:(id)a0;
- (unsigned long long)hash;
- (void)setColor:(id)a0;
- (void).cxx_destruct;
- (id)pattern;
- (BOOL)isEqual:(id)a0;
- (id)initWithDefaults;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)bgColor;
- (id)fgColor;
- (void)setBgColor:(id)a0;
- (void)setFgColor:(id)a0;
- (void)setPattern:(id)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (BOOL)isBgColorOverridden;
- (BOOL)isFgColorOverridden;
- (BOOL)isPatternOverridden;
- (id)namedImageDataWithBlipCollection:(id)a0;
- (void)removeUnnecessaryOverrides;
- (void)setStyleColor:(id)a0;

@end
