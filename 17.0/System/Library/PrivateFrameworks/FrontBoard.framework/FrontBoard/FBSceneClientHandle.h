@class NSString, FBProcess, FBSSceneClientIdentity, RBSProcessHandle;

@interface FBSceneClientHandle : NSObject

@property (readonly, nonatomic) FBProcess *legacyProcess;
@property (readonly, nonatomic) FBSSceneClientIdentity *identity;
@property (readonly, nonatomic) RBSProcessHandle *processHandle;
@property (readonly, nonatomic) NSString *bundleIdentifier;

+ (id)handleForScene:(id)a0 clientProcess:(id)a1;

- (id)description;
- (void).cxx_destruct;

@end
