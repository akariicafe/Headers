@class NSString, LNProperty, LNAction;

@interface WFAppIntentBasedTopHitContextualAction : WFTopHitItemContextualAction

@property (readonly, nonatomic) LNAction *linkAction;
@property (readonly, nonatomic) LNProperty *parameterValue;
@property (readonly, copy, nonatomic) NSString *appBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, nonatomic) long long authenticationPolicy;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAction:(id)a0 appBundleIdentifier:(id)a1 extensionBundleIdentifier:(id)a2 authenticationPolicy:(long long)a3 associatedAppBundleIdentifier:(id)a4 parameterValue:(id)a5 displayFormatString:(id)a6 title:(id)a7 subtitleFormatString:(id)a8 primaryColor:(unsigned long long)a9 icon:(id)a10 accessoryIcon:(id)a11 namedQueryInfo:(id)a12;
- (BOOL)showsUserInterfaceWhenRunning;

@end
