@class CIImage;

@interface _UIImageCIImageContent : _UIImageContent {
    CIImage *_ciImage;
    BOOL _allowHDR;
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
- (id)description;
- (void).cxx_destruct;
- (BOOL)canScaleImageToTargetResolution;
- (BOOL)isEqual:(id)a0;
- (id)CIImage;
- (BOOL)canRenderCIImage;
- (id)initWithCIImage:(id)a0 scale:(double)a1;
- (BOOL)isCIImage;

@end
