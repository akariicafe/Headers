@class AMSDelegatePurchaseRequest;

@interface AMSDelegatePurchaseResult : AMSDelegateAuthenticateResult <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AMSDelegatePurchaseRequest *request;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
