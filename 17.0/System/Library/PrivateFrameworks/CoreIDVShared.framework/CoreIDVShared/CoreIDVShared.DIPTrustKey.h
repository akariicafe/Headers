@class NSData;

@interface CoreIDVShared.DIPTrustKey : NSObject {
    void /* unknown type, empty encoding */ encryptedPrivateKey;
    void /* unknown type, empty encoding */ attestation;
    void /* unknown type, empty encoding */ publicKey;
    void /* unknown type, empty encoding */ keyBlob;
    void /* unknown type, empty encoding */ baaCertificate;
}

@property (nonatomic, readonly) NSData *baaCertificate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithEncryptedPrivateKey:(id)a0 attestation:(id)a1 publicKey:(id)a2 keyBlob:(id)a3 error:(id *)a4;

@end
