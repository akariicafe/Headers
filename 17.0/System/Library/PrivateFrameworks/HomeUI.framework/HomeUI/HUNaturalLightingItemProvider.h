@class HMHome, NSMutableSet, NSNumber;

@interface HUNaturalLightingItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *naturalLightingItems;
@property (readonly, nonatomic) HMHome *home;
@property (copy, nonatomic) id /* block */ lightProfileFilter;
@property (copy, nonatomic) id /* block */ homeKitObjectFilter;
@property (retain, nonatomic) NSNumber *defaultSelectedValue;

- (id)items;
- (void).cxx_destruct;
- (id)reloadItems;
- (id)initWithHome:(id)a0;
- (id)invalidationReasons;
- (id)sourceItemForHomeKitObject:(id)a0;

@end
