@class NSString, LNAction;

@interface WFLinkContextualAction : WFContextualAction

@property (readonly, nonatomic) LNAction *linkAction;
@property (readonly, copy, nonatomic) NSString *appBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, nonatomic) long long authenticationPolicy;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAction:(id)a0 bundleIdentifier:(id)a1;
- (id)workflowRunKind;
- (id)copyWithParameters:(id)a0;
- (id)initWithAction:(id)a0 appBundleIdentifier:(id)a1 extensionBundleIdentifier:(id)a2 authenticationPolicy:(long long)a3;
- (id)initWithAction:(id)a0 appBundleIdentifier:(id)a1 extensionBundleIdentifier:(id)a2 contextualParameters:(id)a3 authenticationPolicy:(long long)a4;
- (BOOL)showsUserInterfaceWhenRunning;
- (void)wf_launchAppIfNeededUsingSurface:(unsigned long long)a0;

@end
