@interface SAHandoffAvailabilityCheck : SABaseClientBoundCommand

+ (id)handoffAvailabilityCheck;
+ (id)handoffAvailabilityCheckWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
