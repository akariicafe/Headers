@class NSArray, VNImageBuffer, VNImageRegistrationSignature;

@interface VNTrackHomographicImageRegistrationRequest : VNStatefulRequest {
    unsigned long long _previousRequestRevision;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _previousRegionOfInterest;
    VNImageBuffer *_previousImageBuffer;
    VNImageRegistrationSignature *_previousImageRegistrationSignature;
}

@property (readonly, copy) NSArray *results;

+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;

- (id)init;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)initWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (BOOL)allowsCachingOfResults;

@end
