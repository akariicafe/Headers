@class NSNumber;

@interface VNTrackLegacyFaceCoreObjectRequest : VNTrackObjectRequest

@property (retain, nonatomic) NSNumber *faceCoreMinFaceSize;
@property (retain, nonatomic) NSNumber *faceCoreNumberOfDetectionAngles;
@property (nonatomic) BOOL faceCoreEnhanceEyesAndMouthLocalization;
@property (nonatomic) BOOL faceCoreExtractBlink;
@property (nonatomic) BOOL faceCoreExtractSmile;
@property (nonatomic) float faceCoreKalmanFilter;

+ (id)privateRevisionsSet;
+ (unsigned long long)defaultRevision;
+ (id)publicRevisionsSet;
+ (unsigned int)frameCVPixelBufferFormatForRequestRevision:(unsigned long long)a0;
+ (id)trackerTypeForRequestRevision:(unsigned long long)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)initWithDetectedObjectObservation:(id)a0;
- (void)populateDetectorProcessingOptions:(id)a0 session:(id)a1;

@end
