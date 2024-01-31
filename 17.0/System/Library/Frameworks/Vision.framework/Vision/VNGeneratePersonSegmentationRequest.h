@class NSArray;

@interface VNGeneratePersonSegmentationRequest : VNStatefulRequest {
    NSArray *_previousObservations;
    unsigned long long _previousImageWidth;
    unsigned long long _previousImageHeight;
}

@property (nonatomic) BOOL useTiling;
@property (nonatomic) float minimumConfidence;
@property (nonatomic) unsigned long long qualityLevel;
@property (nonatomic) unsigned int outputPixelFormat;
@property (readonly, copy) NSArray *results;

+ (id)new;
+ (Class)configurationClass;
+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;
+ (id)privateRevisionsSet;
+ (id)descriptionForPrivateRevision:(unsigned long long)a0;

- (id)init;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)description;
- (id)initWithCompletionHandler:(id /* block */)a0;
- (void)applyConfigurationOfRequest:(id)a0;
- (long long)dependencyProcessingOrdinality;
- (void).cxx_destruct;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;

@end
