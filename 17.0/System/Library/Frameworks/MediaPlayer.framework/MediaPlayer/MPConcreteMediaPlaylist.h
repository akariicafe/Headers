@class MPMediaQuery, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MPConcreteMediaPlaylist : MPMediaPlaylist <NSCopying> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_properties;
    MPMediaQuery *_itemsQuery;
    void *_clusterPlaylist;
}

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (BOOL)setValue:(id)a0 forProperty:(id)a1;
- (void)removeAllItems;
- (void)encodeWithCoder:(id)a0;
- (id)items;
- (void)_enumerateItemPersistentIDsUsingBlock:(id /* block */)a0;
- (unsigned long long)count;
- (id)valueForProperty:(id)a0;
- (void)addItemWithProductID:(id)a0 completionHandler:(id /* block */)a1;
- (id)representativeItem;
- (void).cxx_destruct;
- (id)mediaLibrary;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)mediaTypes;
- (BOOL)_allowsEditing;
- (void)endGeneratingGeniusClusterItems;
- (BOOL)existsInLibrary;
- (void)removeFirstItem;
- (id)_tokenBinaryIdentifierAsString;
- (void)_updateLibraryForPlaylistEdit:(id)a0;
- (void)addMediaItems:(id)a0 completionHandler:(id /* block */)a1;
- (void)appendItem:(id)a0 completion:(id /* block */)a1;
- (void)appendItems:(id)a0 completion:(id /* block */)a1;
- (BOOL)beginGeneratingGeniusClusterItemsWithSeedItems:(id)a0 error:(id *)a1;
- (id)geniusClusterItemsWithCount:(unsigned long long)a0 error:(id *)a1;
- (id)initWithProperties:(id)a0 itemsQuery:(id)a1;
- (id)itemsQuery;
- (void)moveItemFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1 completionBlock:(id /* block */)a2;
- (id)multiverseIdentifier;
- (void)populateWithSeedItem:(id)a0 completionBlock:(id /* block */)a1;
- (void)populateWithSeedItem:(id)a0 queue:(id)a1 completionBlock:(id /* block */)a2;
- (void)removeItems:(id)a0 atFilteredIndexes:(id)a1 completionBlock:(id /* block */)a2;
- (void)replaceItems:(id)a0 completion:(id /* block */)a1;
- (void)replaceItemsWithPersistentIDs:(id)a0 completion:(id /* block */)a1;
- (void)setValue:(id)a0 forProperty:(id)a1 withCompletionBlock:(id /* block */)a2;
- (id)valuesForProperties:(id)a0;

@end
