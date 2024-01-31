@class FCCloudContext, NSMutableDictionary, FCMTWriterLock;

@interface FCReadingList : FCPrivateDataController {
    NSMutableDictionary *_entriesByArticleID;
    FCCloudContext *_cloudContext;
    FCMTWriterLock *_itemsLock;
}

+ (id)desiredKeys;
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

- (void)removeObserver:(id)a0;
- (id)allNonConsumedArticleIDsIntersectingSet:(id)a0;
- (void)loadLocalCachesFromStore;
- (void)addArticleToReadingList:(id)a0;
- (BOOL)canHelpRestoreZoneName:(id)a0;
- (BOOL)shouldHideHeadline:(id)a0;
- (void)addArticleToReadingList:(id)a0 eventInitiationLevel:(long long)a1 origin:(unsigned long long)a2;
- (BOOL)isArticleOnReadingList:(id)a0;
- (id)recordsForRestoringZoneName:(id)a0;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)countOfAllArticlesSavedOutsideOfNewsSince:(id)a0;
- (id)allSortedArticleIDsInReadingList;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (void)addObserver:(id)a0;
- (id)allNonConsumedArticleIDs;
- (void)removeArticleFromReadingList:(id)a0;
- (id)dateArticleWasAdded:(id)a0;

@end
