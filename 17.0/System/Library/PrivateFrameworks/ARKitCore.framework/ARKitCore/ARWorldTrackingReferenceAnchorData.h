@class NSSet, NSString;

@interface ARWorldTrackingReferenceAnchorData : NSObject <ARResultData, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double timestamp;
@property (readonly, nonatomic) NSSet *updatedAnchors;
@property (readonly, nonatomic) NSSet *addedAnchors;
@property (readonly, nonatomic) NSSet *removedAnchors;
@property (readonly, nonatomic) NSSet *externalAnchors;
@property (copy, nonatomic) NSSet *receivedAnchors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)anchorsForCameraWithTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 referenceOriginTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 existingAnchors:(id)a2 anchorsToRemove:(id)a3;
- (id)externalAnchorsWithReferenceOriginTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 existingAnchors:(id)a1;
- (id)initWithUpdatedAnchors:(id)a0 addedAnchors:(id)a1 removedAnchors:(id)a2 externalAnchors:(id)a3;

@end
