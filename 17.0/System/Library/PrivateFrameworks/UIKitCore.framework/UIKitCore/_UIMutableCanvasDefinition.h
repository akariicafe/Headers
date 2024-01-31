@class UISceneSession;

@interface _UIMutableCanvasDefinition : _UICanvasDefinition {
    UISceneSession *_sceneSession;
}

@property (retain, nonatomic) Class canvasSubclass;
@property (retain, nonatomic) Class delegateClass;

- (id)persistentIdentifier;
- (id)userInfo;
- (id)role;
- (id)scene;
- (Class)delegateClass;
- (long long)systemType;
- (void)setDelegateClass:(Class)a0;
- (void)setUserInfo:(id)a0;
- (id)initWithRepresentation:(id)a0;
- (void).cxx_destruct;
- (void)setCanvasSubclass:(Class)a0;
- (id)representedCanvas;
- (id)configuration;
- (Class)canvasSubclass;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)stateRestorationActivity;

@end
