@class PLDuplicateMergeCrashRecovery, PLPhotoLibrary, NSArray, PLManagedAsset, PLDuplicateMergeModelProperties, PLDuplicateAsset;

@interface PLDuplicateMerge : NSObject {
    PLPhotoLibrary *_library;
    NSArray *_sourceAssets;
    PLDuplicateMergeCrashRecovery *_mergeCrashRecovery;
    PLDuplicateMergeModelProperties *_mergeModelProperties;
}

@property (readonly) PLManagedAsset *asset;
@property (retain) PLDuplicateAsset *targetAsset;

+ (BOOL)mergeAssets:(id)a0 targetAssetOID:(id)a1 photolibrary:(id)a2 error:(id *)a3;

- (void).cxx_destruct;
- (BOOL)mergeWithError:(id *)a0;
- (BOOL)mergeResourcesFromSource:(id)a0 error:(id *)a1;
- (BOOL)_isValidForLocationOverwriteWithSource:(id)a0;
- (BOOL)_mergeAdjustmentsFromSource:(id)a0 error:(id *)a1;
- (void)_mergeFaceRelationshipsFromSource:(id)a0;
- (void)_mergeLocationFromSource:(id)a0 forceUpdate:(BOOL)a1;
- (void)_mergeMetadataFromSource:(id)a0;
- (void)_mergeSharedLibraryMetadataFromSource:(id)a0;
- (void)_preFileCloneChecksForURL:(id)a0;
- (void)_resetMediaAnalysisStateWithType:(long long)a0;
- (void)_setDCIMFilenameFromSource:(id)a0;
- (void)_setUBFFilenameFromDuplicateSource:(id)a0;
- (id)initWithSourceAssets:(id)a0 targetAsset:(id)a1 photolibrary:(id)a2;

@end
