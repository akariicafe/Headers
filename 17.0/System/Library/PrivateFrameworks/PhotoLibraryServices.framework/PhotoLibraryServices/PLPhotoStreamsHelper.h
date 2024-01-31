@interface PLPhotoStreamsHelper : NSObject {
    BOOL _appHasPolledOnceThisForegroundSession;
}

+ (id)sharedPhotoStreamsHelper;
+ (BOOL)photoStreamsEnabledForPhotoLibraryURL:(id)a0;
+ (BOOL)photoStreamsEnabledForPhotoLibraryBundle:(id)a0;
+ (BOOL)_photoStreamsEnabled;
+ (BOOL)writeBreadcrumbContent:(id)a0 forHashString:(id)a1;
+ (void)deletePhotoStreamAssetsWithLibraryServiceManager:(id)a0 withReason:(id)a1 jobStreamID:(id)a2 completion:(id /* block */)a3;
+ (id)iCloudServiceAccount;

- (id)psHashForData:(id)a0;
- (id)init;
- (id)photoStreamsPublishStreamID;
- (void)dealloc;
- (id)derivedAssetForMasterAsset:(id)a0;
- (void)enumerateMasterHashesAndPublicGlobalUUIDsForAssets:(id)a0 withBlock:(id /* block */)a1;
- (void)initiateDeletionOfOriginalAssets:(id)a0;
- (id)lastPhotoStreamUpdateDate;
- (void)_accountStoreDidChange:(id)a0;
- (long long)imageLimitForOwnStream;
- (id)pause_mstreamd;
- (void)writeDidPublishBreadcrumbforHash:(id)a0 imagePath:(id)a1;
- (BOOL)removeBreadcrumbsForHashString:(id)a0;
- (void)pollForNewSubscriptionContentOncePerAppForegroundSession;
- (void)_appDidEnterBackground:(id)a0;
- (void)handleMPSStateIfNecessaryInLibrary:(id)a0;
- (long long)_serverIntegerLimitForKey:(id)a0 debugDefaultKey:(id)a1;
- (void)initiateDeletionOfPhotoStreamAssets:(id)a0;
- (void)writeWillEnqueueBreadcrumbForHash:(id)a0 imagePath:(id)a1;
- (BOOL)dequeueAssetsForPSPublishing:(id)a0;
- (struct CGSize { double x0; double x1; })derivedAssetSizeForMasterSizeWidth:(double)a0 height:(double)a1;
- (void)clearCachedAccountState;
- (BOOL)enqueueAssetForPSPublishing:(id)a0 fullPath:(id)a1 fileSize:(id)a2 reenqueueCount:(unsigned long long)a3 publicGlobalUUID:(id *)a4;
- (void)cleanupPhotoStreamMetadataForAssetsWithUUIDs:(id)a0 forStreamID:(id)a1;
- (id)imageLimitsByAssetType;
- (id)psHashAsString:(id)a0;
- (id)pathToSavedMetadataForAssetHash:(id)a0 streamID:(id)a1 createIntermediateDirs:(BOOL)a2;
- (id)temporaryPathForConvertedAssetWithUUID:(id)a0;
- (void)_clearPhotoStreamAccountSettings;
- (void)resume_mstreamd:(id)a0;
- (id)temporaryPathForRecentlyUploadedAsset:(id)a0;
- (void)savePhotoStreamMetadata:(id)a0 forAsset:(id)a1;
- (BOOL)shouldPublishScreenShots;
- (void)fetchMPSStateWithLibrary:(id)a0 completion:(id /* block */)a1;
- (long long)maxPixelSizeForDerivative;
- (long long)imageLimitForFriendStream;
- (void)writeDidEnqueueBreadcrumbForHash:(id)a0 imagePath:(id)a1;
- (BOOL)isValidUploadAsset:(id)a0 type:(id)a1 fileSize:(id)a2;
- (void)pollForNewSubscriptionContent;
- (long long)friendsLimit;
- (void)resetServerState;

@end
