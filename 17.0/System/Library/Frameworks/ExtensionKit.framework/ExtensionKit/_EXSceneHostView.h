@class NSUUID, NSString, _EXExtensionProcessHandle, FBScene;
@protocol UIScenePresenter;

@interface _EXSceneHostView : UIView

@property (retain, nonatomic) FBScene *scene;
@property (retain, nonatomic) id<UIScenePresenter> scenePresenter;
@property (retain, nonatomic) _EXExtensionProcessHandle *extensionProcess;
@property (retain, nonatomic) NSUUID *sessionUUID;
@property (readonly, nonatomic) NSString *role;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)creatScene;
- (id)initWithExtensionProcess:(id)a0 sessionUUID:(id)a1 role:(id)a2;

@end
