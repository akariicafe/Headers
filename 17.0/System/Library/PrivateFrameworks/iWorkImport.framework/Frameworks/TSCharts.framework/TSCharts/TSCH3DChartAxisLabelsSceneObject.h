@protocol TSCH3DAxisLabelPositioner, NSObject;

@interface TSCH3DChartAxisLabelsSceneObject : TSCH3DChartLabelsContainingSceneObject

@property (retain) id<TSCH3DAxisLabelPositioner, NSObject> valueLabelPositioner;
@property (retain) id<TSCH3DAxisLabelPositioner, NSObject> categoryLabelPositioner;

+ (void)cacheValueAxisLabelAlignmentForScene:(id)a0;
+ (id)partWithEnumerator:(id)a0 chartInfo:(id)a1 styleIndex:(unsigned long long)a2;
+ (void)setSelectionPath:(id)a0 selectionMode:(int)a1 forScene:(id)a2;
+ (unsigned int)valueAxisLabelAlignmentForScene:(id)a0;

- (id)effects;
- (void).cxx_destruct;
- (BOOL)canRenderSelectionPath:(id)a0 forInfo:(id)a1;
- (unsigned int)alignmentForPositioner:(id)a0 scene:(id)a1 enumerator:(id)a2 returningDirection:(void *)a3;
- (BOOL)canEditTextForSelectionPath:(id)a0 forInfo:(id)a1;
- (id)convertSelectionPathTo3D:(id)a0 path:(id)a1;
- (int)knobsModeForLabelType:(int)a0 scene:(id)a1;
- (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })labelPositionDirectionForScene:(id)a0 enumerator:(id)a1;
- (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })p_categoryLabelsOffsetFromAccessor:(id)a0;
- (long long)p_categoryStride:(id)a0;
- (void)p_renderCategoryLabels:(id)a0;
- (void)p_renderLabels:(id)a0 labelType:(int)a1 part:(id)a2 positioner:(id)a3 offset:(void *)a4 offset2DBlock:(id /* block */)a5 strideBlock:(id /* block */)a6 skipFirst:(BOOL)a7 showLast:(BOOL)a8;
- (void)p_renderValueLabels:(id)a0;
- (void)p_setOffset:(void *)a0 forLabelType:(int)a1 pipeline:(id)a2 part:(id)a3 positioner:(id)a4;
- (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })p_valueLabelsOffsetFromAccessor:(id)a0;
- (void)postRenderBounds:(id)a0;
- (void)renderAnnotatedLabels:(id)a0;
- (id)renderInfoForSelectionPath:(id)a0 info:(id)a1;
- (void)renderLabels:(id)a0;
- (id)selectionPathForInfo:(id)a0 axis:(id)a1 selectionPathLabelIndex:(unsigned long long)a2;
- (id)selectionPathForInfo:(id)a0 scene:(id)a1 pickedPoint:(id)a2;

@end
