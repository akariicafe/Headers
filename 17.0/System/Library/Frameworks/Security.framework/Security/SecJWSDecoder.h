@class NSString, NSData, NSError;

@interface SecJWSDecoder : NSObject

@property (readonly, nonatomic) NSString *keyID;
@property (readonly, nonatomic) NSData *payload;
@property (readonly, nonatomic) NSError *verificationError;

- (void).cxx_destruct;
- (id)dataWithBase64URLEncodedString:(id)a0;
- (id)_createASN1SignatureFromJWSSignature:(id)a0;
- (BOOL)_validateJWSProtectedHeader:(id)a0;
- (void)_validateJWSSignature:(id)a0 ofHeader:(id)a1 andPayload:(id)a2 withPublicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a3;
- (id)initWithJWSCompactEncodedString:(id)a0 keyID:(id)a1 publicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a2;

@end
