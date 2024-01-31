@class NSString;

@interface _UISceneSnapshotBSActionsHandler : NSObject <_UISceneBSActionHandler>

@property (readonly, nonatomic) BOOL wantsOwnAssertion;
@property (readonly, nonatomic) BOOL wantsAsyncSnapshot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_respondToActions:(id)a0 forFBSScene:(id)a1 inUIScene:(id)a2 fromTransitionContext:(id)a3;

@end
