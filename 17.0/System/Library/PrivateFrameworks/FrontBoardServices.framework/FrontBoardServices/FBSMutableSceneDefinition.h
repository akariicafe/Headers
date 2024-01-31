@class FBSSceneSpecification, FBSSceneIdentity, FBSSceneClientIdentity;

@interface FBSMutableSceneDefinition : FBSSceneDefinition

@property (copy, nonatomic) FBSSceneIdentity *identity;
@property (copy, nonatomic) FBSSceneClientIdentity *clientIdentity;
@property (copy, nonatomic) FBSSceneSpecification *specification;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
