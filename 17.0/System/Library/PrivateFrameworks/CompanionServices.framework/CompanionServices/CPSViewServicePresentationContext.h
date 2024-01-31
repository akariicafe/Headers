@class NSData, NSString, AMSDelegatePurchaseRequest, CPSSystemAuthenticationRequest, CPSRestrictedAccessRequest, CPSTVProviderRequest, NSDictionary, PKPaymentRequest, ACAccount, CPSWebRequest, CPSLearnMoreRequest, CPSStoreAuthenticationRequest;

@interface CPSViewServicePresentationContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *deviceName;
@property (retain, nonatomic) AMSDelegatePurchaseRequest *delegatePurchaseRequest;
@property (retain, nonatomic) PKPaymentRequest *paymentRequest;
@property (retain, nonatomic) NSDictionary *paymentContext;
@property (retain, nonatomic) ACAccount *storeAccount;
@property (retain, nonatomic) CPSSystemAuthenticationRequest *systemAuthenticationRequest;
@property (retain, nonatomic) CPSWebRequest *webAuthenticationRequest;
@property (retain, nonatomic) NSData *sharingData;
@property (retain, nonatomic) CPSRestrictedAccessRequest *restrictedAccessRequest;
@property (retain, nonatomic) CPSStoreAuthenticationRequest *storeAuthenticationRequest;
@property (retain, nonatomic) CPSTVProviderRequest *tvProviderRequest;
@property (retain, nonatomic) CPSLearnMoreRequest *learnMoreRequest;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
