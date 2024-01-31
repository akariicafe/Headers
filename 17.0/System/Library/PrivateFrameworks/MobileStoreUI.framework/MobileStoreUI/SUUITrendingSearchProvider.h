@class SUUIClientContext, NSOperationQueue, SUUITrendingSearchPage, NSMutableArray, NSOperation;

@interface SUUITrendingSearchProvider : NSObject

@property (readonly, nonatomic) NSOperationQueue *callbackQueue;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) SUUITrendingSearchPage *cachedSearchPage;
@property (readonly, nonatomic) NSMutableArray *pendingCompletionBlocks;
@property (retain, nonatomic) NSOperation *runningRequestOperation;
@property (readonly, weak, nonatomic) SUUIClientContext *clientContext;

- (void)clearCache;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithClientContext:(id)a0;
- (id)requestOperationWithPageURL:(id)a0 completionBlock:(id /* block */)a1;
- (void)requestTrendingSearchPageWithURL:(id)a0;
- (void)trendingSearchPageWithURL:(id)a0 completionBlock:(id /* block */)a1;

@end
