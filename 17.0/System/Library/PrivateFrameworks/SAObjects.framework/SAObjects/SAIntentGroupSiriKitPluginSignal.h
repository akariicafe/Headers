@class NSString;

@interface SAIntentGroupSiriKitPluginSignal : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *bundleIdentifier;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)initWithBundleIdentifier:(id)a0;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
