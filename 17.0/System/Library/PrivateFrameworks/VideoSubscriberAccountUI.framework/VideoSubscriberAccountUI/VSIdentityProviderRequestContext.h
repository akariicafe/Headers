@class VSIdentityProviderRequest;

@interface VSIdentityProviderRequestContext : NSObject

@property (retain, nonatomic) VSIdentityProviderRequest *request;
@property (nonatomic) BOOL attemptedVerificationStateReset;

- (void).cxx_destruct;

@end
