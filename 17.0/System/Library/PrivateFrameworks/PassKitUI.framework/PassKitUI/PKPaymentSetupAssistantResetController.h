@interface PKPaymentSetupAssistantResetController : PKPaymentSetupAssistantCoreController

- (id)_provisioningContextWithProvisioningController:(id)a0 setupAssistantCredentials:(id)a1 maximumSelectable:(unsigned long long)a2;
- (id)_setupAssistantCredentialForPaymentCredential:(id)a0;
- (id)_setupAssistantCredentialForPaymentPass:(id)a0;
- (void)expressResetCardsWithCompletion:(id /* block */)a0;

@end
