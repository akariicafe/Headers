@class NSString, FBSSceneSpecification, FBSSceneClientIdentity, FBSSceneIdentity;

@interface FBSSceneDefinition : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding>

@property (copy, nonatomic) FBSSceneIdentity *identity;
@property (copy, nonatomic) FBSSceneClientIdentity *clientIdentity;
@property (copy, nonatomic) FBSSceneSpecification *specification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)isValid;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
