@interface OADTileTechnique : OADImageFillTechnique {
    float mOffsetX;
    BOOL mIsOffsetXOverridden;
    float mOffsetY;
    BOOL mIsOffsetYOverridden;
    float mScaleX;
    BOOL mIsScaleXOverridden;
    float mScaleY;
    BOOL mIsScaleYOverridden;
    int mFlipMode;
    BOOL mIsFlipModeOverridden;
    int mAlignment;
    BOOL mIsAlignmentOverridden;
}

+ (id)defaultProperties;

- (unsigned long long)hash;
- (void)setAlignment:(int)a0;
- (int)alignment;
- (BOOL)isEqual:(id)a0;
- (id)initWithDefaults;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)scaleX;
- (float)scaleY;
- (void)setScaleX:(float)a0;
- (void)setScaleY:(float)a0;
- (float)offsetX;
- (float)offsetY;
- (void)setOffsetX:(float)a0;
- (void)setOffsetY:(float)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (int)flipMode;
- (BOOL)isAlignmentOverridden;
- (BOOL)isAnythingOverridden;
- (BOOL)isFlipModeOverridden;
- (BOOL)isOffsetXOverridden;
- (BOOL)isOffsetYOverridden;
- (BOOL)isScaleXOverridden;
- (BOOL)isScaleYOverridden;
- (void)removeUnnecessaryOverrides;
- (void)setFlipMode:(int)a0;

@end
