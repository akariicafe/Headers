@class FCCloudContext, NSMutableDictionary, FCMTWriterLock;

@interface FCPuzzleHistory : FCPrivateDataController {
    NSMutableDictionary *_itemsByPuzzleID;
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
- (void)loadLocalCachesFromStore;
- (BOOL)canHelpRestoreZoneName:(id)a0;
- (id)recordsForRestoringZoneName:(id)a0;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (void).cxx_destruct;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (void)addObserver:(id)a0;
- (void)addPuzzleToPuzzleHistory:(id)a0 puzzleTypeID:(id)a1;
- (id)allSortedPuzzleIDsSinceLastPlayedDate:(id)a0;
- (id)datePuzzleWasLastPlayed:(id)a0;
- (BOOL)hasPuzzleBeenCompleted:(id)a0;
- (BOOL)isPuzzleHistoryEmpty;
- (BOOL)isPuzzleInPuzzleHistory:(id)a0;
- (id)puzzleHistoryItemForPuzzleID:(id)a0;
- (void)removePuzzleFromPuzzleHistory:(id)a0;
- (id)sortedPuzzleIDsForPuzzleTypeID:(id)a0 sinceLastPlayedDate:(id)a1;
- (void)updatePuzzle:(id)a0 progressData:(id)a1 progressLevel:(long long)a2 playDuration:(long long)a3 isSolved:(BOOL)a4;

@end
