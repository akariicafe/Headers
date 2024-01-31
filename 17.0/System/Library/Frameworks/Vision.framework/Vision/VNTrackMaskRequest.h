@class NSArray, VNTrackMaskDetectorState;

@interface VNTrackMaskRequest : VNStatefulRequest {
    VNTrackMaskDetectorState *_state;
}

@property (nonatomic) BOOL generateCropRect;
@property (readonly, copy) NSArray *results;

+ (Class)configurationClass;
+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;

- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (void)applyConfigurationOfRequest:(id)a0;
- (void).cxx_destruct;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (id)initWithFrameUpdateSpacing:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 mask:(struct __CVBuffer { } *)a1 completionHandler:(id /* block */)a2;

@end
