@class MPModelObject, MPModelPlaylistEntry;

@interface MPModelLibraryPlaylistEditTrackDataSource : MPModelLibraryPlaylistEditDataSource {
    MPModelPlaylistEntry *_playlistEntry;
    MPModelObject *_track;
}

- (id)description;
- (void).cxx_destruct;
- (id)initWithTrackObject:(id)a0;
- (void)loadEntriesWithCompletion:(id /* block */)a0;

@end
