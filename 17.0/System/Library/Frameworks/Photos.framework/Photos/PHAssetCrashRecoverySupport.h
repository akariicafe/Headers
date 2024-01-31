@class NSString, PLLibraryServicesManager;

@interface PHAssetCrashRecoverySupport : NSObject <PLXPCUserInfo> {
    PLLibraryServicesManager *_libraryServicesManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLibraryServicesManager:(id)a0;
- (id)libraryServicesManager;
- (id)persistentStoreCoordinator;
- (void)_commitRequest:(id)a0 reply:(id /* block */)a1;
- (void).cxx_destruct;
- (void)recoverFromCrashIfNeeded;
- (BOOL)_isCrashRecoveryFilename:(id)a0;
- (BOOL)_isSafeToRecoverAfterCrashForCrashRecoveryFileURL:(id)a0;

@end
