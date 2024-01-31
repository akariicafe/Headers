@interface JPSignatureVerifier : NSObject

@property (nonatomic) struct JetPackSignatureVerifier { } *backing;
@property (readonly, nonatomic) BOOL releaseBackingOnDealloc;

+ (id)defaultSignatureVerifier;
+ (id)unsafeIgnoreSignatureVerifier;
+ (id)signatureVerifierWithCertificate:(id)a0;

- (void)dealloc;
- (id)initWithBacking:(struct JetPackSignatureVerifier { } *)a0 releaseOnDealloc:(BOOL)a1;

@end
