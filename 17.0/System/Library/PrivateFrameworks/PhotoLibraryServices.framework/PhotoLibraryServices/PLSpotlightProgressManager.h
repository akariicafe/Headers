@interface PLSpotlightProgressManager : NSObject

+ (BOOL)_writeProgressToDisk:(id)a0 forPhotoLibraryPathManager:(id)a1;
+ (BOOL)spotlightOperationCompletedForOperationType:(unsigned long long)a0 withSearchableIdentifiers:(id)a1 forPhotoLibraryPathManager:(id)a2 success:(BOOL)a3;
+ (BOOL)didPreviouslySetSpotlightNeedsIndexRebuild;
+ (BOOL)shouldPerformSpotlightOperationOfType:(unsigned long long)a0 withSearchableItemIdentifiers:(id)a1 photoLibraryPathManager:(id)a2;
+ (BOOL)shouldReindexSpotlightIndexForPhotoLibraryPathManager:(id)a0;
+ (BOOL)spotlightResetOperationCompletedForPhotoLibraryPathManager:(id)a0 success:(BOOL)a1;
+ (void)setUniversalSearchEligibility:(BOOL)a0 systemPhotoLibraryPath:(id)a1 systemPhotoLibraryDatabaseUUID:(id)a2 needsSpotlightIndexDrop:(BOOL)a3 needsSpotlightIndexRebuild:(BOOL)a4;
+ (BOOL)deleteSpotlightProgressForPhotoLibraryPathManager:(id)a0;
+ (BOOL)universalSearchEligibilityDidChangeForSPLWithDatabaseUUID:(id)a0 currentSPLPath:(id)a1 currentEligibility:(BOOL)a2;
+ (id)_readProgressFromDiskForPhotoLibraryPathManager:(id)a0;
+ (BOOL)addSearchableItemIdentifiers:(id)a0 forOperationType:(unsigned long long)a1 forPhotoLibraryPathManager:(id)a2;
+ (BOOL)_shouldRetryReindexWithScheduledDateOf:(id)a0;
+ (void)spotlightProgressForPhotoLibraryPathManager:(id)a0 completion:(id /* block */)a1;
+ (id)_storageKeyForOperationType:(unsigned long long)a0;
+ (id)lastKnownSystemPhotoLibraryPath;
+ (BOOL)_addSearchableItemIdentifiers:(id)a0 operationType:(unsigned long long)a1 forPhotoLibraryPathManager:(id)a2 isRetry:(BOOL)a3;
+ (BOOL)removeSearchableItemIdentifiers:(id)a0 forPhotoLibraryPathManager:(id)a1;
+ (BOOL)shouldPerformSpotlightOperationsWithPhotoLibraryPathManager:(id)a0;
+ (BOOL)_shouldRetryRequestWithMostRecentAttemptOf:(id)a0;
+ (BOOL)setSpotlightIndexNeedsReindexing:(BOOL)a0 forPhotoLibraryPathManager:(id)a1;
+ (BOOL)shouldRetrySpotlightIndexDropForUniversalSearchEligibilityChange;
+ (id)_updateFailureCountsForSearchableItemIdentifiers:(id)a0 shouldIncrementCounts:(BOOL)a1 forPhotoLibraryPathManager:(id)a2;
+ (id)_minimumScheduledDateForNextReindexRetry;

@end
