@class NSArray, PKPaymentPass;

@interface NPKPaymentProvisioningFlowControllerIssuerVerificationChannelsStepContext : NPKPaymentProvisioningFlowStepContext

@property (retain, nonatomic) PKPaymentPass *paymentPass;
@property (retain, nonatomic) NSArray *verificationChannels;

- (id)description;
- (void).cxx_destruct;
- (id)initWithRequestContext:(id)a0;

@end
