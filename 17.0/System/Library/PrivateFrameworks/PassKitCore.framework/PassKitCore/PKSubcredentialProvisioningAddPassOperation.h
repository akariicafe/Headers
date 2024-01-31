@class PKAppletSubcredential, PKPaymentPass;

@interface PKSubcredentialProvisioningAddPassOperation : PKSubcredentialProvisioningOperation {
    PKPaymentPass *_downloadedPass;
    PKAppletSubcredential *_addedCredential;
}

- (void)performOperation;
- (void).cxx_destruct;
- (void)performOperationWithCompletion:(id /* block */)a0;
- (void)addPassToLibrary:(id)a0 withCompletion:(id /* block */)a1;
- (void)configureExpressModeForPass:(id)a0 withCompletion:(id /* block */)a1;
- (id)initWithConfiguration:(id)a0 context:(id)a1 delegate:(id)a2;
- (void)updatePassMetadata:(id)a0 withCompletion:(id /* block */)a1;

@end
