@class NSString, NSArray, NSSet, ATXHeuristicResultCache;

@interface ATXHeuristicResultCacheEntry : NSObject {
    NSString *_heuristicName;
    ATXHeuristicResultCache *_cache;
    NSArray *_actions;
    NSSet *_expirers;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithHeuristic:(id)a0 cache:(id)a1;
- (void)setActions:(id)a0 expirers:(id)a1;

@end
