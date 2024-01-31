@class SCNNode, SCNView, SCNScene, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface ABDeviceSceneResourceLoader : NSObject {
    NSMutableArray *_completions;
    long long _state;
    NSObject<OS_dispatch_queue> *_queue;
    SCNView *_sceneView;
    struct ABDeviceSceneModel { SCNScene *scene; SCNNode *deviceNode; SCNNode *displayNode; struct ABDeviceSceneButtonModel { SCNNode *bodyNode; SCNNode *muteWallNode; SCNNode *buttonBlockingNode; SCNNode *capNode; SCNNode *capNodeHighlight; SCNNode *sidesNode; SCNNode *sidesNodeHighlight; struct SCNMatrix4 { float m11; float m12; float m13; float m14; float m21; float m22; float m23; float m24; float m31; float m32; float m33; float m34; float m41; float m42; float m43; float m44; } highlightTransform; } buttonModel; } _sceneModel;
}

@property BOOL shouldAbortLoading;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_loadResources;
- (void)_didCompleteWithSuccess:(BOOL)a0;
- (void)_doCleanup;

@end
