@class NSString, FBSSceneIdentity, FBSSceneParameters;

@interface FBSWorkspaceSceneRemnant : NSObject <BSXPCSecureCoding>

@property (readonly, copy, nonatomic) FBSSceneIdentity *identity;
@property (readonly, copy, nonatomic) FBSSceneParameters *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)init;
- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)_initWithIdentity:(id)a0 parameters:(id)a1;

@end
