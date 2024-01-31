@interface ContactsFoundation.CNKeychainFacadeTestDouble : NSObject <ContactsFoundation.CNKeychainFacadeProtocol> {
    void /* unknown type, empty encoding */ keychainEnabled;
    void /* unknown type, empty encoding */ keyDict;
}

- (id)init;
- (void).cxx_destruct;
- (id)createSymmetricKeyIfNeededWithLabel:(id)a0;
- (id)existingSymmetricKeyWithLabel:(id)a0;
- (id)removeEncryptionKeyWithLabel:(id)a0;

@end
