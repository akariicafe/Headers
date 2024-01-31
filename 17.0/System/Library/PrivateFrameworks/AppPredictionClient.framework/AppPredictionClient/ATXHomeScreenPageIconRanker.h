@class ATXHomeScreenConfigCache;

@interface ATXHomeScreenPageIconRanker : NSObject {
    ATXHomeScreenConfigCache *_cache;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithCache:(id)a0;
- (id)_pageForPageIndex:(unsigned long long)a0;
- (id)iconIndexesInAscendingOrderOfHistoricalUsageForPageIndex:(unsigned long long)a0;

@end
