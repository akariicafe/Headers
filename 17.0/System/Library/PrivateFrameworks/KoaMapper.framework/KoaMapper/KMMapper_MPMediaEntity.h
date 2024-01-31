@class NSString, KVItemBuilder, NSMutableArray;

@interface KMMapper_MPMediaEntity : NSObject <KMMapper> {
    KVItemBuilder *_builder;
    NSMutableArray *_items;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)externalObjectClass;

- (id)init;
- (void).cxx_destruct;
- (id)itemsFromExternalObject:(id)a0 additionalFields:(id)a1 error:(id *)a2;
- (long long)targetItemType;
- (BOOL)_addItemWithItemId:(id)a0 itemIdType:(long long)a1 fields:(id)a2 error:(id *)a3;
- (BOOL)_itemsFromMediaItem:(id)a0 error:(id *)a1;
- (BOOL)_itemsFromMediaPlaylist:(id)a0 error:(id *)a1;
- (BOOL)_mapAudioBookItem:(id)a0 error:(id *)a1;
- (BOOL)_mapMovieItem:(id)a0 error:(id *)a1;
- (BOOL)_mapMusicItem:(id)a0 error:(id *)a1;
- (BOOL)_mapMusicVideoItem:(id)a0 error:(id *)a1;
- (BOOL)_mapPodcastItem:(id)a0 error:(id *)a1;
- (BOOL)_mapTVShowItem:(id)a0 error:(id *)a1;

@end
