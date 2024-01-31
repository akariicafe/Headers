@class HMServiceGroup, NSString, NSSet, HMHome;
@protocol HFAccessoryRepresentable, HFHomeKitObject, HFCharacteristicValueSource;

@interface HFServiceGroupItem : HFItem <HFAccessoryRepresentableItem, HFServiceLikeItem, HFActionBuilderFactory, HFServiceLikeBuilderCreating, HFGroupableItemProtocol>

@property (readonly, nonatomic) id<HFAccessoryRepresentable> accessoryRepresentableObject;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<HFCharacteristicValueSource> valueSource;
@property (readonly, nonatomic) HMServiceGroup *serviceGroup;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSSet *services;
@property (readonly, nonatomic) BOOL isItemGroup;
@property (readonly, nonatomic) BOOL isContainedWithinItemGroup;
@property (readonly, nonatomic) unsigned long long numberOfItemsContainedWithinGroup;

+ (id)itemWithAccessoryRepresentableObject:(id)a0 valueSource:(id)a1;
+ (id)_combinedWriteErrorForError:(id)a0 serviceGroupTitle:(id)a1;
+ (BOOL)_isControlItem:(id)a0 identicalToControlItem:(id)a1;
+ (BOOL)_isControlItem:(id)a0 similarToControlItem:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithValueSource:(id)a0;
- (id)accessories;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)allControlItems;
- (id)namingComponentForHomeKitObject;
- (BOOL)containsActions;
- (id)_subclass_updateWithOptions:(id)a0;
- (BOOL)actionsMayRequireDeviceUnlock;
- (id)currentStateActionBuildersForHome:(id)a0;
- (id)initWithValueSource:(id)a0 serviceGroup:(id)a1;
- (id)primaryStateControlItem;
- (id)serviceLikeBuilderInHome:(id)a0;
- (id)_sortDescriptorsForServiceItems;
- (id)_aggregatedValueSource;
- (double)_averageNumericalValueForResultsKey:(id)a0 inServiceItems:(id)a1;
- (id)_buildControlItemsForServiceItems:(id)a0;
- (id)_buildServiceItems;
- (long long)_highestIntegerValueForResultsKey:(id)a0 inServiceItems:(id)a1;
- (id)_mergedIconDescriptorForServiceItems:(id)a0;
- (id)_mostCommonValueForResultsKey:(id)a0 inServiceItems:(id)a1;
- (id)_mostCommonValueInServiceItems:(id)a0 valueProvider:(id /* block */)a1;
- (id)_unanimousValueForResultsKey:(id)a0 inServiceItems:(id)a1;
- (id)controlPanelItems;
- (id)incrementalStateControlItem;

@end
