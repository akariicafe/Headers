@interface PLSearchIndexRebuildUtilities : NSObject

+ (BOOL)_deviceLocaleDidChange:(id)a0;
+ (BOOL)_featureFlagsDidChange:(id)a0;
+ (BOOL)_resetSearchIndexRebuildStateForEntityName:(id)a0 photoLibrary:(id)a1;
+ (BOOL)_sceneTaxonomySHAsDidChange:(id)a0 searchIndexInfo:(id)a1;
+ (id)_searchIndexRebuildStateKeyPathForEntityName:(id)a0;
+ (BOOL)_searchIndexVersionDidChange:(id)a0;
+ (BOOL)_spotlightDidRequestRebuild:(id)a0;
+ (unsigned long long)searchIndexRebuildReasonsForPhotoLibrary:(id)a0 sceneTaxonomyDigests:(id)a1;
+ (unsigned long long)searchIndexRebuildTypeFromRebuildReasons:(unsigned long long)a0;
+ (BOOL)setSearchIndexNeedsRebuildForPhotoLibrary:(id)a0;
+ (void)setSearchIndexRebuildCompleteForManagedObjects:(id)a0 entityName:(id)a1;

@end
