@class UIScene, NSString, NSHashTable;

@interface _UIPlaybackControlsStateManager : NSObject <_UISceneComponentProviding> {
    NSHashTable *_fullscreenPlaybackAssertions;
    NSHashTable *_controlsPresentedAssertions;
}

@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
