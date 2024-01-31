@class FBSSettingsDiff, FBSSceneTransitionContext, FBSSettings;

@interface FBSSceneUpdate : NSObject {
    FBSSettings *_settings;
    FBSSettings *_previousSettings;
    FBSSettingsDiff *_diff;
    FBSSceneTransitionContext *_context;
}

- (id)settings;
- (id)settingsDiff;
- (void).cxx_destruct;
- (id)transitionContext;
- (void)inspect:(id /* block */)a0;
- (id)previousSettings;

@end
