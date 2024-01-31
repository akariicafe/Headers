@class NFLazy, NSMutableDictionary, FCFeedPrewarmRequest;
@protocol FCContentContext;

@interface FCFeedPrewarmOperation : FCOperation

@property (readonly, nonatomic) FCFeedPrewarmRequest *prewarmRequest;
@property (readonly, nonatomic) id<FCContentContext> contentContext;
@property (readonly, nonatomic) NSMutableDictionary *feedIDsByCKFeedID;
@property (readonly, nonatomic) NSMutableDictionary *requestRangeByFeedID;
@property (retain, nonatomic) NFLazy *lazyResultPromise;

- (void)performOperation;
- (void).cxx_destruct;
- (id)_commitQueryResult:(id)a0;
- (void)commitResultsOnceWithCompletionHandler:(id /* block */)a0;
- (id)initWithPrewarmRequest:(id)a0 contentContext:(id)a1;

@end
