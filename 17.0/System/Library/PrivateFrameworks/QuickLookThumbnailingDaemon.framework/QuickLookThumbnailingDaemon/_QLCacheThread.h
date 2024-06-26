@class NSLock, NSString, QLDiskCacheQueryOperation, QLCacheCleanUpDatabaseThread, QLMemoryCache, NSOperationQueue, NSURL, NSObject, QLServerThread, QLDiskCache;
@protocol OS_dispatch_source, OS_dispatch_queue, OS_os_transaction;

@interface _QLCacheThread : NSObject <QLDiskCacheDelegate> {
    NSOperationQueue *_memoryCacheQueryOperationQueue;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSObject<OS_dispatch_queue> *_writeCoalesceQueue;
    id /* block */ _writeBlocks[10];
    id /* block */ _cleanupBlocks[10];
    NSObject<OS_dispatch_source> *_drainTimer;
    NSObject<OS_os_transaction> *_writeTransaction;
}

@property (retain) NSObject<OS_dispatch_source> *lowDiskSpaceSource;
@property (retain) NSObject<OS_dispatch_queue> *lowDiskSpaceSourceQueue;
@property (retain) NSLock *modeLock;
@property (retain) QLDiskCacheQueryOperation *currentDiskCacheQueryOperation;
@property (retain) NSOperationQueue *diskCacheQueryOperationQueue;
@property BOOL serverThreadIsIdle;
@property (readonly) unsigned long long currentMode;
@property unsigned long long missedCount;
@property unsigned long long hitCount;
@property BOOL waitingForCleanup;
@property (retain) QLCacheCleanUpDatabaseThread *cleanUpDatabaseThread;
@property (weak) QLServerThread *serverThread;
@property (readonly) QLMemoryCache *memoryCache;
@property (readonly) QLDiskCache *diskCache;
@property (readonly) BOOL lowDiskSpace;
@property (readonly) NSString *modeDescription;
@property (retain) NSURL *diskCacheURL;
@property (nonatomic) BOOL shouldRemoveThumbnailsForDeletedFiles;

+ (long long)defaultCacheSize;

- (void)noteRemoteThumbnailMissingForItems:(id)a0;
- (id)itemsAfterFilteringOutItemsWithMissingThumbnails:(id)a0;
- (BOOL)setLastHitDateOfAllCachedThumbnailsToDate:(id)a0;
- (void)noteRemoteThumbnailPresentForItems:(id)a0;
- (void)_setMode:(unsigned long long)a0;
- (BOOL)itemIsMissingRemoteThumbnail:(id)a0;
- (void)_dispatchThumbnailRequestInServerThread:(id)a0;
- (unsigned long long)hitToSaveCount;
- (void)reset;
- (void)updateMode;
- (BOOL)_shouldQuitWorkingModeForMode:(unsigned long long)a0;
- (BOOL)_shouldQuitLowSpaceModeForMode:(unsigned long long)a0;
- (BOOL)addThumbnailRequest:(id)a0;
- (void)serverIsWorking;
- (BOOL)addNoThumbnailIntoCache:(id)a0;
- (void)openCache;
- (void)startWriting;
- (void)_scheduledDrainPendingBlocks;
- (BOOL)isIdle;
- (BOOL)locked_removeCachedThumbnailsFromUninstalledFileProvidersWithRemainingFileProviderIdentifiers:(id)a0;
- (void)prepareToExit;
- (BOOL)isCacheOpened;
- (void)_willStartCleanUpDatabaseModeFromMode:(unsigned long long)a0;
- (void)databaseCorruptionDetected;
- (BOOL)_shouldQuitClosedModeForMode:(unsigned long long)a0;
- (BOOL)_shouldQuitCleanUpDatabaseModeForMode:(unsigned long long)a0;
- (void)forceCommit;
- (void)_willStartPauseModeFromMode:(unsigned long long)a0;
- (long long)purgeOnMountPoint:(id)a0 withUrgency:(int)a1 beforeDate:(id)a2;
- (void)_updateMode;
- (id)allThumbnailsForFileIdentifier:(id)a0;
- (void)_scheduleBlockDrain;
- (long long)purgeableSpaceOnMountPoint:(id)a0 withUrgency:(int)a1 beforeDate:(id)a2;
- (BOOL)_shouldQuitPauseModeForMode:(unsigned long long)a0;
- (void)_addThumbnailRequestIntoDiskCacheQueryQueue:(id)a0;
- (void)_willStartResetingModeFromMode:(unsigned long long)a0;
- (void)exitImmediately;
- (void)enqueueWriting:(id /* block */)a0;
- (void)_drainPendingBlocksNow;
- (id)initWithServerThread:(id)a0 cacheSize:(long long)a1 location:(id)a2;
- (void)_thumbnailHasBeenCancelled:(id)a0;
- (BOOL)addThumbnailIntoCache:(id)a0 bitmapFormat:(id)a1 bitmapData:(id)a2 metadata:(id)a3 flavor:(int)a4 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 badgeType:(unsigned long long)a6 externalGeneratorDataHash:(unsigned long long)a7;
- (void)_updateLowDisk;
- (void)_willStartWorkingModeFromMode:(unsigned long long)a0;
- (void)_sendThumbnailData:(id)a0 forThumbnailRequest:(id)a1;
- (void).cxx_destruct;
- (void)_unregisterMachPortForLowDiskSpaceNotification;
- (void)_willStartClosedModeFromMode:(unsigned long long)a0;
- (id)allThumbnailsForFPItemID:(id)a0;
- (void)_drainPendingBlocks;
- (unsigned long long)thumbnailInMemoryToSaveCount;
- (void)_registerMachPortForLowDiskSpaceNotification;
- (id)_allThumbnailsEnumerateWithEnumerator:(id)a0;
- (id)allThumbnailsInfo;
- (void)_willStartLowSpaceModeFromMode:(unsigned long long)a0;
- (id)contentDescriptionForURL:(struct __CFURL { } *)a0;
- (id)cacheInfo;
- (void)_cleanUpDatabaseDone;
- (BOOL)locked_removeCachedThumbnailsFromUninstalledFileProvidersWithIdentifiers:(id)a0;
- (void)forceCommitAndClose;
- (void)closeCache;
- (void)_setLowDiskSpace:(BOOL)a0;
- (void)_destroyDrainTimer;
- (id)allThumbnailsForIno:(unsigned long long)a0 fsid:(struct fsid { int x0[2]; })a1;
- (BOOL)_shouldQuitResetingModeForMode:(unsigned long long)a0;
- (void)_waitForEndOfDatabaseCleanup;
- (void)stopWriting;
- (void)serverIsIdle;
- (void)_unscheduleBlockDrain;

@end
