@class NSArray;

@interface VNHomographicImageRegistrationRequest : VNImageRegistrationRequest

@property (readonly, copy) NSArray *results;

- (BOOL)wantsSequencedRequestObservationsRecording;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (BOOL)allowsCachingOfResults;

@end
