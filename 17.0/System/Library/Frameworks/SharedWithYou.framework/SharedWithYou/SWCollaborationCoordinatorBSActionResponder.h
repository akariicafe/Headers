@class NSString;

@interface SWCollaborationCoordinatorBSActionResponder : NSObject <_UISceneBSActionResponding>

@property (class, readonly, nonatomic) SWCollaborationCoordinatorBSActionResponder *sharedActionResponder;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)_respondToActions:(id)a0 forFBSScene:(id)a1 inUIScene:(id)a2 fromTransitionContext:(id)a3;
- (void)_appDidFinishLaunching:(id)a0;

@end
