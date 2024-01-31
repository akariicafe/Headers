@class NSString;

@interface PKTransactionReceiptAuthorizationRequest : PKPaymentWebServiceRequest

@property (readonly, nonatomic) NSString *receiptServiceIdentifier;
@property (readonly, nonatomic) NSString *receiptIdentifier;
@property (readonly, nonatomic) NSString *cardNumberSuffix;

- (void).cxx_destruct;
- (void)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1 webService:(id)a2 completion:(id /* block */)a3;
- (id)initWithReceiptServiceIdentifier:(id)a0 receiptIdentifier:(id)a1 cardNumberSuffix:(id)a2;

@end
