@class NSString, NSArray, FBSSceneClientSettingsDiffInspector;
@protocol SBPhysicalButtonZStackPolicyAssistantDelegate;

@interface SBPhysicalButtonZStackPolicyAssistant : NSObject <FBSceneObserver> {
    id<SBPhysicalButtonZStackPolicyAssistantDelegate> _delegate;
    NSArray *_foregroundScenes;
    NSArray *_physicalButtonSceneTargets;
    FBSSceneClientSettingsDiffInspector *_sceneClientSettingsDiffInspector;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (void).cxx_destruct;

@end
