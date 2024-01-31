@class NSArray, MSCMSSignerInfo, NSDate;

@interface ECSignatureInfo : NSObject {
    MSCMSSignerInfo *_signerInfo;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _encryptionCertificateLock;
    struct __SecCertificate { } *_encryptionCertificate;
}

@property (readonly, copy, nonatomic) NSArray *addresses;
@property (readonly, nonatomic) struct __SecCertificate { } *signingCertificate;
@property (readonly, nonatomic) struct __SecCertificate { } *preferredEncryptionCertificate;
@property (readonly, copy, nonatomic) NSArray *smimeCapabilities;
@property (readonly, copy, nonatomic) NSDate *signingDate;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithSignerInfo:(id)a0;

@end
