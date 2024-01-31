@class NSString;

@interface SAUIShowRequestHandlingStatus : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *asrStatus;
@property (copy, nonatomic) NSString *executionInputSystem;
@property (copy, nonatomic) NSString *requestHandlingStatus;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
