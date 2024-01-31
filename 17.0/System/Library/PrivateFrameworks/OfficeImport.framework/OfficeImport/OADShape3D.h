@class OADColor, OADBevel;

@interface OADShape3D : NSObject <NSCopying> {
    OADBevel *mTopBevel;
    OADBevel *mBottomBevel;
    OADColor *mExtrusionColor;
    float mExtrusionHeight;
    OADColor *mContourColor;
    float mContourWidth;
    float mShapeDepth;
    int mMaterial;
}

+ (id)nullShape3D;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)material;
- (void)setMaterial:(int)a0;
- (float)extrusionHeight;
- (void)setBottomBevel:(id)a0;
- (id)bottomBevel;
- (id)contourColor;
- (float)contourWidth;
- (id)extrusionColor;
- (void)setContourColor:(id)a0;
- (void)setContourWidth:(float)a0;
- (void)setExtrusionColor:(id)a0;
- (void)setExtrusionHeight:(float)a0;
- (void)setShapeDepth:(float)a0;
- (void)setTopBevel:(id)a0;
- (float)shapeDepth;
- (id)topBevel;

@end
