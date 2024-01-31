@class _IDSRealTimeEncryptionProxy;

@interface IDSRealTimeEncryptionProxy : NSObject {
    _IDSRealTimeEncryptionProxy *_internal;
}

- (id)initWithAccount:(id)a0;
- (void)dealloc;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (void)requestMasterKeyMaterialForGroup:(id)a0;
- (void)requestPublicKeys;
- (void)resetKeysForGroup:(id)a0;
- (void)sendMKMRecoveryRequestToGroup:(id)a0;
- (void)sendMasterKeyMaterialToGroup:(id)a0;
- (void)sendPrekeyToGroup:(id)a0;

@end
