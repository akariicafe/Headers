@class NSString, FCPaymentTransactionAuthorizationResponse;

@interface FCCompletedPaymentTransaction : NSObject

@property (readonly, copy, nonatomic) NSString *receipt;
@property (readonly, copy, nonatomic) NSString *productID;
@property (readonly, copy, nonatomic) FCPaymentTransactionAuthorizationResponse *appleIDAccountDetails;

- (void).cxx_destruct;
- (id)initWithProductID:(id)a0 receipt:(id)a1 appleIDAccountDetails:(id)a2;

@end
