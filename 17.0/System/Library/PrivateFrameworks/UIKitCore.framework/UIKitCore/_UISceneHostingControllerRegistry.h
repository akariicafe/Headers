@class _UISceneHostingDiffAction, UIScene, NSString, NSPointerArray;

@interface _UISceneHostingControllerRegistry : NSObject <_UISceneComponentProviding> {
    _UISceneHostingDiffAction *_hostingSceneDiffAction;
    NSPointerArray *_weakAssociatedSceneHostingControllers;
}

@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentForScene:(id)a0;

- (void)_sceneWillInvalidate:(id)a0;
- (id)_settingsDiffActionsForScene:(id)a0;
- (id)initWithScene:(id)a0;
- (void).cxx_destruct;
- (long long)_indexOfSceneHostingController:(id)a0;
- (void)performOnAllHostingControllers:(id /* block */)a0;
- (void)associateSceneHostingController:(id)a0;
- (id)associatedSceneHostingControllers;
- (void)unassociateSceneHostingController:(id)a0;

@end
