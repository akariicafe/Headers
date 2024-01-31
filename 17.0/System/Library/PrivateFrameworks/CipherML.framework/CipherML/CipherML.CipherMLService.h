@interface CipherML.CipherMLService : SwiftNativeNSObject <CipherML.CipherMLServiceProtocol> {
    void /* unknown type, empty encoding */ _transaction;
    void /* unknown type, empty encoding */ networkManager;
    void /* unknown type, empty encoding */ activeTask;
}

- (id)init;
- (void)cancelUpload;
- (void)uploadKeysWithEncodedUserIdentifier:(id)a0 keyConfigData:(id)a1 delegate:(id)a2;

@end
