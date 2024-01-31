@interface BLSBacklightFBSSceneEnvironmentActionHandler : NSObject

+ (id)desiredFidelityRequestFromAction:(id)a0;
+ (id)frameSpecifiersRequestFromAction:(id)a0;

- (id)respondToActions:(id)a0 forFBSScene:(id)a1 fromTransitionContext:(id)a2;

@end
