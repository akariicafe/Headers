@class NSString, HFAccessoryProfileGroupOptions, NSMutableSet, HFAccessoryProfileFilterOptions, HMHome;

@interface HFAccessoryProfileGroupItemProvider : HFItemProvider <HFAccessoryProfileFiltering, HFAccessoryProfileGrouping>

@property (retain, nonatomic) NSMutableSet *profileGroupItems;
@property (readonly, nonatomic) HMHome *home;
@property (retain, nonatomic) HFAccessoryProfileFilterOptions *filterOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HFAccessoryProfileGroupOptions *groupOptions;

- (id)init;
- (id)items;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)initWithHome:(id)a0;
- (id)invalidationReasons;
- (id)_profileGroupItemForProfiles:(id)a0 groupIdentifier:(id)a1;
- (id)_supportedProfileClasses;

@end
