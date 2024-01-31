@class NSString, PKPassLibrary;

@interface PKPassLibraryDefaultDataProvider : NSObject <PKPassLibraryDataProvider> {
    PKPassLibrary *_library;
}

@property (readonly, nonatomic) BOOL canAddPaymentPass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)passWithUniqueID:(id)a0;
- (id)init;
- (unsigned long long)countOfPasses;
- (BOOL)canAddSecureElementPassWithConfiguration:(id)a0;
- (void)removePass:(id)a0;
- (id)passes;
- (id)passForProvisioningCredentialHash:(id)a0;
- (id)peerPaymentPassUniqueID;
- (void).cxx_destruct;
- (id)passWithPassTypeIdentifier:(id)a0 serialNumber:(id)a1;
- (id)initWithPassLibrary:(id)a0;
- (id)paymentPasses;

@end
