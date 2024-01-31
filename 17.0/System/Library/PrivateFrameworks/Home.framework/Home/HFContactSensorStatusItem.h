@class NSSet;

@interface HFContactSensorStatusItem : HFStatusItem <HFServiceLikeStatusItem>

@property (class, readonly, nonatomic) NSSet *serviceTypes;

- (id)_subclass_updateWithOptions:(id)a0;
- (id)defaultTitleForRepresentedHomeKitObjects:(id)a0;
- (id)iconDescriptorForRepresentedHomeKitObjects:(id)a0;

@end
