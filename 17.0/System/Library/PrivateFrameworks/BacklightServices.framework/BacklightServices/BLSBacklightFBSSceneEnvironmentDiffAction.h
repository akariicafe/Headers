@class BLSBacklightSceneSettingsDiffInspector;
@protocol BLSBacklightFBSSceneEnvironmentDiffActionDelegate;

@interface BLSBacklightFBSSceneEnvironmentDiffAction : NSObject {
    BLSBacklightSceneSettingsDiffInspector *_diffInspector;
}

@property (weak) id<BLSBacklightFBSSceneEnvironmentDiffActionDelegate> delegate;

- (void)performActionsForUpdatedFBSScene:(id)a0 settingsDiff:(id)a1 fromSettings:(id)a2 transitionContext:(id)a3;
- (void).cxx_destruct;

@end
