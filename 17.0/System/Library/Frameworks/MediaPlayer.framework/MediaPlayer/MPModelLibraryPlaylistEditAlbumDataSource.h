@class MPModelAlbum, MPPropertySet, MPMediaLibrary;

@interface MPModelLibraryPlaylistEditAlbumDataSource : MPModelLibraryPlaylistEditDataSource {
    MPMediaLibrary *_library;
    MPModelAlbum *_album;
    MPPropertySet *_trackPropertySet;
}

- (id)description;
- (void).cxx_destruct;
- (id)initWithLibrary:(id)a0 album:(id)a1 trackProperties:(id)a2;
- (void)loadEntriesWithCompletion:(id /* block */)a0;

@end
