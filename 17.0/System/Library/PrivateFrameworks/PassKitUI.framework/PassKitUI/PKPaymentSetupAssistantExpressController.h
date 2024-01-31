@interface PKPaymentSetupAssistantExpressController : PKPaymentSetupAssistantController

- (id)_provisioningContextWithProvisioningController:(id)a0 setupAssistantCredentials:(id)a1 maximumSelectable:(unsigned long long)a2;
- (id)_setupAssistantCredentialForPaymentCredential:(id)a0;
- (id)_setupAssistantCredentialForPaymentPass:(id)a0;
- (void)expressSetupFlowForSetupProvisioningContext:(id)a0 withCompletion:(id /* block */)a1;
- (void)expressSetupProvisioningContext:(id /* block */)a0;

@end
