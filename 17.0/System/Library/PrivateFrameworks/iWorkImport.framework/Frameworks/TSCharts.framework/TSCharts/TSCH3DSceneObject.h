@interface TSCH3DSceneObject : NSObject

+ (id)renderCacheKey;
+ (id)sceneObject;
+ (void)setSelectionPath:(id)a0 selectionMode:(int)a1 forScene:(id)a2;
+ (double)textRotationForChartInfo:(id)a0;

- (void)render:(id)a0;
- (BOOL)canRenderSelectionPath:(id)a0 forInfo:(id)a1;
- (BOOL)canEditTextForSelectionPath:(id)a0 forInfo:(id)a1;
- (Class)chartBoundsLayoutSceneDelegateClass;
- (id)convertSelectionPathTo3D:(id)a0 path:(id)a1;
- (struct EdgeDetectionParameters { BOOL x0; BOOL x1; float x2; })edgeDetectionParameters;
- (void)getBounds:(id)a0;
- (void)getSceneObjectElementsBounds:(id)a0;
- (void)getSelectionKnobsPositions:(id)a0;
- (void)postGetBounds:(id)a0;
- (void)postrender:(id)a0;
- (void)prerender:(id)a0;
- (void)primeRenderCaches:(id)a0;
- (void)rayPick:(id)a0;
- (id)renderInfoForSelectionPath:(id)a0 info:(id)a1;
- (id)selectionPathForInfo:(id)a0 scene:(id)a1 pickedPoint:(id)a2;
- (float)shadowCameraDepthLimitAdjustmentFactorForScene:(id)a0;
- (void)statePreservedGetSceneObjectElementsBounds:(id)a0;
- (void)statePreservedGetSelectionKnobsPositions:(id)a0;
- (void)statePreservedPostrender:(id)a0;
- (void)statePreservedPrerender:(id)a0;
- (void)statePreservedPrimeRenderCaches:(id)a0;
- (void)statePreservedRayPick:(id)a0;
- (void)statePreservedRender:(id)a0;

@end
