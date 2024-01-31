@class HMHome, NSMutableSet;

@interface HUTriggerItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *triggerItems;
@property (copy, nonatomic) id /* block */ filter;
@property (nonatomic) BOOL usesRichIconDescriptors;
@property (readonly, nonatomic) HMHome *home;

- (id)init;
- (id)items;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)initWithHome:(id)a0;
- (id)invalidationReasons;

@end
