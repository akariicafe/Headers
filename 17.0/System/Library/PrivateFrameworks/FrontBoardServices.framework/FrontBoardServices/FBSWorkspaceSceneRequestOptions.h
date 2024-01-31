@class NSString, FBSSceneTransitionContext, FBSSceneSpecification, FBSSceneSettings, FBSSceneClientSettings;

@interface FBSWorkspaceSceneRequestOptions : NSObject <BSXPCSecureCoding>

@property (nonatomic, getter=isClientFuture) BOOL clientFuture;
@property (copy, nonatomic) NSString *workspaceIdentifier;
@property (retain, nonatomic) FBSSceneSettings *initialSettings;
@property (retain, nonatomic) FBSSceneTransitionContext *transitionContext;
@property (nonatomic, getter=isKeyboardScene) BOOL keyboardScene;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) FBSSceneSpecification *specification;
@property (copy, nonatomic) FBSSceneClientSettings *initialClientSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;

@end
