@class NSSet, NSDictionary, NSString, HMService, HMHome;
@protocol HFAccessoryRepresentable, HFHomeKitObject, HFCharacteristicValueSource;

@interface HFServiceItem : HFItem <HFAccessoryRepresentableItem, HFServiceLikeItem, HFActionBuilderFactory, HFServiceLikeBuilderCreating, HFNamingComponentCreating>

@property (class, readonly, nonatomic) NSDictionary *_serviceTypeToServiceItemClassMap;
@property (class, readonly) NSSet *supportedServiceTypes;

@property (readonly, nonatomic) id<HFAccessoryRepresentable> accessoryRepresentableObject;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<HFCharacteristicValueSource> valueSource;
@property (readonly, nonatomic) HMService *service;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSSet *services;

+ (Class)itemClassForService:(id)a0;
+ (id)itemWithAccessoryRepresentableObject:(id)a0 valueSource:(id)a1;
+ (id)serviceItemForService:(id)a0 valueSource:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithValueSource:(id)a0;
- (id)accessories;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_descriptionBuilder;
- (id)namingComponentForHomeKitObject;
- (BOOL)containsActions;
- (id)_subclass_updateWithOptions:(id)a0;
- (BOOL)actionsMayRequireDeviceUnlock;
- (id)currentStateActionBuildersForHome:(id)a0;
- (id)initWithValueSource:(id)a0 service:(id)a1;
- (id)serviceLikeBuilderInHome:(id)a0;
- (id)incrementalStateIconDescriptorForPrimaryState:(long long)a0 incrementalValue:(id)a1;
- (id)_actionableCharacteristics;
- (id)_allRepresentedServices;
- (id)_augmentedStandardResultsForUpdateResponse:(id)a0 controlItems:(id)a1;
- (id)_siriEndPointProfiles;
- (void)applyInflectionToDescriptions:(id)a0;
- (id)characteristicsToReadForCharacteristicTypes:(id)a0 controlItems:(id)a1;
- (id)characteristicsToReadWithCharacteristicTypes:(id)a0 options:(id)a1 controlItems:(id *)a2;
- (id)controlDescriptionForCharacteristic:(id)a0 withValue:(id)a1;
- (id)controlItemValueSourceForPrimaryService;
- (id)controlItemValueSourceForServices:(id)a0;
- (id)createControlItemsWithOptions:(id)a0;
- (id)descriptionForCharacteristic:(id)a0 withValue:(id)a1;
- (id)performStandardUpdateWithCharacteristicTypes:(id)a0 options:(id)a1;
- (id)servicesToReadForCharacteristicType:(id)a0;

@end
