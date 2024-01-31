@class FBSSceneIdentityToken;

@interface UISSceneOverlayPlacementConfiguration : UISScenePlacementConfiguration

@property (readonly, nonatomic) FBSSceneIdentityToken *targetSceneIdentity;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)placementType;
+ (BOOL)supportsBSXPCSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTargetSceneIdentity:(id)a0;

@end
