@class PLAssetContainerListChangeNotification, PLAggregateAlbumList;

@interface PLAggregateAlbumListChangeNotification : PLAssetContainerListChangeNotification {
    PLAggregateAlbumList *_albumList;
    PLAssetContainerListChangeNotification *_note;
    unsigned long long _indexOffet;
}

+ (id)notificationForAggregateAlbumList:(id)a0 fromAlbumListChangeNotification:(id)a1 indexOffset:(unsigned long long)a2;

- (id)insertedIndexes;
- (void)enumerateMovesWithBlock:(id /* block */)a0;
- (void)dealloc;
- (id)object;
- (BOOL)shouldReload;
- (id)changedObjects;
- (unsigned long long)snapshotIndexForContainedObject:(id)a0;
- (void).cxx_destruct;
- (id)changedIndexes;
- (id)deletedObjects;
- (id)insertedObjects;
- (id)deletedIndexes;
- (BOOL)_getOldSet:(id *)a0 newSet:(id *)a1;
- (id)albumList;
- (id)changedIndexesRelativeToSnapshot;
- (id)initWithAggregateAlbumList:(id)a0 fromAlbumListChangeNotification:(id)a1 indexOffset:(unsigned long long)a2;

@end
