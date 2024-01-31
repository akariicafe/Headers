@class NSArray, NSMutableDictionary, NSOrderedSet, FCMTWriterLock;

@interface FCAudioPlaylist : FCPrivateDataController <FCAudioPlaylistType> {
    NSMutableDictionary *_itemsByID;
    NSOrderedSet *_orderedArticleIDs;
    FCMTWriterLock *_itemsLock;
}

@property (readonly, nonatomic) NSArray *articleIDs;

+ (id)desiredKeys;
+ (void)populateLocalStoreClassRegistry:(id)a0;
+ (unsigned long long)localStoreVersion;
+ (BOOL)requiresPushNotificationSupport;
+ (id)backingRecordZoneIDs;
+ (long long)commandQueueUrgency;
+ (id)commandsToMergeLocalDataToCloud:(id)a0 privateDataDirectory:(id)a1;
+ (id)backingRecordIDs;
+ (id)commandStoreFileName;
+ (id)localStoreFilename;
+ (BOOL)requiresHighPriorityFirstSync;
+ (BOOL)requiresBatchedSync;

- (void)ensureSyncedWithCompletion:(id /* block */)a0;
- (void)removeObserver:(id)a0;
- (void)loadLocalCachesFromStore;
- (BOOL)canHelpRestoreZoneName:(id)a0;
- (BOOL)containsArticleID:(id)a0;
- (id)localStoreMigrator;
- (id)recordsForRestoringZoneName:(id)a0;
- (void)removeArticleID:(id)a0;
- (void)save;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (void).cxx_destruct;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (void)insertArticleID:(id)a0 atIndex:(unsigned long long)a1;
- (void)addObserver:(id)a0;
- (id)dateAddedForArticleID:(id)a0;

@end
