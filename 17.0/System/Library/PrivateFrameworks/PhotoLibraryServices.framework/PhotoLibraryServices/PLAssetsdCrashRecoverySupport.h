@class PLPhotoLibraryPathManager, NSDate;

@interface PLAssetsdCrashRecoverySupport : NSObject {
    PLPhotoLibraryPathManager *_pathManager;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _recoveryIndicatorCheckLock;
    NSDate *_recoveryJobCreationDate;
}

- (void)recoverFromCrashIfNeededWithImageWriter:(id)a0;
- (id)initWithPathManager:(id)a0;
- (BOOL)isSafeToRecoverAfterCrash;
- (void).cxx_destruct;
- (void)_enqeueRecoveryJob:(id)a0 date:(id)a1 toImageWriter:(id)a2;

@end
