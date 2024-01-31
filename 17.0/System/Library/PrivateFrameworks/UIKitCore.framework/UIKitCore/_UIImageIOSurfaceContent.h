@interface _UIImageIOSurfaceContent : _UIImageContent {
    struct __IOSurface { } *_surfaceRef;
}

- (void)_drawWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2 effect:(id)a3;
- (id)initWithScale:(double)a0;
- (BOOL)isHDR;
- (void)_prepareForDrawingWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2;
- (id)imageRendererFormat;
- (id)typeName;
- (id)makeSDRVersion;
- (unsigned long long)hash;
- (struct CGSize { double x0; double x1; })sizeInPixels;
- (void)dealloc;
- (id)description;
- (BOOL)prefersProvidingContentsDirectly;
- (id)initWithIOSurface:(struct __IOSurface { } *)a0 scale:(double)a1;
- (BOOL)isIOSurface;
- (BOOL)isEqual:(id)a0;
- (struct __IOSurface { } *)IOSurface;

@end
