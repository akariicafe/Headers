@class MSOID;

@interface MSCMSEncryptionKeyPreferenceAttribute : NSObject <MSCMSAttributeCoder>

@property (readonly) struct __SecCertificate { } *encryptionCertificate;
@property BOOL legacyASN1Encoding;
@property (readonly, retain) MSOID *attributeType;

- (void)dealloc;
- (id)initWithCertificate:(struct __SecCertificate { } *)a0;
- (id)initWithIdentity:(struct __SecIdentity { } *)a0;
- (id)initWithEmailAddress:(id)a0;
- (id)initWithAttribute:(id)a0 error:(id *)a1;
- (id)encodeAttributeWithError:(id *)a0;
- (id)initWithAttribute:(id)a0 certificates:(id)a1 LAContext:(id)a2 error:(id *)a3;

@end
