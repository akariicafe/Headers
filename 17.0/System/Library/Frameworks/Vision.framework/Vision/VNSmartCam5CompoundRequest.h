@class VNSmartCam5CompoundRequestGroupingConfiguration;

@interface VNSmartCam5CompoundRequest : VNCompoundRequest {
    VNSmartCam5CompoundRequestGroupingConfiguration *_groupingConfiguration;
}

+ (id)compoundRequestsForOriginalRequests:(id)a0 withPerformingContext:(id)a1 error:(id *)a2;

- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;

@end
