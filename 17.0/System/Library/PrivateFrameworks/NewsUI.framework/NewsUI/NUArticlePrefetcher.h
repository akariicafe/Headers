@class FCKeyedOperationQueue, NSMutableDictionary, NSCountedSet, NSMutableSet, NSTimer, NSObject, NSString;
@protocol NUArticleDataProviderFactory, OS_dispatch_queue, NUArticleFactory;

@interface NUArticlePrefetcher : NSObject <FCKeyedOperationQueueDelegate, NUArticlePrefetcherType>

@property (retain, nonatomic) id<NUArticleFactory> articleFactory;
@property (retain, nonatomic) id<NUArticleDataProviderFactory> articleDataProviderFactory;
@property (retain, nonatomic) FCKeyedOperationQueue *prefetchQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSMutableDictionary *articleDataProviderCache;
@property (retain, nonatomic) NSMutableSet *failedArticleIDs;
@property (retain, nonatomic) NSCountedSet *interestedArticleIDs;
@property (retain, nonatomic) NSMutableDictionary *headlinesForArticles;
@property (retain, nonatomic) NSMutableDictionary *interestModificationDates;
@property (nonatomic) unsigned long long highWaterMark;
@property (retain, nonatomic) NSTimer *reprocessTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)prefetchedArticleDataProviderForArticleID:(id)a0;
- (void)addPrefetchInterestInArticleID:(id)a0 headline:(id)a1;
- (void)_reprocessInterestedArticleIDs;
- (void)_didChangeInterestedArticleIDs;
- (void)_revisitSuspendedState;
- (void)_flushDataProviderIfNeededForHeadline:(id)a0;
- (id)keyedOperationQueue:(id)a0 performAsyncOperationForKey:(id)a1 completion:(id /* block */)a2;
- (id)initWithArticleFactory:(id)a0 articleDataProviderFactory:(id)a1;
- (void).cxx_destruct;
- (void)_flushUnusedDataProvidersIfNeeded;
- (void)removePrefetchInterestInArticleID:(id)a0;

@end
