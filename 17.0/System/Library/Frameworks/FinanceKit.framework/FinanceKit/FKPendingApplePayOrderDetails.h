@class NSString, NSURL;

@interface FKPendingApplePayOrderDetails : NSObject

@property (readonly, copy, nonatomic) NSString *transactionIdentifier;
@property (readonly, copy, nonatomic) NSString *orderTypeIdentifier;
@property (readonly, copy, nonatomic) NSString *orderIdentifier;
@property (readonly, copy, nonatomic) NSURL *webServiceBaseURL;
@property (readonly, copy, nonatomic) NSString *authenticationToken;

- (void).cxx_destruct;
- (id)initWithTransactionIdentifier:(id)a0 orderTypeIdentifier:(id)a1 orderIdentifier:(id)a2 webServiceBaseURL:(id)a3 authenticationToken:(id)a4;

@end
