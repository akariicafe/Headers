@interface UISSceneProminentPlacementConfiguration : UISScenePlacementConfiguration

@property (nonatomic) BOOL prefersLargeSize;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)placementType;
+ (BOOL)supportsBSXPCSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
