@interface TSCH3DChartAddBoundsSceneObject : TSCH3DSceneObject

+ (void)setRadialBoundsFactor:(float)a0 forScene:(id)a1;
+ (id)p_rotationBoundsModeForScene:(id)a0;
+ (id)p_setBoundsModeClass:(Class)a0 forScene:(id)a1;
+ (void)setDepthBoundsForScene:(id)a0;
+ (void)setXYRotationBoundsForScene:(id)a0;
+ (void)setYRotationBoundsForScene:(id)a0;

- (void)render:(id)a0;
- (void)getBounds:(id)a0;
- (void)rayPick:(id)a0;

@end
