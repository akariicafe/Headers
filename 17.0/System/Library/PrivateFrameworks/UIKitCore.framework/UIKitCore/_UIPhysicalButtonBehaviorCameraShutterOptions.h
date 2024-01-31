@interface _UIPhysicalButtonBehaviorCameraShutterOptions : _UIPhysicalButtonBehaviorOptions

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)behaviorOptions;

- (void)encodeWithXPCDictionary:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)description;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)debugDescription;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)_initWithBehavior:(unsigned long long)a0;

@end
