@class NSArray, VNTrajectoryRequestState, VNTrajectoryProcessor;

@interface VNDetectTrajectoriesRequest : VNStatefulRequest {
    VNTrajectoryProcessor *_trajectoryProcessor;
    VNTrajectoryRequestState *_state;
}

@property (readonly) long long trajectoryLength;
@property (nonatomic) float objectMinimumNormalizedRadius;
@property (nonatomic) float minimumObjectSize;
@property (nonatomic) float objectMaximumNormalizedRadius;
@property (nonatomic) float maximumObjectSize;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } targetFrameTime;
@property (readonly, copy) NSArray *results;

+ (Class)configurationClass;
+ (BOOL)setsTimeRangeOnResults;

- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (void)applyConfigurationOfRequest:(id)a0;
- (void).cxx_destruct;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (id)supportedComputeStageDevicesAndReturnError:(id *)a0;
- (id)initWithFrameAnalysisSpacing:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 trajectoryLength:(long long)a1 completionHandler:(id /* block */)a2;
- (id)newDuplicateInstance;
- (void)setobjectMaximumNormalizedRadius:(float)a0;

@end
