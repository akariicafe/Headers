@class VNDetectedObjectObservation;

@interface VNTrackingRequest : VNImageBasedRequest

@property (retain, nonatomic) VNDetectedObjectObservation *inputObservation;
@property (nonatomic) unsigned long long trackingLevel;
@property (nonatomic, getter=isLastFrame) BOOL lastFrame;

+ (unsigned int)frameCVPixelBufferFormatForRequestRevision:(unsigned long long)a0;
+ (id)trackerTypeForRequestRevision:(unsigned long long)a0 error:(id *)a1;

- (BOOL)warmUpSession:(id)a0 error:(id *)a1;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (void)applyConfigurationOfRequest:(id)a0;
- (void).cxx_destruct;
- (id)sequencedRequestPreviousObservationsKey;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (id)initWithDetectedObjectObservation:(id)a0;
- (id)supportedComputeStageDevicesAndReturnError:(id *)a0;
- (id)_resetTrackerIfNeeded:(id)a0 session:(id)a1 options:(id)a2 error:(id *)a3;
- (id)_trackingLevelOptionFromTrackingLevelEnum;
- (BOOL)allowsCachingOfResults;
- (id)applicableTrackerAndOptions:(id *)a0 forRevision:(unsigned long long)a1 loadedInSession:(id)a2 error:(id *)a3;
- (id)initWithDetectedObjectObservation:(id)a0 completionHandler:(id /* block */)a1;
- (id)newDuplicateInstance;
- (void)populateDetectorProcessingOptions:(id)a0 session:(id)a1;
- (unsigned long long)supportedNumberOfTrackersAndReturnError:(id *)a0;

@end
