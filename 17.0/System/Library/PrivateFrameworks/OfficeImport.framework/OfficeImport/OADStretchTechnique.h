@class OADRelativeRect;

@interface OADStretchTechnique : OADImageFillTechnique {
    OADRelativeRect *mFillRect;
}

+ (id)defaultProperties;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDefaults;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)fillRect;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (BOOL)isFillRectOverridden;
- (void)removeUnnecessaryOverrides;
- (void)setFillRect:(id)a0;

@end
