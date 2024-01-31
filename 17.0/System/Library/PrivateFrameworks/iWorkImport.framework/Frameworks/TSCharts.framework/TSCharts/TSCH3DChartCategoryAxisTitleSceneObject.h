@interface TSCH3DChartCategoryAxisTitleSceneObject : TSCH3DChartAxisTitleSceneObject

+ (id)axisForInfo:(id)a0;
+ (double)textRotationForChartInfo:(id)a0;

- (int)labelType;
- (BOOL)isAnnotated;
- (struct LabelTransform { struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x0; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x1; unsigned int x2; float x3; BOOL x4; })labelTransformForPositioner:(id)a0;

@end
