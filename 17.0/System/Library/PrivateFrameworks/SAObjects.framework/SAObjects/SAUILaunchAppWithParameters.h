@class NSString, NSDictionary;

@interface SAUILaunchAppWithParameters : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *appBundleId;
@property (copy, nonatomic) NSDictionary *parameters;

+ (id)launchAppWithParameters;
+ (id)launchAppWithParametersWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
