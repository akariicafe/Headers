@interface SecJWSEncoder : NSObject

@property struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *publicKey;
@property struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *privateKey;

- (id)init;
- (void)dealloc;
- (id)base64URLEncodedStringRepresentationWithData:(id)a0;
- (id)base64URLEncodedStringRepresentationWithDictionary:(id)a0;
- (id)compactJSONStringRepresentationWithDictionary:(id)a0;
- (id)createKeyPair;
- (id)encodedJWSWithPayload:(id)a0 kid:(id)a1 nonce:(id)a2 url:(id)a3 error:(id *)a4;
- (id)initWithPublicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0 privateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1;
- (id)jwkPublicKey;
- (id)signatureWithProtectedHeader:(id)a0 payload:(id)a1;

@end
