@class UIScene, BSSimpleAssertion, NSString;

@interface _UISystemInputActivityManager : NSObject <_UISceneComponentProviding>

@property (weak, nonatomic) BSSimpleAssertion *_activeSystemInputInteraction;
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)windowHostingScene;
- (id)initWithScene:(id)a0;
- (void).cxx_destruct;
- (void)_updateClientSettingsSystemInputActive:(BOOL)a0;
- (id)beginTrackingSystemInputActivity;

@end
