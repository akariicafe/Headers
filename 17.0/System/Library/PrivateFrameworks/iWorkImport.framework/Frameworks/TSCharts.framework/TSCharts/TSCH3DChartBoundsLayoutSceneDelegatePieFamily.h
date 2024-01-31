@interface TSCH3DChartBoundsLayoutSceneDelegatePieFamily : TSCH3DChartBoundsLayoutSceneDelegate

- (BOOL)willBeginProcessingSceneObject:(id)a0;
- (BOOL)willProcessElement:(id)a0 sceneObject:(id)a1;
- (void)didEndProcessingSceneObject:(id)a0;
- (void)didProcessElements:(id)a0 sceneObject:(id)a1 pipeline:(id)a2;
- (void)didTransformElement:(id)a0 sceneObject:(id)a1;
- (id)interestedClasses;
- (struct ElementRenderPass { int x0; })renderPassForElement:(id)a0 sceneObject:(id)a1;
- (struct ElementRenderPass { int x0; })renderPassForSceneObject:(id)a0;
- (BOOL)willProcessElements:(id)a0 sceneObject:(id)a1 pipeline:(id)a2;
- (BOOL)willRenderElement:(id)a0 sceneObject:(id)a1;
- (BOOL)willSubmitElement:(id)a0 sceneObject:(id)a1;
- (BOOL)willUpdateElementEffectsStatesForElement:(id)a0 sceneObject:(id)a1;

@end
