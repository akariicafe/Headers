@class NSString;

@interface SAEndpointService : SAEndpoint

@property (copy, nonatomic) NSString *serverUrl;

+ (id)endpointService;
+ (id)endpointServiceWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
