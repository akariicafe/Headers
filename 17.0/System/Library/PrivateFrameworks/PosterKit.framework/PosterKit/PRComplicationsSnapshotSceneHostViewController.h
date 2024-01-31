@class FBScene;
@protocol UIScenePresenter;

@interface PRComplicationsSnapshotSceneHostViewController : UIViewController {
    FBScene *_scene;
    id<UIScenePresenter> _scenePresenter;
}

- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (id)initWithScene:(id)a0;
- (void).cxx_destruct;

@end
