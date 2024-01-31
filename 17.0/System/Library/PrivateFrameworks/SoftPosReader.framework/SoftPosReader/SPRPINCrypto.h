@interface SPRPINCrypto : NSObject {
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *_peerPublicKey;
}

+ (BOOL)verifySignature:(id)a0 onRequest:(id)a1 usingKey:(id)a2 error:(id *)a3;

- (void)dealloc;
- (id)encryptDigit:(unsigned char)a0 error:(id *)a1;
- (id)initWithAttestationData:(id)a0 casdCertificate:(id)a1 error:(id *)a2;

@end
