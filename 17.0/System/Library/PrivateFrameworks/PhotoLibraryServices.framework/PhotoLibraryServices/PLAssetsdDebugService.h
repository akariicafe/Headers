@class NSString, PLAssetsdCPLResourceDownloader, PLAssetsdConnectionAuthorization, PLPhotoLibraryBundleController;

@interface PLAssetsdDebugService : PLAbstractLibraryServicesManagerService <PLAssetsdDebugServiceProtocol> {
    PLAssetsdCPLResourceDownloader *_resourceDownloader;
    PLPhotoLibraryBundleController *_bundleController;
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_persistentStoreCoordinator;
- (void)resetDupesAnalysis;
- (void)invalidateHighlightSubtitlesAndRegenerateHighlightTitlesWithCompletionBlock:(id /* block */)a0;
- (void)clearPrefetchState;
- (void).cxx_destruct;
- (void)statusWithReply:(id /* block */)a0;
- (void)enqueuePrefetch;
- (void)updateHighlightTitlesWithReply:(id /* block */)a0;
- (void)resetMaintenanceTasksWithReply:(id /* block */)a0;
- (void)archiveComputeCacheWithReply:(id /* block */)a0;
- (void)asynchronousUnloadImageFilesForAssetWithObjectURI:(id)a0 minimumFormat:(unsigned short)a1 reply:(id /* block */)a2;
- (void)backgroundMigrationWithReply:(id /* block */)a0;
- (void)cleanupEmptyHighlightsWithReply:(id /* block */)a0;
- (void)coalesceJournalsForManagerName:(id)a0 payloadClassIDs:(id)a1 withChangeJournalOverThreshold:(float)a2 reply:(id /* block */)a3;
- (void)computeCacheStatusWithReply:(id /* block */)a0;
- (void)debugSidecarURLsWithObjectURI:(id)a0 reply:(id /* block */)a1;
- (void)deferredLogDumpWithFormat:(id)a0 reply:(id /* block */)a1;
- (void)donateSearchEntitiesToSpotlightWithReply:(id /* block */)a0;
- (void)dropSearchIndexWithReply:(id /* block */)a0;
- (void)dumpMetadataForMomentsToPath:(id)a0 reply:(id /* block */)a1;
- (void)dumpMomentsMetadataToPath:(id)a0 reply:(id /* block */)a1;
- (void)getCPLStateForDebug:(BOOL)a0 withReply:(id /* block */)a1;
- (void)getTaskConstraintStatusWithReply:(id /* block */)a0;
- (void)getXPCTransactionStatusWithReply:(id /* block */)a0;
- (void)identifyAssetsWithInconsistentCloudState;
- (id)initWithLibraryServicesManager:(id)a0 resourceDownloader:(id)a1 bundleController:(id)a2 connectionAuthorization:(id)a3;
- (void)momentGenerationStatusWithReply:(id /* block */)a0;
- (void)prefetchResourcesForHighlights:(id)a0 reply:(id /* block */)a1;
- (void)prefetchResourcesForMemories:(id)a0 reply:(id /* block */)a1;
- (void)prefetchResourcesWithMode:(long long)a0 reply:(id /* block */)a1;
- (void)privateDownloadCloudPhotoLibraryAsset:(id)a0 resourceType:(unsigned long long)a1 highPriority:(BOOL)a2 reply:(id /* block */)a3;
- (void)processRecentHighlightsWithReply:(id /* block */)a0;
- (void)processUnprocessedMomentLocationsWithReply:(id /* block */)a0;
- (void)pruneAssetsWithUUID:(id)a0 resourceTypes:(id)a1 reply:(id /* block */)a2;
- (void)rebuildAllThumbnails;
- (void)rebuildCloudFeedWithReply:(id /* block */)a0;
- (void)rebuildHighlightsDeletingExistingHighlights:(BOOL)a0 reply:(id /* block */)a1;
- (void)rebuildMomentsDeletingExistingMoments:(BOOL)a0 reply:(id /* block */)a1;
- (void)rebuildSearchIndexWithReply:(id /* block */)a0;
- (void)rebuildTableThumbsWithReply:(id /* block */)a0;
- (void)recoverAssetsInInconsistentCloudState;
- (void)removeAllThumbnailsForDryRun:(BOOL)a0 reply:(id /* block */)a1;
- (void)resetComputeCacheWithReply:(id /* block */)a0;
- (void)restoreComputeCacheWithReply:(id /* block */)a0;
- (void)revertToOriginalWithObjectURI:(id)a0 reply:(id /* block */)a1;
- (void)runMaintenanceTask:(id)a0 reply:(id /* block */)a1;
- (void)setSearchIndexPaused:(BOOL)a0 reason:(id)a1 reply:(id /* block */)a2;
- (void)snapshotJournalsForManagerName:(id)a0 payloadClassIDs:(id)a1 reply:(id /* block */)a2;
- (void)syndicationIngestMutexStateDescriptionWithReply:(id /* block */)a0;
- (void)waitForMomentGenerationWithReply:(id /* block */)a0;

@end
