@class HMHome, HMPersonManager, NSMutableSet;

@interface HFPersonItemProvider : HFItemProvider

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) HMPersonManager *personManager;
@property (retain, nonatomic) NSMutableSet *personItems;
@property (copy, nonatomic) id /* block */ filter;

- (id)items;
- (void).cxx_destruct;
- (id)reloadItems;
- (id)invalidationReasons;
- (id)initWithHome:(id)a0 personManager:(id)a1;

@end
