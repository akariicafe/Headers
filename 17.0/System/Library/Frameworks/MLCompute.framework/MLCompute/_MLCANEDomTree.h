@class NSDictionary;

@interface _MLCANEDomTree : NSObject

@property (readonly, retain, nonatomic) NSDictionary *dominationTree;

+ (id)computeDominationForGraph:(id)a0;
+ (id)computeDominationForGraphImpl:(id)a0;
+ (void)computeDominationForLayer:(id)a0 dominationTree:(id)a1;

- (void).cxx_destruct;
- (BOOL)doesSubgraph:(id)a0 dominatesSubgraph:(id)a1;
- (BOOL)doesLayer:(id)a0 dominates:(id)a1;
- (BOOL)doesLayer:(id)a0 dominatesSubgraph:(id)a1;
- (BOOL)doesSubgraph:(id)a0 dominatesLayer:(id)a1;
- (id)getDominanceFrontierForSubgraph:(id)a0;
- (id)getPostDominanceFrontierForSubgraph:(id)a0;
- (id)initDomTree:(id)a0;

@end
