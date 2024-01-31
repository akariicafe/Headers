@class PKPaymentSetupProduct;

@interface NPKPaymentProvisioningFlowControllerDigitalIssuanceAmountStepContext : NPKPaymentProvisioningFlowStepContext

@property (retain, nonatomic) PKPaymentSetupProduct *product;
@property (nonatomic) BOOL allowsReaderModeEntry;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithRequestContext:(id)a0;
- (id)initWithCoder:(id)a0;

@end
