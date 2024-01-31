@interface VNClassifyPotentialLandmarkRequest : VNImageBasedRequest

@property unsigned long long imageCropAndScaleOption;

+ (Class)configurationClass;
+ (BOOL)revision:(unsigned long long)a0 mayAcceptResultsProducedByRevision:(unsigned long long)a1;
+ (id)descriptionForPrivateRevision:(unsigned long long)a0;
+ (id)knownClassificationsForRevision:(unsigned long long)a0 error:(id *)a1;

- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (id)supportedIdentifiersAndReturnError:(id *)a0;

@end
