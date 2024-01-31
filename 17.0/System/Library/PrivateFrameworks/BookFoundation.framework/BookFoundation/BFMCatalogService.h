@class NSArray, NSDictionary, NSError;

@interface BFMCatalogService : NSObject {
    void /* unknown type, empty encoding */ config;
}

- (void)fetchMixedAssetsWithBookIds:(NSArray *)a0 audiobookIds:(NSArray *)a1 relationships:(NSArray *)a2 views:(NSArray *)a3 additionalParameters:(NSDictionary *)a4 batchSize:(long long)a5 completionHandler:(void (^)(NSDictionary *, NSError *))a6;
- (void)fetchMixedSeriesWithBookSeriesIds:(NSArray *)a0 audiobookSeriesIds:(NSArray *)a1 relationships:(NSArray *)a2 views:(NSArray *)a3 additionalParameters:(NSDictionary *)a4 batchSize:(long long)a5 completionHandler:(void (^)(NSDictionary *, NSError *))a6;
- (void)fetchResourcesWithAdamIDs:(NSArray *)a0 relationships:(NSArray *)a1 views:(NSArray *)a2 additionalParameters:(NSDictionary *)a3 batchSize:(long long)a4 completionHandler:(void (^)(NSDictionary *, NSError *))a5;
- (id)init;
- (id)initWithConfig:(id)a0;
- (void).cxx_destruct;

@end
