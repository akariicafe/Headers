@class PKServiceProviderPurchase, NSString, PKPaymentSetupProduct, PKDigitalIssuanceServiceProviderItem, PKCurrencyAmount, PKDigitalIssuanceServiceProviderProduct;

@interface PKPaymentDigitalIssuanceProductCredential : PKPaymentCredential

@property (copy, nonatomic) NSString *productIdentifier;
@property (retain, nonatomic) PKServiceProviderPurchase *purchase;
@property (copy, nonatomic) PKCurrencyAmount *balance;
@property (copy, nonatomic) PKCurrencyAmount *price;
@property (retain, nonatomic) PKDigitalIssuanceServiceProviderProduct *serviceProviderProduct;
@property (retain, nonatomic) PKDigitalIssuanceServiceProviderItem *serviceProviderItem;
@property (retain, nonatomic) NSString *currency;
@property (readonly, nonatomic) PKPaymentSetupProduct *product;

- (void).cxx_destruct;
- (id)metadata;
- (id)initWithPaymentSetupProduct:(id)a0 purchase:(id)a1 balance:(id)a2;
- (id)initWithPaymentSetupProduct:(id)a0 purchase:(id)a1 balance:(id)a2 serviceProviderProduct:(id)a3 item:(id)a4 currency:(id)a5;
- (id)initWithPaymentSetupProduct:(id)a0 purchase:(id)a1 serviceProviderProduct:(id)a2 item:(id)a3 currency:(id)a4;
- (id)setupProductIdentifier;

@end
