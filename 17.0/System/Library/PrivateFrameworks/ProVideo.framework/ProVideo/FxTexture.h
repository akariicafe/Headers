@interface FxTexture : FxImage <NSCopying> {
    struct FxTexturePriv { unsigned int x0; unsigned int x1; BOOL x2; } *_texturePriv;
}

- (void)draw;
- (void)enable;
- (id)init;
- (void)dealloc;
- (void)disable;
- (void)setData:(void *)a0;
- (unsigned int)target;
- (void)setTarget:(unsigned int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_verifyImage;
- (void)bind;
- (void *)createData:(unsigned int)a0 withType:(unsigned int)a1;
- (void)getTextureCoords:(double *)a0 right:(double *)a1 bottom:(double *)a2 top:(double *)a3;
- (id)initWithInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a0 textureId:(unsigned int)a1 andTarget:(unsigned int)a2;
- (BOOL)isInputImage;
- (void)setAsActiveTexture;
- (void)setIsInputImage:(BOOL)a0;
- (void)setTextureId:(unsigned int)a0;
- (unsigned int)textureId;

@end
