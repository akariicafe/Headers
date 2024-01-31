@class NSString, NSOrderedSet, NSData, NSPredicate, NSFetchRequest, NSArray;

@interface PLFetchingAlbum : _PLFetchingAlbum <PLCloudDeletable, PLFileSystemAlbumMetadataPersistence> {
    unsigned long long _countForDisplay;
    unsigned long long _photosCount;
    unsigned long long _videosCount;
    int _emptyState;
    NSArray *_cachedKeyAssets;
}

@property (class, readonly, copy) NSString *cloudUUIDKeyForDeletion;

@property (retain, nonatomic) NSOrderedSet *fetchedAssets;
@property (nonatomic) BOOL needsPersistenceUpdate;
@property (retain, nonatomic) NSFetchRequest *fetchRequest;
@property (retain, nonatomic) NSData *customQueryParameters;
@property (retain, nonatomic) NSString *customQueryType;
@property (readonly, nonatomic) NSPredicate *extraFilterPredicate;
@property (retain, nonatomic) NSPredicate *ALAssetsGroupFilterPredicate;
@property (nonatomic) unsigned long long batchSize;
@property (nonatomic) short searchIndexRebuildState;
@property (readonly, nonatomic) BOOL hasAssetsCache;
@property (nonatomic) short cloudDeleteState;
@property (readonly) long long cloudDeletionType;
@property (readonly, copy) NSString *cloudUUIDForDeletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)predicateForAlbumKind:(int)a0;
+ (BOOL)contextShouldIgnoreChangesForFetchedAssets;
+ (id)validKindsForPersistence;
+ (id)predicateForAlbumKind:(int)a0 includeGuest:(BOOL)a1;
+ (id)sortDescriptorsForAlbumKind:(int)a0;
+ (BOOL)contextShouldIgnoreChangesForALAssetsGroupFilterPredicate;
+ (id)_predicateForVisibleAsset;
+ (BOOL)contextShouldIgnoreChangesForFetchRequest;
+ (id)_predicateForAssetSubtype:(short)a0;
+ (long long)cloudDeletionTypeForTombstone:(id)a0;

- (void)willSave;
- (BOOL)isValidForPersistence;
- (void)prepareForDeletion;
- (id)payloadForChangedKeys:(id)a0;
- (id)mutableAssets;
- (void)persistMetadataToFileSystemWithPathManager:(id)a0;
- (void)awakeFromInsert;
- (BOOL)canPerformEditOperation:(unsigned long long)a0;
- (BOOL)canPerformDeleteOperation;
- (id)filteredIndexesForPredicate:(id)a0;
- (void)didSave;
- (void)awakeFromFetch;
- (void)didTurnIntoFault;
- (id)assets;
- (unsigned long long)count;
- (unsigned long long)approximateCount;
- (void)setAssets:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)countForAssetsOfKind:(short)a0;
- (void)removePersistedFileSystemDataWithPathManager:(id)a0;
- (BOOL)isEmpty;
- (void)batchFetchAssets:(id)a0;
- (id)keyAsset;
- (id)secondaryKeyAsset;
- (void)setKeyAsset:(id)a0;
- (void)setSecondaryKeyAsset:(id)a0;
- (void)setTertiaryKeyAsset:(id)a0;
- (id)tertiaryKeyAsset;
- (id)primitiveAssets;
- (id)_cachedKeyAssets;
- (unsigned long long)_fetchedCountForAssetsOfKind:(short)a0;
- (id)_performFetchWithRequest:(id)a0;
- (id)fastPointerAccessSetForAssets:(id)a0;
- (BOOL)mayHaveAssetsInCommon:(id)a0;
- (void)setupFetchRequest;
- (void)updateSnapshotAndClearCaches:(id)a0;

@end
