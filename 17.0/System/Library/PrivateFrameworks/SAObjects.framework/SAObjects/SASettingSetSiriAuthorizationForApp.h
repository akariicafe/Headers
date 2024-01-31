@class NSString;

@interface SASettingSetSiriAuthorizationForApp : SASettingSetBool

@property (copy, nonatomic) NSString *bundleId;

+ (id)setSiriAuthorizationForApp;
+ (id)setSiriAuthorizationForAppWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
