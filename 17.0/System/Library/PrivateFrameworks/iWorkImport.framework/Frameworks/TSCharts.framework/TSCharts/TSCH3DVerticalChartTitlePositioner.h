@interface TSCH3DVerticalChartTitlePositioner : TSCH3DChartTitlePositioner

- (struct LabelTransform { struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x0; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x1; unsigned int x2; float x3; BOOL x4; })categoryAxisTitleTransform;
- (float)categoryVerticalPadding;
- (struct LabelTransform { struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x0; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x1; unsigned int x2; float x3; BOOL x4; })mainTitleTransform;
- (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })sizeOfValueAxisLabelsForAlignment:(unsigned int)a0;
- (struct LabelTransform { struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x0; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x1; unsigned int x2; float x3; BOOL x4; })valueAxisTitleTransform;

@end
