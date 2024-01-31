@class NSObject;
@protocol OS_dispatch_queue;

@interface MPMediaLibraryDataProviderSystemML3 : MPMediaLibraryDataProviderML3 {
    long long _currentRevision;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)_localizedGeniusErrorForError:(id)a0 geniusEnabled:(BOOL)a1;
+ (id)_localizedCloudGeniusErrorForError:(id)a0;

- (void)_seedCloudPlaylistWithTrack:(id)a0 container:(id)a1 completionBlock:(id /* block */)a2;
- (id)errorResolverForItem:(id)a0;
- (long long)_currentRevision;
- (void)geniusItemsForSeedItem:(id)a0 completion:(id /* block */)a1;
- (void *)createGeniusClusterPlaylistWithSeedItemIdentifiers:(long long *)a0 count:(unsigned long long)a1 error:(id *)a2;
- (void)updateEntitesToCurrentRevision;
- (id)initWithLibrary:(id)a0;
- (void).cxx_destruct;
- (void)seedPlaylistWithIdentifier:(long long)a0 withItemWithIdentifier:(long long)a1 completionBlock:(id /* block */)a2;
- (void)releaseGeniusClusterPlaylist:(void *)a0;
- (long long *)generateItemIdentifiersForGeniusClusterPlaylist:(void *)a0 count:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)isGeniusEnabled;
- (BOOL)supportsEntityChangeTrackingForMediaEntityType:(long long)a0 collectionGroupingType:(long long)a1 dataProviderClass:(out Class *)a2;
- (void)_initInstanceVariableOnce;

@end
