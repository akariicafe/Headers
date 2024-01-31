@class NSString;

@interface SAIntentGroupAppEntitlementRequest : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *appBundleId;

+ (id)appEntitlementRequest;
+ (id)appEntitlementRequestWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
