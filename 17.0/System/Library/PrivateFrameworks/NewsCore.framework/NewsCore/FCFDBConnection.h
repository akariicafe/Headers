@interface FCFDBConnection : NSObject <FCFDBConnectionReadable, FCFDBConnectionWritable> {
    struct sqlite3 { } *_db;
}

- (void)beginTransaction;
- (id)initWithPath:(id)a0;
- (void)dealloc;
- (void)commitTransaction;
- (void)insertFeedItems:(id)a0 knownFeedsByID:(id)a1;
- (void)_prepareForUse;
- (void)deleteFeedItemIndexesFromFeedLookupID:(id)a0 feedRange:(id)a1;
- (void)deleteFeedItemsWithIDs:(id)a0;
- (void)incrementalVacuum;
- (void)insertFeatureIndexesForFeedItems:(id)a0 knownFeedsByID:(id)a1;
- (void)insertFeeds:(id)a0;
- (void)insertIndexesForFeedItems:(id)a0 knownFeedsByID:(id)a1;
- (id)selectAllFeedItemIDsWithFeedLookupIDs:(id)a0 feedRange:(id)a1;
- (id)selectFeedItemIDsWithFeedLookupIDs:(id)a0 feedRange:(id)a1 feature:(id)a2 maxCount:(unsigned long long)a3;
- (id)selectFeedItemsWithIDs:(id)a0;
- (id)selectFeedsWithFeedIDs:(id)a0;
- (long long)selectMaxFeedLookupID;

@end
