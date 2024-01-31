@class NSArray;

@interface _UIImageMultiVectorGlyphContent : _UIImageContent {
    NSArray *_glyphs;
    NSArray *_colors;
    NSArray *_offsets;
    NSArray *_scaleFactors;
    struct CGSize { double width; double height; } _sizeInPixels;
    struct CGPoint { double x; double y; } _anchorPoint;
    struct CGImage { } *_imageRef;
}

- (void)_drawWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2 effect:(id)a3;
- (id)initWithScale:(double)a0;
- (void)_prepareForDrawingWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2;
- (BOOL)isCGImage;
- (id)typeName;
- (struct CGSize { double x0; double x1; })sizeInPixels;
- (void)dealloc;
- (struct CGImage { } *)CGImage;
- (BOOL)containsNamedColorStyles;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 glyphs:(id)a1 colors:(id)a2 offsets:(id)a3 scaleFactors:(id)a4 anchorPoint:(struct CGPoint { double x0; double x1; })a5;
- (BOOL)isVectorGlyph;
- (id)description;
- (void).cxx_destruct;
- (BOOL)canScaleImageToTargetResolution;
- (BOOL)isEqual:(id)a0;
- (BOOL)canEmitVectorDrawingCommands;
- (double)vectorScale;

@end
