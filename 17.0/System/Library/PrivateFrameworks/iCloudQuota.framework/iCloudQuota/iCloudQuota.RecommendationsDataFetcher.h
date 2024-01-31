@class _TtC11iCloudQuota26RecommendationsDataFetcher;

@interface iCloudQuota.RecommendationsDataFetcher : NSObject {
    void /* unknown type, empty encoding */ dataFetchers;
}

@property (class, nonatomic, readonly) _TtC11iCloudQuota26RecommendationsDataFetcher *shared;

- (id)init;
- (void).cxx_destruct;
- (void)fetchClientRecommendationsFor:(id)a0 shouldIgnoreCache:(BOOL)a1 completion:(id /* block */)a2;
- (void)fetchCompletedRecommendationsFor:(id)a0 shouldIgnoreCache:(BOOL)a1 completion:(id /* block */)a2;
- (void)fetchRulesetsFor:(id)a0 shouldIgnoreCache:(BOOL)a1 completion:(id /* block */)a2;
- (void)fetchServerRecommendationsFor:(id)a0 shouldIgnoreCache:(BOOL)a1 completion:(id /* block */)a2;
- (void)refreshCacheFor:(id)a0;
- (void)refreshCacheFor:(id)a0 completion:(id /* block */)a1;

@end
