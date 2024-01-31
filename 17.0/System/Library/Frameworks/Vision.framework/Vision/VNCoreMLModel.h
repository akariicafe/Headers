@class VNOperationPoints, NSArray, MLModel, NSString, MLObjectBoundingBoxOutputDescription, VNRequestSpecifier, NSDictionary;
@protocol NSObject, MLFeatureProvider, NSCopying;

@interface VNCoreMLModel : NSObject <VNSequencedRequestSupporting> {
    NSString *_uuidStringForCacheIdentifier;
}

@property (readonly, copy, nonatomic) id<NSObject, NSCopying> cachingIdentifier;
@property (retain) MLModel *model;
@property int modelType;
@property (readonly, copy) NSArray *supportedComputeDevices;
@property (retain) NSString *inputImageKey;
@property (retain) NSString *predictedFeatureKey;
@property (readonly) NSString *predictedProbabilitiesKey;
@property (readonly) MLObjectBoundingBoxOutputDescription *boundingBoxOutputDescription;
@property (readonly) VNOperationPoints *operationPoints;
@property (readonly) unsigned long long inputImageWidth;
@property (readonly) unsigned long long inputImageHeight;
@property (readonly) unsigned int inputImageFormat;
@property (readonly) VNRequestSpecifier *scenePrintRequestSpecifier;
@property (retain) NSString *inputScenePrintKey;
@property (readonly) long long inputScenePrintMLMultiArrayDataType;
@property (readonly) VNRequestSpecifier *detectionPrintRequestSpecifier;
@property (readonly, copy) NSDictionary *detectionPrintInputDescriptions;
@property (copy, nonatomic) NSString *inputImageFeatureName;
@property (retain, nonatomic) id<MLFeatureProvider> featureProvider;

+ (id)modelForMLModel:(id)a0 error:(id *)a1;

- (BOOL)wantsSequencedRequestObservationsRecording;
- (void).cxx_destruct;
- (id)sequencedRequestPreviousObservationsKey;
- (id)predictWithCVPixelBuffer:(struct __CVBuffer { } *)a0 options:(id)a1 error:(id *)a2;

@end
