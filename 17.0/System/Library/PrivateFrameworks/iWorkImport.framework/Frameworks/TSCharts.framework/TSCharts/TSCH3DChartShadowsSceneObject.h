@interface TSCH3DChartShadowsSceneObject : TSCH3DSceneObject

+ (void)setShadowPlanePadding:(struct box<glm::detail::tvec3<float>> { struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x0; struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x1; })a0 forScene:(id)a1;
+ (void)invalidateShadowsForScene:(id)a0;

- (id)effects;
- (void)render:(id)a0;
- (id)TSDShadowFromScene:(id)a0;
- (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })calculateShadowCameraPosition:(float)a0 center:(struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })a1 shadowQuality:(float)a2 depthLimitAdjustment:(float)a3;
- (void)getBounds:(id)a0;
- (float)p_chartOpacityForScene:(id)a0;
- (struct box<glm::detail::tvec3<float>> { struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x0; struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x1; })p_shadowPlanePaddingForScene:(id)a0;
- (void)prerender:(id)a0;
- (void)prerenderShadows:(id)a0 blurslack:(float)a1 angle:(float)a2 quality:(float)a3 targetFBO:(id)a4;
- (id)propertiesForScene:(id)a0;
- (void)renderShadowScene:(id)a0;
- (void)renderShadows:(id)a0;

@end
