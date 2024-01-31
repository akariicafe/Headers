@class NSString, NSMutableSet, HFAccessoryProfileFilterOptions, HMHome;

@interface HFAccessoryProfileItemProvider : HFItemProvider <HFAccessoryProfileFiltering>

@property (retain, nonatomic) NSMutableSet *profileItems;
@property (readonly, nonatomic) HMHome *home;
@property (retain, nonatomic) HFAccessoryProfileFilterOptions *filterOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)items;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)initWithHome:(id)a0;
- (id)invalidationReasons;
- (id)_profileItemForProfile:(id)a0;
- (id)_supportedProfileClasses;

@end
