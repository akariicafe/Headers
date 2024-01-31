@class NSArray;

@interface VNDetectHumanHandPoseRequest : VNImageBasedRequest

@property unsigned long long maximumHandCount;
@property (readonly, copy) NSArray *results;

+ (Class)configurationClass;
+ (BOOL)revision:(unsigned long long)a0 mayAcceptResultsProducedByRevision:(unsigned long long)a1;
+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;
+ (id)_supportedJointNamesRevision1;
+ (id)_supportedJointsGroupNamesRevision1;
+ (id)supportedJointNamesForRevision:(unsigned long long)a0 error:(id *)a1;
+ (id)supportedJointsGroupNamesForRevision:(unsigned long long)a0 error:(id *)a1;

- (unsigned long long)hash;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;
- (BOOL)isEqual:(id)a0;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setProcessedResults:(id)a0;
- (id)supportedJointNamesAndReturnError:(id *)a0;
- (id)supportedJointsGroupNamesAndReturnError:(id *)a0;

@end
