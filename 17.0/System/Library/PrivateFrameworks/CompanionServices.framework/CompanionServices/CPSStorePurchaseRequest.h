@class AMSDelegatePurchaseRequest, ACAccount;

@interface CPSStorePurchaseRequest : CPSAuthenticationRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AMSDelegatePurchaseRequest *purchaseRequest;
@property (retain, nonatomic) ACAccount *account;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (long long)authType;
- (id)initWithCoder:(id)a0;

@end
