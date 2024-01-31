@class NSString, BLSBacklightFBSSceneEnvironmentActionHandler;

@interface _UIBacklightUISceneEnvironmentActionHandler : NSObject <_UISceneBSActionResponding> {
    BLSBacklightFBSSceneEnvironmentActionHandler *_fbsSceneEnvironmentDiffAction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_respondToActions:(id)a0 forFBSScene:(id)a1 inUIScene:(id)a2 fromTransitionContext:(id)a3;

@end
