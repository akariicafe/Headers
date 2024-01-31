@class NSNumber;

@interface SASConfirmEndpoint : SABaseClientBoundCommand

@property (copy, nonatomic) NSNumber *endpointConfirmationTimestamp;

+ (id)confirmEndpoint;
+ (id)confirmEndpointWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
