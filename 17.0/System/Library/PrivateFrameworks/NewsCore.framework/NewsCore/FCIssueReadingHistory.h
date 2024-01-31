@class NSString, NSArray, NSMutableDictionary, FCMTWriterLock;

@interface FCIssueReadingHistory : FCPrivateDataController <FCIssueReadingHistoryType, FCClearableReadingHistory> {
    NSMutableDictionary *_itemsByID;
    FCMTWriterLock *_itemsLock;
}

@property (readonly, nonatomic) NSString *mostRecentlyVisitedIssueID;
@property (readonly, nonatomic) NSArray *recentlyVisitedIssueIDs;
@property (readonly, nonatomic) NSArray *recentlyEngagedIssueIDs;
@property (readonly, nonatomic) NSArray *allEngagedIssueIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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

- (id)lastSeenDateForIssueWithID:(id)a0;
- (id)lastVisitedDateForIssueWithID:(id)a0;
- (void)removeObserver:(id)a0;
- (void)markIssueAsSeenWithID:(id)a0;
- (id)bookmarkForLastVisitToIssueWithID:(id)a0;
- (void)loadLocalCachesFromStore;
- (void)markIssueAsRemovedFromMyMagazinesWithID:(id)a0;
- (id)lastRemovedFromMyMagazinesDateForIssueWithID:(id)a0;
- (BOOL)canHelpRestoreZoneName:(id)a0;
- (id)recordsForRestoringZoneName:(id)a0;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (void)clearHistory;
- (void).cxx_destruct;
- (void)markIssueWithID:(id)a0 asVisitedWithBookmark:(id)a1;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (void)markIssueAsEngagedWithID:(id)a0;
- (BOOL)hasIssueWithIDBeenSeen:(id)a0;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (void)markIssueAsBadgedWithID:(id)a0;
- (BOOL)hasIssueWithIDBeenEngaged:(id)a0;
- (void)addObserver:(id)a0;
- (BOOL)hasIssueWithIDBeenBadged:(id)a0;
- (id)lastEngagedDateForIssueWithID:(id)a0;
- (BOOL)hasIssueWithIDBeenVisited:(id)a0;
- (void)prepareForUseWithCompletion:(id /* block */)a0;

@end
