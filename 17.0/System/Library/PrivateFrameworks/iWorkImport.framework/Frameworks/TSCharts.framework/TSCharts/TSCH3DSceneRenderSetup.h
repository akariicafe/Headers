@interface TSCH3DSceneRenderSetup : NSObject

+ (id)identity;
+ (id)camera;
+ (id)viewport;
+ (id)null;
+ (id)full;
+ (id)cameraAndSceneTransform;
+ (id)sceneTransform;

- (id)renderingCameraFromOriginalCamera:(id)a0 pipeline:(id)a1;

@end
