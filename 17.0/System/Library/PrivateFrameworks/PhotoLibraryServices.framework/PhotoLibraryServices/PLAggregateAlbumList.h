@class NSString, NSMutableOrderedSet;

@interface PLAggregateAlbumList : NSObject <PLAssetContainerListChangeObserver, PLAlbumContainer> {
    NSMutableOrderedSet *_allAlbums;
    NSMutableOrderedSet *_childAlbumLists;
}

@property (nonatomic) int filter;
@property (readonly, nonatomic) unsigned long long albumsCount;
@property (readonly, nonatomic) BOOL isFolder;
@property (readonly, copy, nonatomic) id /* block */ albumsSortingComparator;
@property (readonly, nonatomic) unsigned long long unreadAlbumsCount;
@property (readonly, retain, nonatomic) NSString *_prettyDescription;
@property (readonly, retain, nonatomic) NSString *_typeDescription;
@property (readonly, nonatomic) unsigned long long containersCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)albumListWithFilter:(int)a0 inPhotoLibrary:(id)a1;

- (id)managedObjectContext;
- (id)photoLibrary;
- (BOOL)canEditAlbums;
- (BOOL)canEditContainers;
- (id)albums;
- (BOOL)needsReordering;
- (void)dealloc;
- (short)albumListType;
- (void)preheatAlbumsForProperties:(id)a0 relationships:(id)a1;
- (id)containersRelationshipName;
- (id)identifier;
- (id)containers;
- (void)preheatAlbumsAtIndexes:(id)a0 forProperties:(id)a1 relationships:(id)a2;
- (void)updateAlbumsOrderIfNeeded;
- (void).cxx_destruct;
- (BOOL)albumHasFixedOrder:(id)a0;
- (BOOL)hasAtLeastOneAlbum;
- (void)assetContainerListDidChange:(id)a0;
- (void)setNeedsReordering;
- (BOOL)isEmpty;
- (void)_invalidateAllAlbums;
- (id)initWithFilter:(int)a0 inPhotoLibrary:(id)a1;

@end
