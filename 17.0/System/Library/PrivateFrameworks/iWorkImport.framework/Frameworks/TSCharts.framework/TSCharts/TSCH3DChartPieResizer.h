@interface TSCH3DChartPieResizer : TSCH3DChartResizer {
    struct tvec2<bool> { union { BOOL x; BOOL r; BOOL s; } ; union { BOOL y; BOOL g; BOOL t; } ; } _directions;
}

+ (float)perspectiveness;
+ (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })adjustLabelWrapSize:(void *)a0;

- (id).cxx_construct;
- (void)setScale:(void *)a0;
- (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })adjust:(void *)a0 by:(float)a1;
- (struct tvec2<bool> { union { BOOL x0; BOOL x1; BOOL x2; } x0; union { BOOL x0; BOOL x1; BOOL x2; } x1; })canImprove;
- (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })squareSize:(const void *)a0;
- (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })updateDirectionsFromRequestedSize:(void *)a0 startingSize:(void *)a1;
- (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })updateResizerFromRequestedSize:(void *)a0 startingSize:(void *)a1;

@end
