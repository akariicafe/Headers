@class NSSet;

@interface HFAirQualitySensorStatusItem : HFStatusItem <HFServiceLikeStatusItem>

@property (class, readonly, nonatomic) NSSet *serviceTypes;

- (id)_subclass_updateWithOptions:(id)a0;
- (BOOL)canRepresentAbnormalAndNormalHomeKitObjectsTogether;
- (id)defaultTitleForRepresentedHomeKitObjects:(id)a0;
- (id)iconDescriptorForRepresentedHomeKitObjects:(id)a0;

@end
