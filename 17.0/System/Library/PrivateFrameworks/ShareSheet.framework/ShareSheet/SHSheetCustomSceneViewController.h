@class FBSceneWorkspace, RBSProcessIdentity, NSString, UIView, FBScene;
@protocol UIScenePresenter;

@interface SHSheetCustomSceneViewController : UIViewController <FBSceneDelegate>

@property (class, readonly, nonatomic) FBSceneWorkspace *sceneWorkspace;

@property (readonly, nonatomic) FBScene *scene;
@property (readonly, nonatomic) id<UIScenePresenter> scenePresenter;
@property (readonly, nonatomic) UIView *sceneView;
@property (readonly, nonatomic) RBSProcessIdentity *processIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scene:(id)a0 clientDidConnect:(id)a1;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)sceneDidDeactivate:(id)a0 withError:(id)a1;
- (void).cxx_destruct;
- (id)initWithProcessIdentity:(id)a0;
- (void)_setupScene;
- (void)_tearDownScene;

@end
