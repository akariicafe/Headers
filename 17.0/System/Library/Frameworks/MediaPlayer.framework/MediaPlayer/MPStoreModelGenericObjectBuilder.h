@class MPStoreModelRadioStationBuilder, MPStoreModelPlaylistBuilder, MPStoreModelMovieBuilder, MPStoreModelAlbumBuilder, MPStoreModelTVSeasonBuilder, MPStoreModelSongBuilder, MPStoreModelTVEpisodeBuilder, MPStoreModelTVShowBuilder, MPStoreModelRecordLabelBuilder, NSMapTable, MPStoreModelArtistBuilder;

@interface MPStoreModelGenericObjectBuilder : MPStoreModelObjectBuilder {
    NSMapTable *_baseContentItemIDToOccurrenceCount;
    MPStoreModelAlbumBuilder *_albumBuilder;
    MPStoreModelArtistBuilder *_artistBuilder;
    MPStoreModelMovieBuilder *_movieBuilder;
    MPStoreModelPlaylistBuilder *_playlistBuilder;
    MPStoreModelSongBuilder *_songBuilder;
    MPStoreModelTVEpisodeBuilder *_tvEpisodeBuilder;
    MPStoreModelTVSeasonBuilder *_tvSeasonBuilder;
    MPStoreModelTVShowBuilder *_tvShowBuilder;
    MPStoreModelRecordLabelBuilder *_recordLabelBuilder;
    MPStoreModelRadioStationBuilder *_radioStationBuilder;
}

@property (nonatomic) BOOL shouldUsePlaylistEntry;

- (id)modelObjectWithStoreItemMetadata:(id)a0 sourceModelObject:(id)a1 userIdentity:(id)a2;
- (void).cxx_destruct;
- (id)_modelObjectWithUniqueContentItemIDForModelObject:(id)a0;
- (void)setPreventStoreItemMetadataCaching:(BOOL)a0;

@end
