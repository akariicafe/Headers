@class NSString, FBScene, UIView;
@protocol UIScenePresenter;

@interface PRUISAmbientPosterSceneLayerHostView : UIView {
    id<UIScenePresenter> _presenter;
    UIView *_sceneLayerView;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned int contextID;
@property (readonly, nonatomic) FBScene *scene;
@property (nonatomic, getter=isActive) BOOL active;

- (id)initWithIdentifier:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)setContextID:(unsigned int)a0 scene:(id)a1;

@end
