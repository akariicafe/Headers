@class NSString, PLPhotoLibraryPathManager;

@interface PLIndicatorFileCoordinator : NSObject {
    PLPhotoLibraryPathManager *_pathManager;
    int _activityIndicatorFid;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _activityIndicatorLock;
    NSString *_resourceHoldingDirectoryPath;
}

+ (void)setSystemLibraryAvailableIndicatorState:(BOOL)a0;
+ (BOOL)systemLibraryAvailableIndicatorState;

- (void)setCreatingAssetIsBusy:(BOOL)a0;
- (void)writeDisableICloudPhotosMarker;
- (void)dealloc;
- (id)_rebuildingPersonsIndicatorFilePath;
- (id)_readPListWithFilename:(id)a0;
- (BOOL)isEnableICloudPhotos;
- (void)writeEnableICloudPhotosMarker;
- (id)_pauseDataOnPath:(id)a0;
- (void)_writeDict:(id)a0 withFilename:(id)a1;
- (BOOL)hasItemToDownload;
- (id)initWithPathManager:(id)a0;
- (short)currentPauseReason;
- (BOOL)isICloudPhotosPaused;
- (BOOL)_canSetPauseMarkerWithUnpauseTime:(id)a0 onPauseData:(id)a1;
- (BOOL)isDisableICloudPhotos;
- (BOOL)isWipeCPLOnOpen;
- (void)setStreamsLibraryUpdatingExpired:(BOOL)a0;
- (id)dupeAnalysisNeededFilePath;
- (BOOL)isStreamsLibraryUpdatingExpired;
- (void)logCloudServiceEnableEvent:(BOOL)a0 serviceName:(id)a1 reason:(id)a2;
- (void)setTakingPhotoIsBusy:(BOOL)a0;
- (id)initWithResourceHoldingDirectoryPath:(id)a0;
- (void)_createPauseMarkerForReason:(short)a0 withUnpauseTime:(id)a1 withPath:(id)a2;
- (void)setWipeCPLOnOpen;
- (void)updateICloudPhotosMarkerForEnable:(BOOL)a0;
- (id)unpauseTime;
- (void)setDownloadCountsForImages:(unsigned long long)a0 videos:(unsigned long long)a1;
- (void)getDownloadPhotoCount:(unsigned long long *)a0 downloadVideoCount:(unsigned long long *)a1;
- (BOOL)isUserPause;
- (void)_setActivityIndicatorWithPath:(id)a0 flag:(BOOL)a1 crashRecovery:(id /* block */)a2;
- (void)setIsRebuildingPersons:(BOOL)a0;
- (void)clearWipeCPLOnOpen;
- (BOOL)clearPauseMarkerForReason:(short)a0;
- (void)forceSoftResetSync;
- (void).cxx_destruct;
- (BOOL)isForceSoftResetSync;
- (BOOL)needsRecoveryAfterCrashOptionallyRemoveAllIndicatorFiles:(BOOL)a0;
- (BOOL)isDupeAnalysisNeeded;
- (void)setDupeAnalysisNeeded:(BOOL)a0;
- (void)setImageWriter:(id)a0 isBusy:(BOOL)a1 crashRecoverySupport:(id)a2;
- (BOOL)isRebuildingPersons;
- (void)createPauseMarkerWithUnpauseTime:(id)a0 reason:(short)a1;
- (void)deleteCPLDownloadFinishedMarkerFilePath;

@end
