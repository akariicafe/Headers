@interface PXGViewImageTexture : PXGImageTexture {
    BOOL _isContentOpaque;
    float _alpha;
}

@property (readonly, nonatomic) struct CGImage { } *imageRef;
@property (readonly, nonatomic) unsigned int orientation;

- (long long)estimatedByteSize;
- (BOOL)isOpaque;
- (void)dealloc;
- (unsigned char)presentationType;
- (struct CGSize { double x0; double x1; })pixelSize;
- (id)copyWithOrientationTransform:(SEL)a0 alpha:(float)a1;
- (id)initWithImage:(struct CGImage { } *)a0 orientation:(unsigned int)a1 alpha:(float)a2;

@end
