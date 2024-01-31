@class NSArray, VNImageBuffer, VNOpticalFlowObservation, VNImageSignature;

@interface VNTrackOpticalFlowRequest : VNStatefulRequest {
    unsigned long long _previousRequestRevision;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _previousRegionOfInterest;
    VNImageBuffer *_previousImageBuffer;
    VNImageSignature *_previousImageSignature;
    VNOpticalFlowObservation *_previousObservation;
    BOOL _previousPortraitMode;
}

@property (nonatomic) unsigned long long computationAccuracy;
@property (nonatomic) unsigned int outputPixelFormat;
@property (nonatomic) BOOL keepNetworkOutput;
@property (readonly, copy) NSArray *results;

+ (Class)configurationClass;
+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;

- (id)init;
- (BOOL)warmUpSession:(id)a0 error:(id *)a1;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)initWithCompletionHandler:(id /* block */)a0;
- (void)applyConfigurationOfRequest:(id)a0;
- (void).cxx_destruct;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (id)_createGeneratorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1 images:(id)a2 portraitMode:(BOOL)a3 previousTargetImageIsCurrentRefImage:(BOOL)a4 previousObservation:(id)a5;
- (id)_observationForOpticalFlowOfReferenceImageBuffer:(id)a0 targetImageBuffer:(id)a1 portraitMode:(BOOL)a2 previousObservation:(id)a3 previousTargetImageIsCurrentRefImage:(BOOL)a4 requestRevision:(unsigned long long)a5 requestPerformingContext:(id)a6 error:(id *)a7;
- (BOOL)allowsCachingOfResults;

@end
