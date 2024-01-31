@class CUINamedVectorGlyph, NSString, UIImageSymbolConfiguration, UIBezierPath, CIImage;

@interface _UIImageContent : NSObject

@property (class, readonly, nonatomic) _UIImageContent *empty;

@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) struct CGSize { double width; double height; } sizeInPixels;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) NSString *typeName;
@property (readonly, nonatomic) struct CGImage { } *CGImage;
@property (readonly, nonatomic) struct CGImageSource { } *CGImageSource;
@property (readonly, nonatomic) CIImage *CIImage;
@property (readonly, nonatomic) struct __IOSurface { } *IOSurface;
@property (readonly, nonatomic) struct CGPDFPage { } *CGPDFPage;
@property (readonly, nonatomic) struct CGSVGDocument { } *CGSVGDocument;
@property (readonly, nonatomic) CUINamedVectorGlyph *vectorGlyph;
@property (readonly, nonatomic) double variableValue;
@property (readonly, nonatomic) UIImageSymbolConfiguration *_automaticSymbolConfiguration;
@property (readonly, nonatomic) double vectorScale;
@property (readonly, nonatomic) UIBezierPath *outlinePath;
@property (nonatomic) BOOL isDecompressing;

- (id)debugQuickLookObject;
- (void)_drawWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2 effect:(id)a3;
- (id)contentPreparedForDisplay;
- (id)initWithScale:(double)a0;
- (id)contentOptimizedForImageSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isHDR;
- (id)renditionApplyingEffect:(id)a0;
- (BOOL)optimizeContentForImageSize:(struct CGSize { double x0; double x1; })a0 completionHandler:(id /* block */)a1;
- (void)_prepareForDrawingWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2;
- (id)contentWithCGImage:(struct CGImage { } *)a0;
- (BOOL)prepareContentForDisplayWithCompletionHandler:(id /* block */)a0;
- (id)imageRendererFormat;
- (BOOL)isCGImage;
- (struct CGImage { } *)_provideCGImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)makeSDRVersion;
- (BOOL)hasCGImage;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isCGSVGDocument;
- (BOOL)isPreparedCGImage;
- (BOOL)containsNamedColorStyles;
- (struct CGImage { } *)_provideVectorGlyphCGImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 paletteColors:(id)a2;
- (struct CGImage { } *)_provideVectorGlyphCGImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 hierarchicalColorResolver:(id /* block */)a2;
- (BOOL)containsNamedColorStyle:(id)a0;
- (void)_drawVectorGlyphWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2 namedColorResolver:(id /* block */)a3;
- (BOOL)isCGPDFPage;
- (BOOL)isVectorGlyph;
- (BOOL)_canProvideCGImageDirectly;
- (BOOL)prefersProvidingContentsDirectly;
- (id)contentWithVariableValue:(double)a0;
- (BOOL)canScaleImageToTargetResolution;
- (id)renditionWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 applyingEffect:(id)a2;
- (id)debugDescription;
- (void)_drawVectorGlyphWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2 hierarchicalColorResolver:(id /* block */)a3;
- (struct CGImage { } *)_provideVectorGlyphCGImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 namedColorResolver:(id /* block */)a2;
- (BOOL)isIOSurface;
- (unsigned long long)numberOfHierarchyLayers;
- (BOOL)isEqual:(id)a0;
- (BOOL)canEmitVectorDrawingCommands;
- (void)_drawVectorGlyphWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2 paletteColors:(id)a3;
- (struct CGSize { double x0; double x1; })CGPDFPageSize;
- (struct CGSize { double x0; double x1; })CGSVGDocumentSize;
- (BOOL)_isSameSymbolImageContentExceptVariableValue:(id)a0;
- (void)_setCGImageSource:(struct CGImageSource { } *)a0;
- (BOOL)canRenderCIImage;
- (BOOL)isCGImageOnly;
- (BOOL)isCIImage;

@end
