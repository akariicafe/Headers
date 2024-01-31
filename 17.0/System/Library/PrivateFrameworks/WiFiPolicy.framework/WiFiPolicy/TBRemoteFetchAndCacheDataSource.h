@class TBDataSource;
@protocol TBCacheProvider;

@interface TBRemoteFetchAndCacheDataSource : NSObject

@property (retain, nonatomic) TBDataSource *fetchDataSource;
@property (retain, nonatomic) id<TBCacheProvider> cacheProvider;

- (id)initWithFetchDataSource:(id)a0 cacheProvider:(id)a1;
- (void).cxx_destruct;

@end
