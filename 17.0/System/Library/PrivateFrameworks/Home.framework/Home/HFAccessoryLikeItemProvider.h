@class HMHome, NSMutableSet, NSArray;
@protocol HFAccessoryLikeObjectContainer, HFCharacteristicValueSource, HFAccessoryRepresentableObjectFiltering;

@interface HFAccessoryLikeItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *accessoryLikeItems;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) id<HFAccessoryLikeObjectContainer> accessoryContainer;
@property (retain, nonatomic) id<HFAccessoryRepresentableObjectFiltering> accessoryContainerFilter;
@property (copy, nonatomic) id /* block */ filterBlock;
@property (nonatomic) unsigned long long objectLevel;
@property (retain, nonatomic) NSArray *accessoryTypeGroups;
@property (retain, nonatomic) id<HFCharacteristicValueSource> valueSource;

- (id)items;
- (void).cxx_destruct;
- (id)reloadItems;
- (id)initWithHome:(id)a0;
- (id)buildItemForAccessoryRepresentable:(id)a0;
- (id)initWithAccessoryContainer:(id)a0 inHome:(id)a1;
- (id)invalidationReasons;
- (id)initWithRoom:(id)a0;

@end
