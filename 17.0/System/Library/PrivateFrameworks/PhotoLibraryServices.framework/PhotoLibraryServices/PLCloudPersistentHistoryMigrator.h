@class PLCloudBatchUploader, PLManagedObjectContext, PLCloudPhotoLibraryUploadTracker;
@protocol PLCloudPersistentHistoryMigratorContext;

@interface PLCloudPersistentHistoryMigrator : NSObject {
    PLCloudBatchUploader *_uploader;
    PLCloudPhotoLibraryUploadTracker *_uploadTracker;
    PLManagedObjectContext *_managedObjectContext;
    id<PLCloudPersistentHistoryMigratorContext> _migratorContext;
}

+ (void)migrateToPersistentHistoryIfNecessaryWithUploader:(id)a0 uploadTracker:(id)a1 managedObjectContext:(id)a2 migratorContext:(id)a3;

- (long long)migrate;
- (BOOL)readLastKnownChangeHubIndex:(unsigned long long *)a0;
- (id)initWithUploader:(id)a0 uploadTracker:(id)a1 managedObjectContext:(id)a2 migratorContext:(id)a3;
- (void)migrateToPersistentHistoryIfNecessary;
- (id)fetchAllPersistentHistoryTransactions;
- (void)uploadEventResults:(id)a0;
- (BOOL)checkForExistingMigrationMarker;
- (void).cxx_destruct;
- (void)updateSavedTokenFromPersistentHistoryResult:(id)a0;
- (id)fetchChangeHubEventsSinceLastKnownIndex:(unsigned long long)a0;

@end
