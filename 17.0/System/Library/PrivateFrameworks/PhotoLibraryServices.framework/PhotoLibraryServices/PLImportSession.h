@class NSSet, NSString;

@interface PLImportSession : PLGenericAlbum <PLFileSystemAlbumMetadataPersistence>

@property (nonatomic) BOOL needsPersistenceUpdate;
@property (nonatomic) BOOL albumShouldBeAutomaticallyDeleted;
@property (retain, nonatomic) NSSet *assets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entityName;
+ (id)validKindsForPersistence;
+ (id)albumWithImportSessionID:(id)a0 inManagedObjectContext:(id)a1;
+ (id)albumsWithImportSessionIDs:(id)a0 inManagedObjectContext:(id)a1;
+ (id)insertNewImportSessionAlbumWithImportSessionID:(id)a0 inManagedObjectContext:(id)a1;

- (void)willSave;
- (BOOL)isValidForPersistence;
- (void)prepareForDeletion;
- (id)payloadForChangedKeys:(id)a0;
- (id)mutableAssets;
- (void)persistMetadataToFileSystemWithPathManager:(id)a0;
- (BOOL)canPerformEditOperation:(unsigned long long)a0;
- (void)didSave;
- (unsigned long long)count;
- (void)removePersistedFileSystemDataWithPathManager:(id)a0;
- (BOOL)isEmpty;
- (void)_updateEndDate:(id)a0;
- (BOOL)_isAssetIncludedInImportDates:(id)a0;
- (BOOL)_isDateAfterEndDate:(id)a0;
- (BOOL)_isDateBeforeStartDate:(id)a0;
- (id)_orderedBatchedAssets;
- (void)_updateStartDate:(id)a0;
- (void)revalidateImportDates;
- (void)updateImportDatesFromAddedAsset:(id)a0;
- (BOOL)validForPersistenceChangedForChangedKeys:(id)a0;

@end
