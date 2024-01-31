@class NSString, NSDictionary, PKPaymentSetupProduct;

@interface PKPaymentContactlessProductCredential : PKPaymentCredential

@property (copy, nonatomic) NSString *productIdentifier;
@property (copy, nonatomic) NSDictionary *readerModeMetadata;
@property (readonly, copy, nonatomic) PKPaymentSetupProduct *product;
@property (copy, nonatomic) NSString *cardSessionToken;

- (id)init;
- (void).cxx_destruct;
- (long long)_cardTypeFromSetupProductType:(unsigned long long)a0;
- (id)initWithPaymentSetupProduct:(id)a0;
- (id)initWithPaymentSetupProduct:(id)a0 cardSessionToken:(id)a1;
- (id)setupProductIdentifier;

@end
