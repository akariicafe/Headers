@class FCOnce, FCCloudContext, NSString, NTPBFeedItemInventory, FCAsyncSerialQueue, NSArray;

@interface FCESLInventory : NSObject <FCESLInventoryType>

@property (readonly, nonatomic) FCCloudContext *context;
@property (readonly, nonatomic) NSString *cacheDataPath;
@property (readonly, nonatomic) FCOnce *loadFromCacheOnce;
@property (retain) NTPBFeedItemInventory *latestInventory;
@property (readonly, nonatomic) FCAsyncSerialQueue *feedItemsRefreshSerialQueue;
@property (readonly, nonatomic) NSArray *allFeedItems;

- (id)init;
- (void).cxx_destruct;
- (id)_refreshIfNeeded;
- (id)initWithContext:(id)a0 cacheDirectory:(id)a1;
- (BOOL)_isRefreshNeeded;
- (id)_loadInventoryFromCache;
- (void)_prepareForUse;
- (id)_promiseConfiguration;
- (id)_promiseEvergreenFeedItemsWithConfiguration:(id)a0;
- (id)_promiseFeedItemsWithIssues:(id)a0 configuration:(id)a1;
- (id)_promiseIssueFeedItemsWithConfiguration:(id)a0;
- (id)_promiseIssuesWithConfiguration:(id)a0;
- (id)allFeedItemScoreProfilesForConfigurationSet:(long long)a0;
- (id)allFeedItemsWithTopic:(id)a0;
- (void)populateScoreProfilesForFeedItems:(id)a0;
- (void)populateScoreProfilesForFeedItems:(id)a0 configurationSet:(long long)a1;

@end
