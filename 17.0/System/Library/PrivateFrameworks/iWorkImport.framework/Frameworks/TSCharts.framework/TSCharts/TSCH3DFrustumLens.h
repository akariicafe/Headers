@interface TSCH3DFrustumLens : TSCH3DRectangleLens

- (struct tmat4x4<float> { struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } x0[4]; })matrix;
- (void)calculateCullingPlanes:(void *)a0;
- (id)frustumRectAtDistance:(float)a0;

@end
