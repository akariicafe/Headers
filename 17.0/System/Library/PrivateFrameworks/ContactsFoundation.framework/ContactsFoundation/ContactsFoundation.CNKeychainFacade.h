@interface ContactsFoundation.CNKeychainFacade : NSObject <ContactsFoundation.CNKeychainFacadeProtocol>

- (id)init;
- (void).cxx_destruct;
- (id)createSymmetricKeyIfNeededWithLabel:(id)a0;
- (id)existingSymmetricKeyWithLabel:(id)a0;
- (id)removeEncryptionKeyWithLabel:(id)a0;

@end
