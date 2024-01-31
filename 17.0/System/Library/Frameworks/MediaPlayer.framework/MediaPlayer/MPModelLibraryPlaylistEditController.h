@class NSNumber, NSString, UIImage, MPPropertySet, MPMediaLibrary, NSOperationQueue, NSMutableDictionary, MPSectionedCollection, MPModelPlaylist, MPSectionedIdentifierList;

@interface MPModelLibraryPlaylistEditController : NSObject <MPSectionedIdentifierListDelegate, MPSectionedIdentifierListAnnotationDelegate> {
    MPModelPlaylist *_playlist;
    MPMediaLibrary *_library;
    MPSectionedCollection *_initialTrackList;
    MPSectionedIdentifierList *_trackIdentifierList;
    MPPropertySet *_playlistEntryProperties;
    NSOperationQueue *_operationQueue;
    NSMutableDictionary *_dataSources;
    NSString *_newName;
    NSString *_newDescriptionText;
    MPModelPlaylist *_newParentPlaylist;
    UIImage *_newUserImage;
    NSNumber *_publicPlaylist;
    NSNumber *_visiblePlaylist;
    NSNumber *_curatorPlaylist;
    NSString *_coverArtworkRecipe;
}

@property (nonatomic) BOOL addInsertedTracksToLibrary;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *descriptionText;
@property (retain, nonatomic) MPModelPlaylist *parentPlaylist;
@property (retain, nonatomic) UIImage *userImage;
@property (copy, nonatomic, getter=isPublicPlaylist) NSNumber *publicPlaylist;
@property (copy, nonatomic, getter=isVisiblePlaylist) NSNumber *visiblePlaylist;
@property (copy, nonatomic, getter=isCuratorPlaylist) NSNumber *curatorPlaylist;
@property (copy, nonatomic) NSString *coverArtworkRecipe;
@property (readonly, copy, nonatomic) MPSectionedCollection *currentTrackList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeEntry:(id)a0;
- (void)removeItemAtIndexPath:(id)a0;
- (id)initWithLibrary:(id)a0;
- (void).cxx_destruct;
- (void)moveItemFromIndexPath:(id)a0 toIndexPath:(id)a1;
- (void)_createTrackIdentifierListWithInitialEntries:(id)a0 completion:(id /* block */)a1;
- (id)_defaultPlaylistEntryPropertySet;
- (id)_initWithLibrary:(id)a0 playlist:(id)a1 playlistEntryProperties:(id)a2;
- (id)_itemIdentifierForIndexPath:(id)a0 usingExclusiveAccessToken:(id)a1;
- (id)_newDataSourceForModelObject:(id)a0;
- (void)_resolveTrackListWithCompletion:(id /* block */)a0;
- (id)_sectionIdentifierForItemIdentifier:(id)a0;
- (void)appendItem:(id)a0 completion:(id /* block */)a1;
- (void)beginEditingWithCompletion:(id /* block */)a0;
- (void)commitWithCompletion:(id /* block */)a0;
- (id)debugDescriptionForItem:(id)a0 inSection:(id)a1;
- (id)initWithLibrary:(id)a0 playlist:(id)a1;
- (id)initWithLibrary:(id)a0 playlist:(id)a1 initialTrackList:(id)a2 playlistEntryProperties:(id)a3;
- (id)initWithLibrary:(id)a0 playlist:(id)a1 playlistEntryProperties:(id)a2;
- (id)initWithLibrary:(id)a0 playlistEntryProperties:(id)a1;
- (void)insertItem:(id)a0 afterEntry:(id)a1 completion:(id /* block */)a2;
- (void)insertItem:(id)a0 atIndexPath:(id)a1 completion:(id /* block */)a2;
- (void)insertItemAtStart:(id)a0 completion:(id /* block */)a1;
- (void)moveEntry:(id)a0 afterEntry:(id)a1;
- (void)moveEntryToStart:(id)a0;
- (void)sectionedIdentifierList:(id)a0 dataSourceDidChangeItems:(id)a1 inSection:(id)a2;

@end
