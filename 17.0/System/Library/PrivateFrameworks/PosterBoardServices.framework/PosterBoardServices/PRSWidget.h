@class NSString, INIntent;

@interface PRSWidget : NSObject <NSSecureCoding, BSXPCSecureCoding, NSCopying, BSDescriptionProviding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (copy, nonatomic) NSString *kind;
@property (copy, nonatomic) NSString *extensionBundleIdentifier;
@property (copy, nonatomic) NSString *containerBundleIdentifier;
@property (nonatomic) unsigned long long family;
@property (retain, nonatomic) INIntent *intent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)initWithUniqueIdentifier:(id)a0 kind:(id)a1 extensionBundleIdentifier:(id)a2 containerBundleIdentifier:(id)a3 family:(unsigned long long)a4 intent:(id)a5;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
