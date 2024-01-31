@class UIScene, NSMutableSet, NSString;

@interface _UIContextMenuSceneComponent : NSObject <_UISceneComponentProviding>

@property (retain, nonatomic) NSMutableSet *activePresentations;
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sceneComponentForView:(id)a0;

- (id)initWithScene:(id)a0;
- (void).cxx_destruct;
- (void)dismissActiveMenus;
- (void)registerPresentation:(id)a0;
- (void)removePresentation:(id)a0;

@end
