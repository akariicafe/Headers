@class NSIndexSet, NSString, PLIndexMapper, PLAssetContainerChangeNotification, PLFilteredAlbum;

@interface PLFilteredAlbumChangeNotification : PLAssetContainerChangeNotification <PLIndexMapperDataSource, PLDerivedNotification> {
    PLFilteredAlbum *_album;
    NSIndexSet *_oldFilteredIndexes;
    NSIndexSet *_filteredIndexes;
    PLIndexMapper *_indexMapper;
    PLAssetContainerChangeNotification *_backingNotification;
}

@property (readonly, retain, nonatomic) NSIndexSet *updatedFilteredIndexes;
@property (copy, nonatomic) NSIndexSet *filteredIndexes;
@property (readonly, retain, nonatomic) PLIndexMapper *indexMapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)notificationForDerivedObject:(id)a0 priorChangeState:(id)a1 forBackingObjectNotification:(id)a2;

- (id)init;
- (id)object;
- (BOOL)shouldReload;
- (id)album;
- (void).cxx_destruct;
- (BOOL)shouldIncludeObjectAtIndex:(unsigned long long)a0;
- (id)_changedObjects;
- (id)initWithFilteredAlbum:(id)a0 priorChangeState:(id)a1 albumChangeNotification:(id)a2;
- (id)_diffDescription;
- (BOOL)_getOldSet:(id *)a0 newSet:(id *)a1;
- (BOOL)countDidChange;
- (BOOL)keyAssetDidChange;
- (BOOL)titleDidChange;

@end
