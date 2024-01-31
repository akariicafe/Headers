@class NSNumber, DESPFLEncryptor;

@interface PHAPrivateFederatedLearningPackager : NSObject

@property (readonly, nonatomic) NSNumber *clippingNorm;
@property (readonly, nonatomic) NSNumber *normBinCount;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } privacyIdentifierRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } privacyIdentifierSmallRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } privacyIdentifierLargeRange;
@property (retain, nonatomic) DESPFLEncryptor *encryptor;

- (void).cxx_destruct;
- (BOOL)_generateError:(id *)a0 errorCode:(long long)a1 errorMessage:(id)a2 underlyingError:(id)a3;
- (BOOL)_addNoiseToPrePackagedResults:(float *)a0 elementsCount:(id)a1 shouldAddNoise:(BOOL)a2 error:(id *)a3;
- (BOOL)_callPFLPrivatizeCustomNorm:(float *)a0 elementsCount:(id)a1 clippingNorm:(id)a2 normBinCount:(id)a3 privacyIdentifier:(id)a4;
- (id)_encryptFlattenedTrainingResults:(float *)a0 elementsCount:(long long)a1 withEncryptionKey:(id)a2 shouldEncrypt:(BOOL)a3 error:(id *)a4;
- (id)_flattenTrainingResults:(id)a0;
- (id)dataPackageFromTrainingResults:(id)a0 withEncryptionKey:(id)a1 shouldAddNoise:(BOOL)a2 shouldEncrypt:(BOOL)a3 error:(id *)a4;
- (id)initWithClippingNorm:(id)a0 normBinCount:(id)a1;

@end
