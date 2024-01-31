@class NSSet, HFTriggerNaturalLanguageOptions, NSMutableSet, HFEventTriggerBuilder, HMHome;

@interface HFEventBuilderItemProvider : HFItemProvider

@property (retain, nonatomic) NSSet *lastUpdateEventBuilders;
@property (retain, nonatomic) NSSet *lastUpdateEventGroups;
@property (retain, nonatomic) HFTriggerNaturalLanguageOptions *naturalLanguageOptions;
@property (retain, nonatomic) NSMutableSet *eventBuilderItems;
@property (retain, nonatomic) NSSet *eventBuilders;
@property (readonly, nonatomic) HFEventTriggerBuilder *triggerBuilder;
@property (readonly, nonatomic) HMHome *home;
@property (nonatomic) unsigned long long nameType;

- (id)items;
- (void).cxx_destruct;
- (id)_reloadItems;
- (id)reloadItems;
- (id)initWithTriggerBuilder:(id)a0;
- (id)eventBuilderGroupsForEventBuilders:(id)a0;
- (id)initWithEventBuilders:(id)a0 inHome:(id)a1;
- (id)reloadBuilderGroups;

@end
