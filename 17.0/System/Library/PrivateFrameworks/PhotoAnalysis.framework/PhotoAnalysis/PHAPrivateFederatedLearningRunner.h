@class PGFeatureTransformersForFeatureExtractors, NSArray, NSString, NSDictionary, PHPhotoLibrary, NSNumber, PGManager;

@interface PHAPrivateFederatedLearningRunner : NSObject

@property (retain, nonatomic) NSArray *attachmentURLs;
@property (retain, nonatomic) NSArray *layersToTrain;
@property (nonatomic) unsigned long long numberOfEpochs;
@property (retain, nonatomic) NSNumber *learningRate;
@property (retain, nonatomic) NSString *modelInputName;
@property (retain, nonatomic) NSString *modelOutputName;
@property (retain, nonatomic) NSString *lossName;
@property (retain, nonatomic) NSString *optimizerName;
@property (retain, nonatomic) NSString *iCloudAggServiceKey;
@property (retain, nonatomic) NSNumber *clippingNorm;
@property (retain, nonatomic) NSNumber *normBinCount;
@property (retain, nonatomic) NSString *trainingTask;
@property (retain, nonatomic) NSString *fingerprintVersion;
@property (retain, nonatomic) NSString *datasetPolicy;
@property (retain, nonatomic) NSString *labelPolicy;
@property (retain, nonatomic) NSString *positivesDatasetName;
@property (retain, nonatomic) NSString *positivesSubsetName;
@property (retain, nonatomic) NSString *negativesDatasetName;
@property (retain, nonatomic) NSString *negativesSubsetName;
@property (retain, nonatomic) NSNumber *totalNumberOfSamples;
@property (retain, nonatomic) NSNumber *oversamplingRate;
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;
@property (retain, nonatomic) PGManager *graphManager;
@property (nonatomic) BOOL shouldAddNoise;
@property (nonatomic) BOOL shouldEncrypt;
@property (nonatomic) BOOL shouldValidateModel;
@property (nonatomic) BOOL skipInternalDeviceCheck;
@property (readonly, nonatomic) NSNumber *minProcessedRate;
@property (readonly, nonatomic) PGFeatureTransformersForFeatureExtractors *transformersForFeatureExtractors;
@property (readonly, nonatomic) NSArray *augmenters;
@property (readonly, nonatomic) NSDictionary *filtersByDatasetName;

+ (BOOL)_isInternalDevice;
+ (id)_firstAttachmentURLWithSuffixOfName:(id)a0 attachments:(id)a1 error:(id *)a2;
+ (id)_generateEncryptionKeyFromICloudAggServiceKey:(id)a0 error:(id *)a1;
+ (BOOL)_generateError:(id *)a0 errorCode:(long long)a1 message:(id)a2 underlyingError:(id)a3;
+ (id)_mediaAnalysisProgressForPhotoLibrary:(id)a0 error:(id *)a1;
+ (id)_prepareDatasetForTrainingTask:(id)a0 fingerprintVersion:(id)a1 datasetPolicy:(id)a2 labelPolicy:(id)a3 positivesDatasetName:(id)a4 positivesSubsetName:(id)a5 negativesDatasetName:(id)a6 negativesSubsetName:(id)a7 totalNumberOfSamples:(id)a8 oversamplingRate:(id)a9 photoLibrary:(id)a10 graphManager:(id)a11 modelInputName:(id)a12 labelName:(id)a13 attachments:(id)a14 transformersForFeatureExtractors:(id)a15 augmenters:(id)a16 filtersByDatasetName:(id)a17 error:(id *)a18;

- (void).cxx_destruct;
- (id)initWithAttachmentURLs:(id)a0 layersToTrain:(id)a1 numberOfEpochs:(unsigned long long)a2 learningRate:(id)a3 modelInputName:(id)a4 modelOutputName:(id)a5 lossName:(id)a6 optimizerName:(id)a7 iCloudAggServiceKey:(id)a8 clippingNorm:(id)a9 normBinCount:(id)a10 trainingTask:(id)a11 fingerprintVersion:(id)a12 datasetPolicy:(id)a13 labelPolicy:(id)a14 positivesDatasetName:(id)a15 positivesSubsetName:(id)a16 negativesDatasetName:(id)a17 negativesSubsetName:(id)a18 totalNumberOfSamples:(id)a19 oversamplingRate:(id)a20 photoLibrary:(id)a21 graphManager:(id)a22 shouldAddNoise:(BOOL)a23 shouldEncrypt:(BOOL)a24 shouldValidateModel:(BOOL)a25 skipInternalDeviceCheck:(BOOL)a26 minProcessedRate:(id)a27 transformersForFeatureExtractors:(id)a28 augmenters:(id)a29 filtersByDatasetName:(id)a30;
- (id)runWithError:(id *)a0;

@end
