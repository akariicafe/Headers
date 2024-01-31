@class NSString, NSData, POJWTHeader;

@interface POJWT : NSObject

@property (retain) NSString *rawHeader;
@property (retain) POJWTHeader *decodedHeader;
@property (retain) NSString *rawEncryptedKey;
@property (retain) NSString *rawIV;
@property (retain) NSString *rawBody;
@property (retain) NSString *rawCipherText;
@property (retain) NSString *rawSignature;
@property (retain) NSString *rawAuthenticationTag;
@property (retain) NSData *signedData;
@property (readonly, getter=isJWE) BOOL jwe;

- (id)stringRepresentation;
- (id)mutableCopy;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (BOOL)decodeAndDecryptUsingPrivateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0;
- (BOOL)decodeAndDecryptUsingPrivateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0 apvString:(id)a1;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)decodeEphemeralPublicKey;
- (BOOL)verifySignatureUsingKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0;

@end
