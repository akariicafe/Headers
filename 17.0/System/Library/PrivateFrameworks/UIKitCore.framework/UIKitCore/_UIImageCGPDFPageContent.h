@interface _UIImageCGPDFPageContent : _UIImageContent {
    struct CGPDFPage { } *_pdfPageRef;
}

- (void)_drawWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2 effect:(id)a3;
- (id)initWithScale:(double)a0;
- (void)_prepareForDrawingWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2;
- (id)typeName;
- (unsigned long long)hash;
- (struct CGSize { double x0; double x1; })sizeInPixels;
- (void)dealloc;
- (struct CGPDFPage { } *)CGPDFPage;
- (BOOL)isCGPDFPage;
- (id)description;
- (BOOL)canScaleImageToTargetResolution;
- (BOOL)isEqual:(id)a0;
- (BOOL)canEmitVectorDrawingCommands;
- (id)initWithCGPDFPage:(struct CGPDFPage { } *)a0 scale:(double)a1;

@end
