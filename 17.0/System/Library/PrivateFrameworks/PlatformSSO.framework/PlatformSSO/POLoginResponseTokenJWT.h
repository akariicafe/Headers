@class POLoginResponseJWTBody;

@interface POLoginResponseTokenJWT : POJWT

@property (retain) POLoginResponseJWTBody *decodedBody;

- (id)mutableCopy;
- (id)description;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (BOOL)decodeAndDecryptUsingPrivateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0 apvString:(id)a1;

@end
