@class NSString, CSSearchableIndex;

@interface ML3UpdateSpotlightIndexOperation : ML3DatabaseOperation

@property (retain, nonatomic) CSSearchableIndex *index;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) unsigned long long bundle;
@property (nonatomic) unsigned long long batchCount;

- (void).cxx_destruct;
- (unsigned long long)type;
- (BOOL)_execute:(id *)a0;
- (BOOL)_indexTracksWithPersistentIDs:(id)a0 playlistsWithPersistentIDs:(id)a1 error:(id *)a2;
- (BOOL)_batchIndexWithTrackPersistentIDsToUpdate:(id)a0 playlistsPersistentIDsToUpdateSet:(id)a1 entityStringsToDelete:(id)a2 currentRevision:(id)a3 targetRevision:(id)a4 error:(id *)a5;
- (id)_createSearchableItemsForPlaylistsWithQuery:(id)a0 error:(id *)a1;
- (id)_createSearchableItemsForTracksWithQuery:(id)a0 error:(id *)a1;
- (id)_createSearchableItemsWithPersistentIDs:(id)a0 entityType:(long long)a1 error:(id *)a2;
- (BOOL)_deleteAllIndexedItemsWithError:(id *)a0;
- (BOOL)_deleteIndexedItemsWithEntityStringIDs:(id)a0 error:(id *)a1;
- (BOOL)_enumerateSearchableItemsWithPersistentIDs:(id)a0 entityType:(long long)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (BOOL)_indexItemsFromLibrarySinceRevision:(long long)a0 targetRevision:(long long)a1 error:(id *)a2;
- (id)_queryForPlaylistsContainingMusicShowsMissedByQuery:(id)a0 inContainerPIDs:(id)a1;
- (BOOL)_updateIndexedItemsWithIdentifiers:(id)a0 error:(id *)a1;
- (BOOL)_verifyLibraryConnectionAndAttributesProperties:(id *)a0;

@end
