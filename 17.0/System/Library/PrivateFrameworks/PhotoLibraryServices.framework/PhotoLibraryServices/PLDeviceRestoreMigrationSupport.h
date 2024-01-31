@class PLLibraryServicesManager;

@interface PLDeviceRestoreMigrationSupport : NSObject {
    PLLibraryServicesManager *_libraryServicesManager;
    unsigned int _userDataDisposition;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _userDataDispositionLock;
    BOOL _didWaitForPrerequisites;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _prerequisitesCompleteBlockLock;
}

@property (copy, nonatomic) id /* block */ prerequisitesCompleteBlock;
@property (nonatomic, getter=hasDataMigratorPluginRequestedLibraryMigration) BOOL dataMigratorPluginHasRequestedLibraryMigration;

+ (BOOL)isDataMigrationInProgress;

- (id)initWithLibraryServicesManager:(id)a0;
- (BOOL)isOTARestoreInProgress;
- (id)_dataMigrationInfo;
- (BOOL)isRestoreFromBackupSourceCloud;
- (BOOL)isRestoreFromBackupSourceiTunes;
- (void)_setAlbumPendingItemCountsWithContext:(id)a0 shouldSave:(BOOL)a1;
- (BOOL)hasCompletedDataMigratorPrerequisitesForTrackingRestoreFromCloud;
- (void)_linkAsideAlbumMetadata;
- (void)waitForDataMigratorPrerequisitesForTrackingRestoreFromCloud;
- (id)_newShortLivedLibrarySupportingLibraryOpenWithName:(const char *)a0;
- (id)restoreTypeDescription;
- (void)_prepareDatabaseForOTAAssetsPhase;
- (void)_setAssetsToOTARestoreAsIncompleteWithContext:(id)a0 populateAlbumMappings:(id)a1;
- (void)_batchDeleteAllAssetsExcludedFromOTARestoreWithContext:(id)a0;
- (void).cxx_destruct;
- (BOOL)_userDataDispositionMatchesDisposition:(unsigned int)a0;
- (BOOL)isRestoreFromBackupSourceDifferentDevice;
- (BOOL)isRestoreFromBackupSourceDeviceToDevice;
- (BOOL)prepareDatabaseForOTARestoreIfNecessaryWithMigrationType:(long long)a0;
- (BOOL)isRestoreFromBackup;
- (BOOL)isRestoreFromBackupSourceMegaBackup;
- (void)deletePhotoStreamDataForStreamID:(id)a0;

@end
