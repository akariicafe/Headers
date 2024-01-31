@class NSString;

@interface POAlgorithm : NSObject <POJWTSigningAlgorithm>

@property (readonly) struct __CFString { } *algorithm;
@property (readonly) NSString *algorithmName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)algorithmWithIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)initWithSecKeyAlgorithm:(struct __CFString { } *)a0 algorithmName:(id)a1;
- (id)signData:(id)a0 usingKey:(struct __SecKey { } *)a1;
- (BOOL)verifySignature:(id)a0 onData:(id)a1 usingCertificateString:(id)a2;
- (BOOL)verifySignature:(id)a0 onData:(id)a1 usingKey:(struct __SecKey { } *)a2;

@end
