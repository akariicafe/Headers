@class UIScene, NSString;
@protocol SBDisplaySceneControllerComponentDelegate;

@interface SBDisplaySceneControllerComponent : NSObject <_UISceneComponentProviding>

@property (retain, nonatomic) id<SBDisplaySceneControllerComponentDelegate> delegate;
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithScene:(id)a0;
- (void).cxx_destruct;

@end
