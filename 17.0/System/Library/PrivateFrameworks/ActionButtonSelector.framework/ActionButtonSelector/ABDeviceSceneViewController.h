@class SCNNode, NSString, SCNView, SCNScene, ABDeviceDisplayView;
@protocol UITraitChangeRegistration, ABDeviceSceneViewControllerDelegate;

@interface ABDeviceSceneViewController : UIViewController <SCNSceneRendererDelegate> {
    SCNView *_sceneView;
    struct ABDeviceSceneModel { SCNScene *scene; SCNNode *deviceNode; SCNNode *displayNode; struct ABDeviceSceneButtonModel { SCNNode *bodyNode; SCNNode *muteWallNode; SCNNode *buttonBlockingNode; SCNNode *capNode; SCNNode *capNodeHighlight; SCNNode *sidesNode; SCNNode *sidesNodeHighlight; struct SCNMatrix4 { float m11; float m12; float m13; float m14; float m21; float m22; float m23; float m24; float m31; float m32; float m33; float m34; float m41; float m42; float m43; float m44; } highlightTransform; } buttonModel; } _sceneModel;
    ABDeviceDisplayView *_displayView;
    id _resourceLoadingToken;
    id<UITraitChangeRegistration> _traitRegistration;
    id<ABDeviceSceneViewControllerDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewIsAppearing:(BOOL)a0;
- (void)renderer:(id)a0 willRenderScene:(id)a1 atTime:(double)a2;
- (void)_renderWithTargetTimestamp:(double)a0 duration:(double)a1 renderInputs:(struct ABDeviceSceneRenderInputs { struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } x0; struct ABDeviceSceneCameraAndLight { double x0; double x1; double x2; double x3; double x4; } x1; struct ABDeviceSceneButtonHighlight { id x0; double x1; } x2; double x3; long long x4; })a2;
- (void)_setupSceneIfNeeded;
- (void)_updateForLayoutDirection;

@end
