@class NSString, NSMutableDictionary, FCFDBPruningPolicy, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, FCFDBConnectionReadable, FCFDBConnectionWritable;

@interface FCFDBStorage : NSObject

@property (readonly, nonatomic) long long options;
@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, nonatomic) FCFDBPruningPolicy *pruningPolicy;
@property (readonly, nonatomic) id<FCFDBConnectionReadable> readDBConnection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (readonly, nonatomic) NSMutableDictionary *cachedFeeds;
@property (readonly, nonatomic) NSMutableDictionary *cachedFeedItemOrders;
@property (readonly, nonatomic) NSMutableDictionary *cachedFeedItems;
@property (nonatomic) long long lastFeedLookupID;
@property (readonly, nonatomic) NSMutableSet *modifiedFeedItemIDs;
@property (readonly, nonatomic) NSMutableSet *modifiedFeedIDs;
@property (readonly, nonatomic) NSMutableSet *prunedFeedIDs;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *saveQueue;
@property (retain, nonatomic) id<FCFDBConnectionWritable> writeDBConnection;

- (void).cxx_destruct;
- (long long)_feedLookupIDForFeedID:(id)a0;
- (id)_pruneFeedsIfNeeded:(id)a0;
- (void)accessWithBlock:(id /* block */)a0;
- (id)feedForFeedID:(id)a0;
- (id)feedItemsForFeedIDs:(id)a0 feedRange:(id)a1 feature:(id)a2 maxCount:(unsigned long long)a3;
- (id)feedsForFeedIDs:(id)a0;
- (void)flushChanges;
- (id)initTransientWithOptions:(long long)a0;
- (id)initWithFileURL:(id)a0 options:(long long)a1;
- (id)initWithFileURL:(id)a0 options:(long long)a1 pruningPolicy:(id)a2;
- (id)initWithPath:(id)a0 options:(long long)a1 pruningPolicy:(id)a2;
- (void)insertFeedItems:(id)a0;
- (void)updateFeedID:(id)a0 refreshedFromOrder:(unsigned long long)a1 refreshedToOrder:(unsigned long long)a2 fetchedRange:(id)a3;

@end
