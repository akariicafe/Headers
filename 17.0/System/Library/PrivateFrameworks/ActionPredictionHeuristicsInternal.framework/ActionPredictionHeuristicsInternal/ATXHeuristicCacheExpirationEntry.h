@class NSString, ATXHeuristicResultCache;

@interface ATXHeuristicCacheExpirationEntry : NSObject

@property (retain, nonatomic) NSString *heuristicName;
@property (weak, nonatomic) ATXHeuristicResultCache *cache;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithHeuristic:(id)a0 cache:(id)a1;
- (BOOL)isEqual:(id)a0;

@end
