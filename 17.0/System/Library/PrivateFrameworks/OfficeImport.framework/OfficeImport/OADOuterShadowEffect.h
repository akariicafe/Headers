@interface OADOuterShadowEffect : OADShadowEffect {
    float mXScale;
    float mYScale;
    float mXSkew;
    float mYSkew;
    int mAlignment;
    BOOL mRotateWithShape;
}

- (id)init;
- (unsigned long long)hash;
- (void)setAlignment:(int)a0;
- (int)alignment;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setXScale:(float)a0;
- (void)setYScale:(float)a0;
- (float)xScale;
- (float)yScale;
- (BOOL)rotateWithShape;
- (void)setRotateWithShape:(BOOL)a0;
- (void)setXSkew:(float)a0;
- (void)setYSkew:(float)a0;
- (float)xSkew;
- (float)ySkew;

@end
