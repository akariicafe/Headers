@class NSString;

@interface SAAppsCheckRestriction : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *executionEnvironment;
@property (copy, nonatomic) NSString *launchId;

+ (id)checkRestriction;
+ (id)checkRestrictionWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
