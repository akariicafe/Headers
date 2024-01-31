@class NSString;

@interface CPLFingerprintScheme : NSObject {
    long long _zeroByteFileFingerprintOnce;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, retain, nonatomic) CPLFingerprintScheme *fingerprintSchemeForNewMasterAsset;
@property (class, readonly, nonatomic) CPLFingerprintScheme *defaultFingerprintSchemeV1;
@property (class, readonly, nonatomic) CPLFingerprintScheme *defaultFingerprintSchemeV2;
@property (class, readonly, nonatomic) CPLFingerprintScheme *nonPrivateFingerprintScheme;
@property (class, readonly, nonatomic) CPLFingerprintScheme *defaultFingerprintSchemeForUnknownRecord;

@property (readonly, nonatomic) BOOL isMMCSv2;
@property (readonly, nonatomic) NSString *zeroByteFileFingerprint;
@property (readonly, nonatomic) BOOL allowsStreaming;
@property (readonly, nonatomic) NSString *fingerprintSchemeDescription;

+ (void)initialize;
+ (id)fingerprintSchemeForFingerprint:(id)a0;
+ (id)_fingerprintSchemeForSignature:(id)a0;
+ (void)configureDefaultFingerprintSchemeForUniverseWithName:(id)a0;
+ (id)fingerprintSchemeForMasterIdentifier:(id)a0;
+ (id)fingerprintSchemeForSignature:(id)a0;
+ (BOOL)isMMCSv2Fingerprint:(id)a0;
+ (BOOL)isMMCSv2Signature:(id)a0;
+ (id)normalizeBoundaryKey:(id)a0;
+ (void)setDefaultFingerprintSchemeV2:(id)a0;

- (id)init;
- (id)fingerPrintForFileAtURL:(id)a0 error:(id *)a1;
- (id)fingerPrintForData:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)fingerPrintForFD:(int)a0 error:(id *)a1;
- (void **)_createSignatureGenerator;
- (BOOL)canMatchSignatureToFingerprint;

@end
