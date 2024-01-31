@class PLPhotoLibraryPathManager, PLPhotoLibrary;

@interface PLDuplicateMergeCrashRecovery : NSObject {
    PLPhotoLibrary *_library;
    PLPhotoLibraryPathManager *_pathManager;
}

- (id)initWithLibraryServicesManager:(id)a0;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (long long)_requestRecoveryActionForAsset:(id)a0;
- (id)_crashRecoveryMarkerFileURL;
- (id)_readCrashRecoveryUUIDContainerMarkerFile;
- (id)_readCrashRecoveryUUIDListMarkerFile;
- (void)_recoveryMasterRecordCleanupForAsset:(id)a0;
- (void)_recoveryMasterResourceRecordCleanupForAsset:(id)a0;
- (void)performCrashRecoveryIfNeeded;
- (BOOL)removeCrashRecoveryMarkerFileWithError:(id *)a0;
- (BOOL)writeCrashRecoveryMarkerFileForTargetAssetUUID:(id)a0 error:(id *)a1;

@end
