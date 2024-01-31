@class OADStroke, NSString, NSArray, OADFill, OADScene3D, OADShape3D;

@interface OADGraphicProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent> {
    OADFill *mFill;
    NSArray *mEffects;
    NSArray *mExts;
    OADScene3D *mScene3D;
    OADShape3D *mShape3D;
    OADStroke *mStroke;
    unsigned char mHasIsBehindText : 1;
    unsigned char mIsBehindText : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setParent:(id)a0;
- (id)effects;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDefaults;
- (void)setStroke:(id)a0;
- (BOOL)hasFill;
- (BOOL)hasStroke;
- (id)fill;
- (id)stroke;
- (BOOL)hasEffects;
- (void)setFill:(id)a0;
- (void)setEffects:(id)a0;
- (BOOL)hasExts;
- (id)shape3D;
- (BOOL)hasIsBehindText;
- (BOOL)hasNonEmptyFill;
- (id)scene3D;
- (id)exts;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)hasScene3D;
- (BOOL)hasShape3D;
- (BOOL)isBehindText;
- (void)removeUnnecessaryOverrides;
- (void)setExts:(id)a0;
- (void)setIsBehindText:(BOOL)a0;
- (void)setScene3D:(id)a0;
- (void)setShape3D:(id)a0;

@end
