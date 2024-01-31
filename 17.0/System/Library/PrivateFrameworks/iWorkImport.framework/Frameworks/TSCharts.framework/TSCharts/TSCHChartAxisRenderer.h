@class NSString, TSCHSelectionPath;

@interface TSCHChartAxisRenderer : TSCHRenderer <TSCHCompositeRendering> {
    TSCHSelectionPath *_axisTitleSelectionPath;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _startingEditingFrame;
}

@property (retain, nonatomic) NSString *editingString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)axis;
- (void).cxx_destruct;
- (void)addSelection:(id)a0 toCGPath:(struct CGPath { } *)a1 useWrapWidth:(BOOL)a2;
- (id)axisLayoutItem;
- (id)axisTitleSelectionPath;
- (BOOL)canEditTextForSelectionPath:(id)a0;
- (BOOL)canRenderSelectionPath:(id)a0;
- (void)drawIntoLayer:(int)a0 inContext:(struct CGContext { } *)a1 visible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForEditingTextForSelectionPath:(id)a0;
- (BOOL)isCompositeRenderer;
- (BOOL)needsAnySeparateLayers;
- (void)p_addLinePath:(struct CGContext { } *)a0 stroke:(id)a1;
- (void)p_addLinearTickmarkPaths:(struct CGContext { } *)a0 axis:(id)a1 locations:(id)a2 stroke:(id)a3 width:(float)a4 isMinor:(BOOL)a5;
- (void)p_addPolarAngleTickmarkPaths:(struct CGContext { } *)a0 axis:(id)a1 stroke:(id)a2 width:(float)a3 isMinor:(BOOL)a4 includeFirstSpoke:(BOOL)a5 includeSpokesOtherThanTheFirst:(BOOL)a6;
- (void)p_addPolarRadiusTickmarkPaths:(struct CGContext { } *)a0 axis:(id)a1 absoluteRadii:(id)a2 stroke:(id)a3 width:(float)a4 isMinor:(BOOL)a5 includeFirstSpoke:(BOOL)a6 includeSpokesOtherThanTheFirst:(BOOL)a7;
- (void)p_addPolarTickmarkPaths:(struct CGContext { } *)a0 axis:(id)a1 stroke:(id)a2 width:(float)a3 isMinor:(BOOL)a4 includeFirstSpoke:(BOOL)a5 includeSpokesOtherThanTheFirst:(BOOL)a6 betweenSpokes:(BOOL)a7 unitCircleRadii:(id)a8 isRotated:(BOOL)a9;
- (void)p_addTickmarkPaths:(struct CGContext { } *)a0 axis:(id)a1 locations:(id)a2 stroke:(id)a3 width:(float)a4 isMinor:(BOOL)a5;
- (void)p_debugRenderTickmarkArea:(struct CGContext { } *)a0;
- (void)p_drawTitle:(struct CGContext { } *)a0 rangePtr:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (BOOL)p_isTitleVisible;
- (BOOL)p_needsPositionBasedTransparencyLayer;
- (BOOL)p_needsSharedTickMarkLayer;
- (void)p_renderIntoContext:(struct CGContext { } *)a0 visible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)p_renderTickmarkInContext:(struct CGContext { } *)a0 startPoint:(struct CGPoint { double x0; double x1; })a1 endPoint:(struct CGPoint { double x0; double x1; })a2 strokeWidth:(double)a3 strokeCap:(int)a4;
- (double)p_strokeCapForRenderingTickmarks:(id)a0;
- (double)p_strokeWidthForRenderingTickmarks:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_tickmarkFrameFromElementSize:(struct CGSize { double x0; double x1; })a0 location:(int)a1 tickLength:(double)a2;
- (BOOL)p_tickmarksStretchInside:(int)a0;
- (BOOL)p_tickmarksStretchOutside:(int)a0;
- (void)renderIntoContext:(struct CGContext { } *)a0 selection:(id)a1;
- (id)transparencyLayers;
- (void)useEditedString:(id)a0;
- (void)willBeginTransparencyLayer:(int)a0 inContext:(struct CGContext { } *)a1;

@end
