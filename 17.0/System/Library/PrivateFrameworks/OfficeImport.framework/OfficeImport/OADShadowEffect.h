@class OADColor;

@interface OADShadowEffect : OADEffect {
    OADColor *mColor;
    float mBlurRadius;
    float mDistance;
    float mAngle;
}

- (unsigned long long)hash;
- (id)color;
- (float)distance;
- (float)blurRadius;
- (id)description;
- (void)setColor:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(int)a0;
- (void)setBlurRadius:(float)a0;
- (void)setDistance:(float)a0;
- (BOOL)isEqual:(id)a0;
- (float)angle;
- (void)setAngle:(float)a0;
- (id)initWithShadowEffect:(id)a0 type:(int)a1;
- (void)setStyleColor:(id)a0;

@end
