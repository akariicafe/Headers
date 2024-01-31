@class NSArray;

@interface VNIdentifyJunkRequest : VNImageBasedRequest

@property (readonly, copy) NSArray *results;

- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;

@end
