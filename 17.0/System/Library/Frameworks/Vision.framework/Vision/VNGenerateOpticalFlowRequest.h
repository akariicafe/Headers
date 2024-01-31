@class NSArray;

@interface VNGenerateOpticalFlowRequest : VNTargetedImageRequest

@property (nonatomic) unsigned long long computationAccuracy;
@property (nonatomic) unsigned int outputPixelFormat;
@property (nonatomic) BOOL keepNetworkOutput;
@property (readonly, copy) NSArray *results;

+ (Class)configurationClass;
+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;

- (BOOL)wantsSequencedRequestObservationsRecording;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (void)applyConfigurationOfRequest:(id)a0;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (id)_createGeneratorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1 images:(id)a2 previousTargetImageIsCurrentRefImage:(BOOL)a3 previousObservation:(id)a4;
- (BOOL)_internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 previousObservation:(id)a2 error:(id *)a3;
- (BOOL)allowsCachingOfResults;

@end
