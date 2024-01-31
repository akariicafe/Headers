@class OADImageFillTechnique, OADBlipRef, OADRelativeRect;

@interface OADImageFill : OADFill {
    OADBlipRef *mBlipRef;
    BOOL mIsBlipRefOverridden;
    OADRelativeRect *mSourceRect;
    int mDpi;
    BOOL mIsDpiOverridden;
    BOOL mRotateWithShape;
    BOOL mIsRotateWithShapeOverridden;
    OADImageFillTechnique *mTechnique;
}

+ (id)defaultProperties;

- (void)setParent:(id)a0;
- (unsigned long long)hash;
- (id)color;
- (id)sourceRect;
- (void)setTechnique:(id)a0;
- (id)technique;
- (void)setSourceRect:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDefaults;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)blipRef;
- (int)dpi;
- (BOOL)rotateWithShape;
- (void)setDpi:(int)a0;
- (BOOL)isDpiOverridden;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (BOOL)isBlipRefOverridden;
- (BOOL)isRotateWithShapeOverridden;
- (BOOL)isSourceRectOverridden;
- (BOOL)isTechniqueOverridden;
- (void)removeUnnecessaryOverrides;
- (void)setBlipRef:(id)a0;
- (void)setRotateWithShape:(BOOL)a0;
- (void)setStyleColor:(id)a0;

@end
