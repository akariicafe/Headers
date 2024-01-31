@class LAAuthenticationMethod, NSString;

@interface LAAuthenticationMethodResult : NSObject

@property (readonly, nonatomic) LAAuthenticationMethod *authenticationMethod;
@property (readonly, nonatomic) NSString *authenticatedUser;

- (void).cxx_destruct;
- (id)initWithAuthenticatedUser:(id)a0 authenticationMethod:(id)a1;
- (BOOL)unlockKeyBagWithError:(id *)a0;

@end
