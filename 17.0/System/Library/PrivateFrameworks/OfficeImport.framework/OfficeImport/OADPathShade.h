@class OADRelativeRect;

@interface OADPathShade : OADShade {
    OADRelativeRect *mFillToRect;
    int mType;
    BOOL mIsTypeOverridden;
}

+ (id)defaultProperties;

- (void)setType:(int)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDefaults;
- (int)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)fillToRect;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (BOOL)isFillToRectOverridden;
- (BOOL)isTypeOverridden;
- (void)removeUnnecessaryOverrides;
- (void)setFillToRect:(id)a0;

@end
