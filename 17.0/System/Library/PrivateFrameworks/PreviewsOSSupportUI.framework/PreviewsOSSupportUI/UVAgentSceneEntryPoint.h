@class UIScene, NSString;

@interface UVAgentSceneEntryPoint : NSObject <_UISceneComponentProviding>

@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithScene:(id)a0;
- (void).cxx_destruct;
- (void)_forceApplicationLaunchCompletion;

@end
