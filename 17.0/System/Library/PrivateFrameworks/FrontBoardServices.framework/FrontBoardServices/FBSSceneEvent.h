@class FBSSceneSettingsDiff, FBSSceneTransitionContext, FBSSceneClientSettingsDiff, NSSet;

@interface FBSSceneEvent : FBSSceneMessage

@property (nonatomic) long long source;
@property (retain, nonatomic) FBSSceneSettingsDiff *settingsDiff;
@property (retain, nonatomic) FBSSceneClientSettingsDiff *clientSettingsDiff;
@property (retain, nonatomic) FBSSceneTransitionContext *transitionContext;
@property (readonly, nonatomic) NSSet *actions;

- (id)init;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)description;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;

@end
