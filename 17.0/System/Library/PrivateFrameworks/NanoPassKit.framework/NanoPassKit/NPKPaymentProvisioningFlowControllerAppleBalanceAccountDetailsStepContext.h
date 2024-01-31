@class NSString, PKCurrencyAmount;

@interface NPKPaymentProvisioningFlowControllerAppleBalanceAccountDetailsStepContext : NPKPaymentProvisioningFlowStepContext

@property (retain, nonatomic) PKCurrencyAmount *balance;
@property (retain, nonatomic) NSString *appleID;

- (id)description;
- (void).cxx_destruct;
- (id)initWithRequestContext:(id)a0;

@end
