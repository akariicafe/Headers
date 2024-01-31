@class HMAccessoryProfile, NSString, NSSet, HMAccessory, HMHome;
@protocol HFAccessoryRepresentable, HFHomeKitObject, HFCharacteristicValueSource;

@interface HFAccessoryProfileItem : HFItem <HFAccessoryRepresentableItem, HFAccessoryProfileVendor, HFHomeKitItemProtocol, HFItemBuilderItem, HFServiceLikeBuilderCreating, HFServiceLikeItem>

@property (readonly, nonatomic) id<HFAccessoryRepresentable> accessoryRepresentableObject;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HMAccessory *accessory;
@property (readonly, nonatomic) HMAccessoryProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSSet *services;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly, nonatomic) id<HFCharacteristicValueSource> valueSource;
@property (readonly, nonatomic) HMHome *home;

+ (id)itemWithAccessoryRepresentableObject:(id)a0 valueSource:(id)a1;

- (id)profiles;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithValueSource:(id)a0;
- (id)accessories;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)namingComponentForHomeKitObject;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithProfile:(id)a0 valueSource:(id)a1;
- (id)serviceLikeBuilderInHome:(id)a0;

@end
