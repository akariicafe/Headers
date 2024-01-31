@interface TSCH3DSceneRenderCameraSetup : TSCH3DSceneRenderSetup

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)setup;
+ (id)_singletonAlloc;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setupPipeline:(id)a0 fromCamera:(id)a1;

@end
