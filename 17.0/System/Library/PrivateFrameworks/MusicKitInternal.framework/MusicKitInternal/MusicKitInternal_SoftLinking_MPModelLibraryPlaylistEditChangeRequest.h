@class MPModelLibraryPlaylistEditChangeRequest;

@interface MusicKitInternal_SoftLinking_MPModelLibraryPlaylistEditChangeRequest : NSObject {
    MPModelLibraryPlaylistEditChangeRequest *_underlyingRequest;
}

- (void).cxx_destruct;
- (void)_performWithRequest:(id)a0 completionPolicy:(long long)a1 completionHandler:(id /* block */)a2;
- (id)initWithParentPlaylist:(id)a0 playlistEntries:(id)a1 playlistName:(id)a2 playlistDescription:(id)a3 playlistUserImage:(struct CGImage { } *)a4 coverArtworkRecipe:(id)a5 publicPlaylist:(id)a6 visiblePlaylist:(id)a7 authorStoreIdentifier:(id)a8;
- (id)initWithPlaylist:(id)a0 playlistEntries:(id)a1 playlistName:(id)a2 playlistDescription:(id)a3 playlistUserImage:(struct CGImage { } *)a4 publicPlaylist:(id)a5 visiblePlaylist:(id)a6 authorStoreIdentifier:(id)a7;
- (void)performWithCompletionPolicy:(long long)a0 completionHandler:(id /* block */)a1;

@end
