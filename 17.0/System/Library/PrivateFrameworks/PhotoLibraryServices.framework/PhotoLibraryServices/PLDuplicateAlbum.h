@class NSSet;

@interface PLDuplicateAlbum : PLManagedAlbum

@property (nonatomic) long long processingVersion;
@property (nonatomic) short duplicateType;
@property (retain, nonatomic) NSSet *metadataMatchingAssets;
@property (retain, nonatomic) NSSet *perceptualMatchingAssets;

+ (id)entityName;
+ (id)duplicateAlbumsInCurrentManagedObjectContext:(id)a0 type:(short)a1;
+ (id)insertIntoPhotoLibrary:(id)a0;
+ (id)duplicateAlbumsInCurrentManagedObjectContext:(id)a0;
+ (id)duplicateAlbumsInCurrentManagedObjectContext:(id)a0 predicate:(id)a1;
+ (id)albumSupportsAssetOrderKeysPredicate;

- (BOOL)supportsAssetOrderKeys;
- (void)awakeFromInsert;
- (id)albumAssetsFetchRequestForDuplicateSort;
- (void)updateAlbumType;
- (id)mutableMetadataMatchingAssets;
- (void)updateDuplicateAssetVisibilityStateWithDuplicateAssets:(id)a0;
- (void)addAssets:(id)a0 type:(short)a1;
- (void)cleanupAlbumForDeletedDuplicateAsset;
- (void)sortAssets;
- (void)updateDuplicateAssetVisibilityStatePropertyForAsset:(id)a0 duplicateAssetVisibilityState:(short)a1;
- (id)duplicateAssetsFromCollection;
- (void)removeAssetsAtIndexes:(id)a0;
- (BOOL)hasDuplicateAssetVisibilityStateVisibleAssets:(id)a0;
- (void)removeInternalAssets:(id)a0;
- (id)mutablePerceptualMatchingAssets;

@end
