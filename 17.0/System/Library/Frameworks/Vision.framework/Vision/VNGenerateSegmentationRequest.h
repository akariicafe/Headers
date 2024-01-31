@class NSArray;

@interface VNGenerateSegmentationRequest : VNImageBasedRequest

@property (nonatomic) unsigned int outputPixelFormat;
@property (readonly, copy) NSArray *results;

+ (Class)configurationClass;

- (id)description;
- (void)applyConfigurationOfRequest:(id)a0;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (id)configuredCopyOfSelfWithBalancedQualityLevel;
- (id)performAccurateSegmentationInContext:(id)a0 options:(id)a1 error:(id *)a2;

@end
