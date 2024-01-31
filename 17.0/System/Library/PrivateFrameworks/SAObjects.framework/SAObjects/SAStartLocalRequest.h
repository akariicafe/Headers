@class NSArray;

@interface SAStartLocalRequest : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *clientBoundCommands;

+ (id)startLocalRequest;
+ (id)startLocalRequestWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
