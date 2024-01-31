@class NSArray;

@interface VNDetectAnimalBodyPoseRequest : VNImageBasedRequest

@property (readonly, copy) NSArray *results;

+ (Class)configurationClass;
+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;
+ (id)_supportedJointNamesRevision1;
+ (id)_supportedJointsGroupsNamesRevision1;

- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (id)supportedJointNamesAndReturnError:(id *)a0;
- (id)supportedJointsGroupNamesAndReturnError:(id *)a0;

@end
