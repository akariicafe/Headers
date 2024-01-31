@class FBSceneWorkspace, FBScene, BLSHGenericSceneDelegateWithActionHandlers;
@protocol UIScenePresenter;

@interface CSBackgroundPresentationManager : NSObject

@property (readonly, nonatomic) FBSceneWorkspace *sceneWorkspace;
@property (readonly, nonatomic) id<UIScenePresenter> scenePresenter;
@property (readonly, nonatomic) FBScene *currentScene;
@property (readonly, nonatomic) BLSHGenericSceneDelegateWithActionHandlers *sceneDelegate;

- (id)init;
- (void)dealloc;
- (id)createBackgroundViewControllerForDefinition:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
