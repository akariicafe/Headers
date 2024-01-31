@class NSData;

@interface PTClassicKey : NSObject {
    struct { struct { char *data; unsigned long long length; } version; struct { char *data; unsigned long long length; } assetACL; struct { char *data; unsigned long long length; } assetACLAttestation; struct { char *data; unsigned long long length; } keyBlob; struct { char *data; unsigned long long length; } encryptedWrappedKeyBlob; } ptKeyOutput;
    struct { struct { char *data; unsigned long long length; } version; struct { char *data; unsigned long long length; } instanceSerialNumber; struct { char *data; unsigned long long length; } publicKey; struct { char *data; unsigned long long length; } keyNumber; struct { char *data; unsigned long long length; } deviceInfos; struct { char *data; unsigned long long length; } counterLimit; struct { char *data; unsigned long long length; } counterIndex; } ptKeyBlob;
}

@property (readonly) NSData *keyData;
@property (readonly) BOOL isExportedData;

+ (id)withData:(id)a0 error:(id *)a1;
+ (id)withExportedBlob:(id)a0 error:(id *)a1;

- (id)publicKey;
- (id)description;
- (void).cxx_destruct;
- (id)keyIdentifier;
- (id)keyBlob;
- (id)assetACL;
- (id)assetACLAttestation;
- (struct { char *x0; unsigned long long x1; })assetACLAttestationItem;
- (struct { char *x0; unsigned long long x1; })assetACLItem;
- (id)encryptedWrappedKeyBlob;
- (struct { char *x0; unsigned long long x1; })encryptedWrappedKeyBlobItem;
- (struct { char *x0; unsigned long long x1; })keyBlobItem;
- (unsigned int)keyNumber;

@end
