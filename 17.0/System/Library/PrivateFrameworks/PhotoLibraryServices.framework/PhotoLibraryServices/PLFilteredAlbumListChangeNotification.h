@class PLAssetContainerListChangeNotification, NSIndexSet, NSString, PLIndexMapper, PLFilteredAlbumList;

@interface PLFilteredAlbumListChangeNotification : PLAssetContainerListChangeNotification <PLIndexMapperDataSource> {
    PLFilteredAlbumList *_albumList;
    NSIndexSet *_oldFilteredIndexes;
    NSIndexSet *_filteredIndexes;
    PLIndexMapper *_indexMapper;
    PLAssetContainerListChangeNotification *_backingNotification;
}

@property (readonly, retain, nonatomic) NSIndexSet *updatedFilteredIndexes;
@property (copy, nonatomic) NSIndexSet *filteredIndexes;
@property (readonly, retain, nonatomic) PLIndexMapper *indexMapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)notificationForDerivedObject:(id)a0 priorChangeState:(id)a1 forBackingObjectNotification:(id)a2;

- (id)init;
- (id)object;
- (BOOL)shouldReload;
- (void).cxx_destruct;
- (BOOL)shouldIncludeObjectAtIndex:(unsigned long long)a0;
- (id)_changedObjects;
- (id)_diffDescription;
- (BOOL)_getOldSet:(id *)a0 newSet:(id *)a1;
- (id)albumList;
- (BOOL)countDidChange;
- (id)initWithFilteredAlbumList:(id)a0 albumListChangeNotification:(id)a1;

@end
