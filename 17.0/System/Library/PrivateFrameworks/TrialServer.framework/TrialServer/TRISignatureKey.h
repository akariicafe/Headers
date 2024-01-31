@interface TRISignatureKey : NSObject {
    struct __SecKey { } *_key;
}

+ (struct __SecKey { } *)_keyFromCertificateChain:(id)a0;
+ (id)keyFromData:(id)a0;

- (id)init;
- (void)dealloc;
- (BOOL)_validateSignature:(id)a0 data:(id)a1 algorithm:(struct __CFString { } *)a2;
- (BOOL)validateBase64Signature:(id)a0 data:(id)a1;
- (BOOL)_validateBase64Signature:(id)a0 data:(id)a1 algorithm:(struct __CFString { } *)a2;
- (BOOL)validateBase64Signature:(id)a0 forFile:(id)a1;
- (id)initWithKey:(struct __SecKey { } *)a0;

@end
