@class FBScene, FBSSceneTransitionContext, FBSSceneClientSettings;

@interface SBKeyboardClientSettingObserverContext : NSObject {
    FBScene *_scene;
    FBSSceneClientSettings *_oldClientSettings;
    FBSSceneTransitionContext *_transition;
}

- (void).cxx_destruct;

@end
