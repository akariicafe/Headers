@class NSUUID, NSString, FBSDisplayConfiguration, SBWorkspaceApplicationSceneTransitionContext, NSSet, SBWorkspaceTransientOverlayTransitionContext, SBWorkspace, BSProcessHandle, FBSDisplayIdentity, SBLayoutStateTransitionCoordinator;

@interface SBWorkspaceTransitionRequest : NSObject <SBUIAnimationControllerTransitionContextProvider, SBWorkspaceApplicationSceneTransitionContextDelegate, BSDescriptionProviding> {
    SBLayoutStateTransitionCoordinator *_layoutStateTransitionCoordinator;
    long long _interfaceOrientation;
}

@property (readonly, nonatomic) BOOL isMainWorkspaceTransitionRequest;
@property (readonly, copy, nonatomic) NSSet *toApplicationSceneEntities;
@property (readonly, copy, nonatomic) NSSet *fromApplicationSceneEntities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) SBWorkspace *workspace;
@property (readonly, nonatomic) FBSDisplayIdentity *displayIdentity;
@property (readonly, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (retain, nonatomic) BSProcessHandle *originatingProcess;
@property (copy, nonatomic) NSString *eventLabel;
@property (readonly, copy, nonatomic) NSUUID *uniqueID;
@property (readonly, nonatomic, getter=isFinalized) BOOL finalized;
@property (retain, nonatomic) SBWorkspaceApplicationSceneTransitionContext *applicationContext;
@property (retain, nonatomic) SBWorkspaceTransientOverlayTransitionContext *transientOverlayContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })applicationTransitionContext:(id)a0 frameForApplicationSceneEntity:(id)a1;
- (id)succinctDescriptionBuilder;
- (void)modifyApplicationContext:(id /* block */)a0;
- (id)layoutStateForApplicationTransitionContext:(id)a0;
- (id)previousLayoutStateForApplicationTransitionContext:(id)a0;
- (void)declineWithReason:(id)a0;
- (void)finalize;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)compactDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)_initWithWorkspace:(id)a0 displayConfiguration:(id)a1;
- (void).cxx_destruct;
- (void)setDisplayConfiguration:(id)a0;
- (id)succinctDescription;
- (void)setEventLabelWithFormat:(id)a0;
- (void)modifyTransientOverlayContext:(id /* block */)a0;

@end
