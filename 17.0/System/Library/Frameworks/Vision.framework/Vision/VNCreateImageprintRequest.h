@class NSNumber, NSArray;

@interface VNCreateImageprintRequest : VNImageBasedRequest

@property (retain, nonatomic) NSNumber *timeStamp;
@property (readonly, copy) NSArray *results;

+ (Class)configurationClass;

- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (void)applyConfigurationOfRequest:(id)a0;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;

@end
