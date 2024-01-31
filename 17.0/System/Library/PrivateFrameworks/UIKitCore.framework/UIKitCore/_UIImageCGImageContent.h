@interface _UIImageCGImageContent : _UIImageContent {
    _Atomic struct CGImage *_imageRef;
}

- (id)initWithCGImageSource:(struct CGImageSource { } *)a0 scale:(double)a1;
- (void)_drawWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2 effect:(id)a3;
- (id)contentPreparedForDisplay;
- (id)contentOptimizedForImageSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isHDR;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1;
- (id)renditionApplyingEffect:(id)a0;
- (BOOL)optimizeContentForImageSize:(struct CGSize { double x0; double x1; })a0 completionHandler:(id /* block */)a1;
- (id)contentWithCGImage:(struct CGImage { } *)a0;
- (BOOL)prepareContentForDisplayWithCompletionHandler:(id /* block */)a0;
- (id)imageRendererFormat;
- (BOOL)isCGImage;
- (id)typeName;
- (struct CGImage { } *)_provideCGImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)initWithCGImageSource:(struct CGImageSource { } *)a0 CGImage:(struct CGImage { } *)a1 scale:(double)a2;
- (id)makeSDRVersion;
- (BOOL)hasCGImage;
- (unsigned long long)hash;
- (struct CGSize { double x0; double x1; })sizeInPixels;
- (void)dealloc;
- (struct CGImage { } *)CGImage;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
