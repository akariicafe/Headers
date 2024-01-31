@class NSData;

@interface SAStartHandoffRequest : SAStartRequest

@property (copy, nonatomic) NSData *handoffData;

+ (id)startHandoffRequest;
+ (id)startHandoffRequestWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
