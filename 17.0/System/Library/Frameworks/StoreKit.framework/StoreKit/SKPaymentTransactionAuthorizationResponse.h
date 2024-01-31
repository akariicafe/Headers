@class NSError, AKAuthorizationCredential;

@interface SKPaymentTransactionAuthorizationResponse : NSObject

@property (readonly, nonatomic) AKAuthorizationCredential *authorizationAppleIDCredential;
@property (readonly, nonatomic) NSError *accountSignupError;

- (void).cxx_destruct;
- (id)initWithAuthorizationCredential:(id)a0 error:(id)a1;

@end
