@interface TSCH3DLineExtrusionGeometry : TSCH3DExtrusionGeometry

@property (nonatomic) struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } ylimits;
@property (nonatomic) struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } xlimits;

+ (id)lineFromXValues:(const void *)a0 yValues:(const void *)a1;

- (id)init;
- (id).cxx_construct;
- (id)elementsBoundsPositions;
- (void)generateArrays;
- (struct tmat4x4<float> { struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } x0[4]; })matrixAtXPosition:(float)a0 returningXRangeInfo:(void *)a1;
- (struct tmat3x3<float> { struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x0[3]; })p_rotationMatrixForCrossSectionIndex:(unsigned long long)a0;
- (id)selectionKnobPositions;
- (void)setSpine:(const void *)a0;

@end
