@class _SFAuthenticatedEncryptionOperation, _SFECDHOperation;
@protocol SFDigestOperation;

@interface SFIESOperation_Ivars : NSObject {
    long long curve;
    _SFECDHOperation *diffieHellmanOperation;
    _SFAuthenticatedEncryptionOperation *encryptionOperation;
    id<SFDigestOperation> digestOperation;
}

- (void).cxx_destruct;

@end
