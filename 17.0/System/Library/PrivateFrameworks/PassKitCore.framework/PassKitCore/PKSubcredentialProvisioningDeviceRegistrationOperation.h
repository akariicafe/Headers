@class PKPaymentProvisioningController;

@interface PKSubcredentialProvisioningDeviceRegistrationOperation : PKSubcredentialProvisioningOperation {
    PKPaymentProvisioningController *_provisioningController;
    BOOL _operationCancelled;
}

- (void)performOperation;
- (void)cancelOperation;
- (void).cxx_destruct;
- (BOOL)canCancelOperation;
- (id)initWithConfiguration:(id)a0 context:(id)a1 delegate:(id)a2;

@end
