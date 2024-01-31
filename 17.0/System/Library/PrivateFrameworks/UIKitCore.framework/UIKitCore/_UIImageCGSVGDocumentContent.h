@interface _UIImageCGSVGDocumentContent : _UIImageContent {
    struct CGSVGDocument { } *_svgDocumentRef;
}

- (void)_drawWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2 effect:(id)a3;
- (id)initWithScale:(double)a0;
- (void)_prepareForDrawingWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2;
- (id)typeName;
- (unsigned long long)hash;
- (struct CGSize { double x0; double x1; })sizeInPixels;
- (BOOL)isCGSVGDocument;
- (void)dealloc;
- (struct CGSVGDocument { } *)CGSVGDocument;
- (id)description;
- (BOOL)canScaleImageToTargetResolution;
- (BOOL)isEqual:(id)a0;
- (BOOL)canEmitVectorDrawingCommands;
- (id)initWithCGSVGDocument:(struct CGSVGDocument { } *)a0 scale:(double)a1;

@end
