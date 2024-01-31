@protocol NPKPaymentWebServiceStandaloneTargetDeviceDelegate;

@interface NPKPaymentWebServiceStandaloneTargetDevice : PKPaymentWebServiceTargetDevice

@property (weak, nonatomic) id<NPKPaymentWebServiceStandaloneTargetDeviceDelegate> delegate;

+ (id)standalonePaymentWebServiceWithDelegate:(id)a0;

- (void)enforceUpgradedPasscodePolicyWithCompletion:(id /* block */)a0;
- (void)endRequiringUpgradedPasscodeIfNecessary;
- (void).cxx_destruct;
- (void)startRequiringUpgradedPasscodeWithPasscodeMeetsPolicy:(BOOL)a0;

@end
