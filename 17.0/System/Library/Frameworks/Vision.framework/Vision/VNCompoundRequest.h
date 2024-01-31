@class NSArray, NSNumber;

@interface VNCompoundRequest : VNRequest {
    NSNumber *_cachedDependencyProcessingOrdinality;
}

@property (readonly, copy, nonatomic) NSArray *originalRequests;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } regionOfInterest;

+ (id)compoundRequestsForOriginalRequests:(id)a0 withPerformingContext:(id)a1 error:(id *)a2;
+ (id)computeStageDeviceAssignmentsForOriginalRequests:(id)a0;
+ (BOOL)supportedRevisionsAreFilteredBasedOnAvailableComputeDevices;

- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (BOOL)resultsAreAssignedWithOriginatingRequestSpecifier;
- (id)description;
- (BOOL)usesCPUOnly;
- (long long)dependencyProcessingOrdinality;
- (void).cxx_destruct;
- (id)sequencedRequestPreviousObservationsKey;
- (id)compoundResults;
- (BOOL)allowsCachingOfResults;
- (id)initWithOriginalRequests:(id)a0;
- (unsigned long long)ioSurfaceMemoryPoolId;
- (void)recordWarningsInOriginalRequests;

@end
