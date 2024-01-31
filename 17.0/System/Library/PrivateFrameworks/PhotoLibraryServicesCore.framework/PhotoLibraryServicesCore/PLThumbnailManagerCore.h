@class NSMutableDictionary, NSArray, PLPhotoLibraryPathManager, NSLock;
@protocol PLThumbPersistenceManager;

@interface PLThumbnailManagerCore : NSObject {
    NSMutableDictionary *_thumbnailConfigurationDict;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _ivarLock;
    NSLock *_thumbManagersLock;
    id<PLThumbPersistenceManager> _lastUsedThumbManager;
    unsigned short _lastUsedThumbManagerFormatID;
    NSArray *_fastImageTables;
}

@property (readonly) NSMutableDictionary *thumbManagersByFormat;
@property (readonly) PLPhotoLibraryPathManager *pathManager;

+ (int)configurationThumbnailVersionWithPathManager:(id)a0;
+ (id)tableThumbnailFormatsForConfigPhase:(long long)a0 withPathManager:(id)a1;
+ (id)thumbnailConfigurationDictWithPathManager:(id)a0;
+ (BOOL)_hasTableFormatsAndAllAreCompressedForFormatIDs:(id)a0;
+ (void)removeThumbnailTablesUnsupportedOnly:(BOOL)a0 withPathManager:(id)a1;
+ (void)invalidateCachedConfig;
+ (BOOL)wantsTableOnlyRebuildForThumbnailConfigDict:(id)a0;
+ (id)_formatIDsForIthmbFilesWithPathManager:(id)a0;
+ (id)thumbnailFormatsForConfigPhase:(long long)a0 withPathManager:(id)a1;
+ (BOOL)_hasTableChangesOnlyFromFormatIDs:(id)a0 toFormatIDs:(id)a1;
+ (void)markThumbnailConfigurationForTableOnlyRebuildForThumbnailConfigDict:(id)a0;
+ (id)thumbnailConfigurationPathWithPathManager:(id)a0;
+ (long long)requiredThumbnailResetTypeWithPathManager:(id)a0 comparedToConfigPhase:(long long)a1;
+ (id)uncompressedImageTableSpecificationsWithPathManager:(id)a0;
+ (long long)allocatedFileSizeOfThumbnailTablesWithPathManager:(id)a0;
+ (BOOL)isMissingThumbnailTablesWithPathManager:(id)a0;
+ (id)_thumbnailFormatsFromIDs:(id)a0;
+ (void)markThumbnailConfigurationTableOnlyRebuildFinishedForThumbnailConfigDict:(id)a0;
+ (BOOL)hasThumbnailConfigMismatchWithPathManager:(id)a0 comparedToConfigPhase:(long long)a1;
+ (id)_configurationThumbnailFormatIDsWithPathManager:(id)a0;
+ (int)thumbnailVersionForConfigPhase:(long long)a0 withPathManager:(id)a1;
+ (id)supportedThumbnailFormatIDsForDeviceConfiguration:(id)a0;
+ (void)stampThumbnailConfiguration:(id)a0 toFile:(BOOL)a1 withPathManager:(id)a2;
+ (BOOL)isSuppressingTargetConfigDueToPendingThumbMigrationForPathManager:(id)a0;
+ (void)enumerateThumbnailTablesWithPathManager:(id)a0 fileManager:(id)a1 handler:(id /* block */)a2;
+ (id)_generateUncompressedImageTableSpecificationsForRunningConfigWithPathManager:(id)a0;
+ (id)_generateTableFormatsFromFormatIDs:(id)a0;
+ (void)removeThumbnailTablesUnsupportedOnly:(BOOL)a0 withPathManager:(id)a1 fileManagerDelegate:(id)a2;
+ (BOOL)_isSuppressingTargetConfigComparedToSavedConfigForPathManager:(id)a0;
+ (void)invalidateIsSuppressingTargetConfigDueToPendingThumbMigrationForPathManager:(id)a0;
+ (id)thumbnailFormatIDsForConfigPhase:(long long)a0 withPathManager:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)fastThumbPersistenceManagers;
- (id)initWithPhotoLibraryPathManager:(id)a0;
- (id)thumbManagerForFormatID:(unsigned short)a0 thumbFileManagerClass:(Class)a1 readOnly:(BOOL)a2;
- (id)_thumbManagerForFormatID:(unsigned short)a0;

@end
