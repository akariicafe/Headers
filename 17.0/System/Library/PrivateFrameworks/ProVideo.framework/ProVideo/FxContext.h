@interface FxContext : NSObject {
    struct FxContextPriv { int x0; id x1; union { struct { struct CGImage *x0; } x0; struct { struct CGContext *x0; } x1; struct { unsigned long long x0; struct CGSize { double x0; double x1; } x1; BOOL x2; struct CGColorSpace *x3; } x2; struct { id x0; } x3; struct { id x0; } x4; struct { id x0; } x5; } x2; } *_priv;
}

+ (id)contextWithCGContext:(struct CGContext { } *)a0 options:(id)a1;
+ (id)contextForGLTextureWithOptions:(id)a0;
+ (id)contextForCGImageWithOptions:(id)a0;
+ (id)contextForCIImageWithOptions:(id)a0;
+ (id)contextWithFxBitmapImage:(id)a0 options:(id)a1;

- (int)contextType;
- (void)dealloc;
- (void)setOptions:(id)a0;
- (struct CGImage { } *)cgImage;
- (struct CGContext { } *)cgContext;
- (id)options;
- (id)bitmap;
- (id)initWithCGContext:(struct CGContext { } *)a0 options:(id)a1;
- (void)setCGImage:(struct CGImage { } *)a0;
- (id)ciImage;
- (id)derivedCIContext;
- (void)drawFxSample:(id)a0 withRegionOfInterest:(id)a1;
- (unsigned long long)glTexture;
- (struct CGColorSpace { } *)glTextureColorSpace;
- (BOOL)glTextureIsFlipped;
- (struct CGSize { double x0; double x1; })glTextureSize;
- (id)initForCGImageWithOptions:(id)a0;
- (id)initForCIImageWithOptions:(id)a0;
- (id)initForGLTextureWithOptions:(id)a0;
- (id)initWithFxBitmapImage:(id)a0 options:(id)a1;
- (void)setCIImage:(id)a0;
- (void)setGLTexture:(unsigned long long)a0 size:(struct CGSize { double x0; double x1; })a1 flipped:(BOOL)a2 colorSpace:(struct CGColorSpace { } *)a3;

@end
