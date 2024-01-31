@class FBScene, UIView;
@protocol UIScenePresenter;

@interface SBSystemApertureSceneElementScenePresenterView : UIView

@property (readonly, nonatomic) id<UIScenePresenter> scenePresenter;
@property (readonly, nonatomic) UIView *sceneContentView;
@property (retain, nonatomic) FBScene *scene;

- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
