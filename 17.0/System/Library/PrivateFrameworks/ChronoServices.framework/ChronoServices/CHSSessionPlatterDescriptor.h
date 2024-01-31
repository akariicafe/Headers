@class NSData;

@interface CHSSessionPlatterDescriptor : CHSBaseDescriptor <NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *activityAttributesType;

- (unsigned long long)hash;
- (id)widgetForFamily:(long long)a0 activityIdentifier:(id)a1;
- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithExtensionBundleIdentifier:(id)a0 containerBundleIdentifier:(id)a1 supportedFamilies:(unsigned long long)a2 activityAttributesType:(id)a3;
- (id)_initWithDescriptor:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithExtensionIdentity:(id)a0 supportedFamilies:(unsigned long long)a1 activityAttributesType:(id)a2;
- (id)description;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
