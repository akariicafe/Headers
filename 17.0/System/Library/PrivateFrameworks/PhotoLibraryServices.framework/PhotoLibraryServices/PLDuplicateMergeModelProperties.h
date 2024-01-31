@class PLLazyObject, PLDuplicateAsset, PLPhotoLibrary;

@interface PLDuplicateMergeModelProperties : NSObject {
    PLLazyObject *_lazyMergePropertyMap;
    PLDuplicateAsset *_targetAsset;
    PLPhotoLibrary *_library;
}

+ (void)_addPropertyToActionMap:(id)a0 name:(id)a1 action:(long long)a2;
+ (id)_additionalAssetAttributesMergePropertyMap;
+ (id)_assetDescriptionMergePropertyMap;
+ (id)_assetMergePropertyMap;
+ (id)_mergePropertyMap;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_customActionProcessingWithSourceDuplicateAsset:(id)a0 entityName:(id)a1 propertyName:(id)a2 type:(long long)a3;
- (BOOL)_isValidForDateCreatedOverwriteWithSource:(id)a0;
- (BOOL)_isValidForOverwriteWithSourceProperty:(id)a0 targetProperty:(id)a1;
- (BOOL)_isValidForTimezoneOverwriteWithSource:(id)a0;
- (BOOL)_isValidForTitleOverwriteWithSource:(id)a0;
- (BOOL)_isValidManagedObject:(id)a0 forEntityName:(id)a1;
- (id)_managedObjectFromDuplicateAsset:(id)a0 matchingEntityName:(id)a1;
- (void)_mergeActionProcessingWithSourceDuplicateAsset:(id)a0 entityName:(id)a1 propertyName:(id)a2;
- (void)_mergeAlbumRelationshipsFromSource:(id)a0;
- (void)_mergeCaptionFromSource:(id)a0;
- (void)_mergeDateFromSource:(id)a0;
- (void)_mergeFavoriteFromSource:(id)a0;
- (void)_mergeKeywordsFromSource:(id)a0;
- (void)_mergeMemoriesBeingCustomUserAssetsFromSource:(id)a0;
- (void)_mergeMemoriesBeingKeyAssetFromSource:(id)a0;
- (void)_mergeMemoriesBeingMovieCuratedAssetsFromSource:(id)a0;
- (void)_mergeMemoriesBeingUserCuratedAssetsFromSource:(id)a0;
- (void)_mergeMemoryBeingCuratedAssetsFromSource:(id)a0;
- (void)_mergeMemoryBeingExtendedCuratedAssetsFromSource:(id)a0;
- (void)_mergeMemoryBeingRepresentativeAssetsFromSource:(id)a0;
- (void)_mergeTimezoneFromSource:(id)a0;
- (void)_mergeTitleFromSource:(id)a0;
- (void)_postProcessingWithSourceDuplicateAsset:(id)a0 type:(long long)a1;
- (void)_resourcePropertyCopyDateCreatedFromSource:(id)a0;
- (void)_resourcePropertyCopyExtendedAttributesFromSource:(id)a0;
- (void)_resourcePropertyCopyMediaMetadataFromSource:(id)a0;
- (id)initWithTargetAsset:(id)a0 photoLibrary:(id)a1;
- (BOOL)isRecentlyModifiedSourceAsset:(id)a0;
- (id)mergePropertyMap;
- (BOOL)transferPropertiesFromSourceAsset:(id)a0 propertyMergeType:(long long)a1 error:(id *)a2;

@end
