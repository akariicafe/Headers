@class OADFill;

@interface OADFillOverlayEffect : OADEffect {
    int mBlendMode;
    OADFill *mFill;
}

- (void)setBlendMode:(int)a0;
- (id)init;
- (unsigned long long)hash;
- (int)blendMode;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)fill;
- (void)setFill:(id)a0;

@end
