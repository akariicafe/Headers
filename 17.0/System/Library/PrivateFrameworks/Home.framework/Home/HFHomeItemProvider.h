@class HMHomeManager, NSMutableSet;

@interface HFHomeItemProvider : HFItemProvider

@property (retain, nonatomic) HMHomeManager *homeManager;
@property (retain, nonatomic) NSMutableSet *homeItems;
@property (copy, nonatomic) id /* block */ filter;

- (id)items;
- (id)initWithHomeManager:(id)a0;
- (void).cxx_destruct;
- (id)reloadItems;
- (id)invalidationReasons;

@end
