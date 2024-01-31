@class _UIImageContent, CUINamedVectorGlyph;

@interface _UIImageCUIVectorGlyphContent : _UIImageContent {
    CUINamedVectorGlyph *_vectorGlyph;
    _UIImageContent *_vectorContent;
    double _vectorScale;
    struct CGSize { double width; double height; } _sizeInPixels;
    struct CGImage { } *_overrideImageRef;
    _Atomic int _isMultiColor;
    _Atomic long long _numberOfHierarchyLayers;
}

@property (nonatomic) double glyphScaleFactor;

- (void)_drawWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2 effect:(id)a3;
- (id)initWithScale:(double)a0;
- (void)_prepareForDrawingWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2;
- (id)contentWithCGImage:(struct CGImage { } *)a0;
- (BOOL)isCGImage;
- (id)typeName;
- (struct CGImage { } *)_provideCGImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (unsigned long long)hash;
- (struct CGSize { double x0; double x1; })sizeInPixels;
- (void)dealloc;
- (struct CGImage { } *)CGImage;
- (id)initWithCUIVectorGlyph:(id)a0 scale:(double)a1;
- (BOOL)containsNamedColorStyles;
- (struct CGImage { } *)_provideVectorGlyphCGImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 paletteColors:(id)a2;
- (struct CGImage { } *)_provideVectorGlyphCGImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 hierarchicalColorResolver:(id /* block */)a2;
- (BOOL)containsNamedColorStyle:(id)a0;
- (void)_drawVectorGlyphWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2 namedColorResolver:(id /* block */)a3;
- (BOOL)isVectorGlyph;
- (BOOL)_canProvideCGImageDirectly;
- (id)description;
- (id)_automaticSymbolConfiguration;
- (void).cxx_destruct;
- (id)outlinePath;
- (id)contentWithVariableValue:(double)a0;
- (BOOL)canScaleImageToTargetResolution;
- (void)_drawVectorGlyphWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2 hierarchicalColorResolver:(id /* block */)a3;
- (id)vectorGlyph;
- (double)variableValue;
- (struct CGImage { } *)_provideVectorGlyphCGImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 namedColorResolver:(id /* block */)a2;
- (unsigned long long)numberOfHierarchyLayers;
- (BOOL)isEqual:(id)a0;
- (BOOL)canEmitVectorDrawingCommands;
- (double)vectorScale;
- (void)_drawVectorGlyphWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2 paletteColors:(id)a3;

@end
