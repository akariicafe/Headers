@interface ML3Track : ML3Entity

+ (id)databaseTable;
+ (void)initialize;
+ (id)allProperties;
+ (id)joinClausesForProperty:(id)a0;
+ (id)foreignDatabaseTableForProperty:(id)a0;
+ (id)TVShowEpisodesDefaultOrderingTerms;
+ (id)albumAllArtistsDefaultOrderingTerms;
+ (id)albumsByAlbumArtistDefaultOrderingTerms;
+ (id)albumsDefaultOrderingTerms;
+ (id)artistsDefaultOrderingTerms;
+ (BOOL)clearLocationFromLibrary:(id)a0 persistentIDs:(id)a1 disableKeepLocal:(BOOL)a2;
+ (id)composersDefaultOrderingTerms;
+ (id)containerQueryWithContainer:(id)a0;
+ (id)containerQueryWithContainer:(id)a0 predicate:(id)a1;
+ (id)containerQueryWithContainer:(id)a0 predicate:(id)a1 orderingTerms:(id)a2;
+ (id)defaultOrderingTerms;
+ (BOOL)deleteFromLibrary:(id)a0 deletionType:(int)a1 persistentIDs:(const long long *)a2 count:(unsigned long long)a3;
+ (id)genresDefaultOrderingTerms;
+ (id)podcastsDefaultOrderingTerms;
+ (id)podcastsEpisodesDefaultOrderingTerms;
+ (BOOL)removeFromMyLibrary:(id)a0 deletionType:(int)a1 persistentIDs:(const long long *)a2 count:(unsigned long long)a3;
+ (long long)revisionTrackingCode;
+ (BOOL)trackWithPersistentID:(long long)a0 visibleInLibrary:(id)a1;
+ (BOOL)unlinkRedownloadableAssetsFromLibrary:(id)a0 persistentIDs:(id)a1;
+ (id)flattenedChapterDataFromSyncInfoDictionaries:(id)a0 trackPersistentID:(long long)a1;
+ (id)_normalizedImportChapters:(id)a0 trackPersistentID:(long long)a1;
+ (BOOL)_writeSyncDeletesToPlistWithLibrary:(id)a0 forPersistentIDs:(id)a1;
+ (id)albumAndArtistDefaultOrderingTerms;
+ (id)artistAllAlbumsDefaultOrderingTerms;
+ (BOOL)assistantLibraryContentsChangeForProperty:(id)a0;
+ (BOOL)clearLocationFromLibrary:(id)a0 persistentIDs:(id)a1;
+ (BOOL)clearLocationFromLibrary:(id)a0 persistentIDs:(id)a1 disableKeepLocal:(BOOL)a2 usingConnection:(id)a3;
+ (BOOL)clearLocationFromLibrary:(id)a0 persistentIDs:(id)a1 usingConnection:(id)a2;
+ (BOOL)clearPlaybackKeysFromLibrary:(id)a0 persistentIDs:(id)a1;
+ (id)collectionClassesToUpdateBeforeDelete;
+ (BOOL)deleteFromLibrary:(id)a0 deletionType:(int)a1 persistentIDs:(const long long *)a2 count:(unsigned long long)a3 usingConnection:(id)a4;
+ (void)enumeratePathsToDeleteFromLibrary:(id)a0 persistentIDs:(id)a1 usingBlock:(id /* block */)a2;
+ (void)enumeratePathsToDeleteFromLibrary:(id)a0 persistentIDs:(id)a1 usingConnection:(id)a2 usingBlock:(id /* block */)a3;
+ (id)extraTablesToDelete;
+ (id)extraTablesToInsert;
+ (id)flattenedChapterDataFromDAAPInfoDictionary:(id)a0 trackPersistentID:(long long)a1;
+ (id)flattenedChapterDataWithImportChapters:(id)a0 library:(id)a1 trackPersistentID:(long long)a2;
+ (id)foreignColumnForProperty:(id)a0;
+ (id)importChaptersByParsingAsset:(id)a0;
+ (BOOL)libraryContentsChangeForProperty:(id)a0;
+ (BOOL)libraryDynamicChangeForProperty:(id)a0;
+ (id)orderingTermsForITTGTrackOrder:(unsigned int)a0 descending:(BOOL)a1;
+ (id)persistentIDColumnForTable:(id)a0;
+ (void)populateSortOrdersOfPropertyValues:(id)a0 inLibrary:(id)a1 cachedNameOrders:(id)a2;
+ (id)predicateByOptimizingComparisonPredicate:(id)a0;
+ (id)predisambiguatedProperties;
+ (BOOL)registerBookmarkMetadataIdentifierFunctionOnConnection:(id)a0;
+ (id)sectionPropertyForProperty:(id)a0;
+ (id)subselectPropertyForProperty:(id)a0;
+ (id)subselectStatementForProperty:(id)a0;
+ (BOOL)trackValueAreInTheCloud:(id)a0;
+ (BOOL)trackWithPersistentID:(long long)a0 existsInLibrary:(id)a1;
+ (BOOL)trackWithPersistentID:(long long)a0 existsInLibraryWithConnection:(id)a1;
+ (BOOL)unlinkRedownloadableAssetsFromLibrary:(id)a0 persistentIDs:(id)a1 deletedFileSize:(long long *)a2;
+ (BOOL)unlinkRedownloadableAssetsFromLibrary:(id)a0 persistentIDs:(id)a1 deletionType:(int)a2 deletedFileSize:(long long *)a3;
+ (BOOL)unlinkRedownloadableAssetsFromLibrary:(id)a0 persistentIDs:(id)a1 deletionType:(int)a2 disableKeepLocal:(BOOL)a3 deletedFileSize:(long long *)a4;
+ (id)unsettableProperties;
+ (void)updateAllBookmarkableStoreBookmarkMetadataIdentifiersOnConnection:(id)a0;

- (id)chapterTOC;
- (id)multiverseIdentifier;
- (void)populateLocationPropertiesWithPath:(id)a0;
- (void)populateLocationPropertiesWithPath:(id)a0 protectionType:(long long)a1;
- (void)populateLocationPropertiesWithPath:(id)a0 protectionType:(long long)a1 completionBlock:(id /* block */)a2;
- (BOOL)updateIntegrity;
- (BOOL)_populateLocationPropertiesWithPath:(id)a0 protectionType:(long long)a1 fromLibrary:(id)a2 usingConnection:(id)a3;
- (id)absoluteFilePath;
- (id)artworkTokenAtPlaybackTime:(double)a0;
- (void)createVideoSnapshotAtTime:(double)a0;
- (id)initWithDictionary:(id)a0 inLibrary:(id)a1 cachedNameOrders:(id)a2 usingConnection:(id)a3;
- (id)multiverseIdentifierLibraryOnly:(BOOL)a0;
- (BOOL)needsVideoSnapshot;
- (BOOL)populateArtworkCacheWithArtworkData:(id)a0;
- (void)populateChapterDataWithImportChapters:(id)a0;
- (void)populateLocationPropertiesWithPath:(id)a0 isProtected:(BOOL)a1;
- (id)protocolItem;
- (id)protocolItemForDynamicUpdate;
- (id)rawIntegrity;
- (void)updateCollectionCloudStatus;
- (void)updateStoreBookmarkMetadataIdentifier;

@end
