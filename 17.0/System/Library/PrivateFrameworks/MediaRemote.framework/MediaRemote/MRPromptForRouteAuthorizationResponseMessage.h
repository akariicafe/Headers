@class NSString;

@interface MRPromptForRouteAuthorizationResponseMessage : MRProtocolMessage

@property (readonly, nonatomic) NSString *response;

- (id)initWithResponse:(id)a0;
- (unsigned long long)type;

@end
