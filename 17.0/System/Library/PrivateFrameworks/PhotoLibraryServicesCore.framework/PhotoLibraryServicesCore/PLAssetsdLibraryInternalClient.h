@interface PLAssetsdLibraryInternalClient : PLAssetsdBaseClient

- (BOOL)waitForSearchIndexExistenceWithError:(id *)a0;
- (BOOL)repairMemoriesWithUUIDs:(id)a0 error:(id *)a1;
- (void)getLibrarySizesFromDB:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)resetLimitedLibraryAccessForApplication:(id)a0 completionHandler:(id /* block */)a1;
- (void)coreAnalyticsLibrarySummaryDataWithCompletionHandler:(id /* block */)a0;
- (void)deleteiTunesSyncedContentWithCompletionHandler:(id /* block */)a0;
- (BOOL)synchronouslyGetSizeOfResourcesToUploadByCPL:(long long *)a0 error:(id *)a1;
- (unsigned long long)getBackgroundJobServiceStateWithError:(id *)a0;
- (id)metricsForLibraryAtURL:(id)a0 error:(id *)a1;
- (BOOL)invalidateReverseLocationDataOnAllAssetsWithError:(id *)a0;
- (void)getSearchIndexRebuildInfo:(id /* block */)a0;
- (void)applySearchIndexGraphUpdates:(id)a0 supportingData:(id)a1 completionHandler:(id /* block */)a2;
- (void)markPersonAsNeedingKeyFace:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)synchronouslyCheckAssetsArePendingForDuplicateMergeProcessing:(id)a0;
- (void)reloadMomentGenerationOptions;
- (void)getAssetCountsWithReply:(id /* block */)a0;
- (void)getSearchIndexProgress:(id /* block */)a0;
- (void)mergeDuplicateAssetUuidSelection:(id)a0 completionHandler:(id /* block */)a1;
- (void)setFetchFilterWithAssets:(id)a0 forApplication:(id)a1 withAuditToken:(struct { unsigned int x0[8]; })a2 completionHandler:(id /* block */)a3;
- (void)forceRunBackgroundJobsOnLibraryPath:(id)a0 criteriaShortCode:(id)a1 completionHandler:(id /* block */)a2;
- (id)getBackgroundJobServiceStatusCenterDumpWithError:(id *)a0;
- (id)getBackgroundJobServiceBundlesInQueueDictionaryWithError:(id *)a0;
- (BOOL)synchronouslyProcessIdenticalDuplicatesWithProcessingType:(unsigned long long)a0 error:(id *)a1;
- (void)applySearchIndexUpdates:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateAssetLocationDataWithUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)setWidgetTimelineGeneratedForDisplaySize:(struct CGSize { double x0; double x1; })a0 completionHandler:(id /* block */)a1;
- (BOOL)invalidateBehavioralScoreOnAllAssetsWithError:(id *)a0;
- (BOOL)setKeywords:(id)a0 forAssetWithUUID:(id)a1;
- (BOOL)registerBackgroundJobServiceIfNecessaryOnLibraryPath:(id)a0 error:(id *)a1;
- (BOOL)synchronouslyGetLibrarySizesFromDB:(BOOL)a0 sizes:(id *)a1 error:(id *)a2;
- (BOOL)backgroundJobServiceRemoveAllBundleRecordsFromProcessingSet:(id *)a0;
- (BOOL)synchronouslyMarkPersonAsNeedingKeyFace:(id)a0 error:(id *)a1;

@end
