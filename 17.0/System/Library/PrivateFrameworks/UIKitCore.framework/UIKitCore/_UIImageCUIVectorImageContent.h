@class CUINamedVectorImage;

@interface _UIImageCUIVectorImageContent : _UIImageCGImageContent {
    CUINamedVectorImage *_vectorImage;
}

- (void)_drawWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2 effect:(id)a3;
- (id)initWithScale:(double)a0;
- (id)contentWithCGImage:(struct CGImage { } *)a0;
- (id)typeName;
- (struct CGImage { } *)_provideCGImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (unsigned long long)hash;
- (BOOL)isCGSVGDocument;
- (struct CGPDFPage { } *)CGPDFPage;
- (struct CGSVGDocument { } *)CGSVGDocument;
- (BOOL)isCGPDFPage;
- (BOOL)_canProvideCGImageDirectly;
- (id)description;
- (void).cxx_destruct;
- (BOOL)canScaleImageToTargetResolution;
- (id)initWithCGImage:(struct CGImage { } *)a0 CUIVectorImage:(id)a1 scale:(double)a2;
- (BOOL)isEqual:(id)a0;
- (BOOL)canEmitVectorDrawingCommands;
- (double)vectorScale;

@end
