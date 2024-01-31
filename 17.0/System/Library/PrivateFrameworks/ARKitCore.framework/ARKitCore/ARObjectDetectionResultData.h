@class NSArray, NSString, NSDictionary;

@interface ARObjectDetectionResultData : NSObject <ARResultData, ARQATraceable>

@property (nonatomic) double timestamp;
@property (copy, nonatomic) NSArray *detectedObjects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *tracingEntry;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)anchorsForCameraWithTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 referenceOriginTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 existingAnchors:(id)a2 anchorsToRemove:(id)a3;

@end
