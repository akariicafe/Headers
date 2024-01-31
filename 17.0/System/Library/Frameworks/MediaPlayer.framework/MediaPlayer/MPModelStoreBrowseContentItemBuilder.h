@class MPStoreModelTVShowCreatorBuilder, MPStoreModelCuratorBuilder, MPStoreModelPlaylistBuilder, MPStoreModelTVEpisodeBuilder, MPStoreModelSocialPersonBuilder, MPStoreModelRadioStationBuilder, MPStoreModelMovieBuilder, MPStoreModelTVShowBuilder, MPStoreModelSongBuilder, MPStoreModelRecordLabelBuilder, MPStoreModelTVSeasonBuilder, MPStoreModelArtistBuilder, MPStoreModelCreditsArtistBuilder, MPStoreModelAlbumBuilder;

@interface MPModelStoreBrowseContentItemBuilder : MPStoreModelObjectBuilder {
    struct { unsigned char initialized : 1; unsigned char itemType : 1; unsigned char detailedItemType : 1; unsigned char artist : 1; unsigned char album : 1; unsigned char curator : 1; unsigned char episode : 1; unsigned char movie : 1; unsigned char playlist : 1; unsigned char radioStation : 1; unsigned char socialPerson : 1; unsigned char song : 1; unsigned char season : 1; unsigned char show : 1; unsigned char showCreator : 1; unsigned char aucType : 1; unsigned char recordLabel : 1; unsigned char creditsArtist : 1; } _requestedBrowseContentItemProperties;
    MPStoreModelAlbumBuilder *_albumBuilder;
    MPStoreModelArtistBuilder *_artistBuilder;
    MPStoreModelCuratorBuilder *_curatorBuilder;
    MPStoreModelTVEpisodeBuilder *_episodeBuilder;
    MPStoreModelMovieBuilder *_movieBuilder;
    MPStoreModelRadioStationBuilder *_radioStationBuilder;
    MPStoreModelSocialPersonBuilder *_socialPersonBuilder;
    MPStoreModelPlaylistBuilder *_playlistBuilder;
    MPStoreModelTVSeasonBuilder *_seasonBuilder;
    MPStoreModelSongBuilder *_songBuilder;
    MPStoreModelTVShowBuilder *_showBuilder;
    MPStoreModelTVShowCreatorBuilder *_showCreatorBuilder;
    MPStoreModelRecordLabelBuilder *_recordLabelBuilder;
    MPStoreModelCreditsArtistBuilder *_creditsArtistBuilder;
    BOOL _shouldFakeEpisodes;
}

@property (nonatomic) BOOL allowsRadioStations;
@property (nonatomic) BOOL allowsVideoContent;

+ (id)allSupportedProperties;

- (id)initWithRequestedPropertySet:(id)a0;
- (long long)contentItemTypeForStoreItemMetadata:(id)a0;
- (long long)contentItemTypeForMusicAPIType:(id)a0;
- (id)modelObjectWithStoreItemMetadata:(id)a0 sourceModelObject:(id)a1 userIdentity:(id)a2;
- (void).cxx_destruct;
- (long long)contentItemTypeForRawResponseKindIdentifierValue:(long long)a0;
- (void)setPreventStoreItemMetadataCaching:(BOOL)a0;
- (long long)contentItemTypeForRawResponseKindIdentifiers:(id)a0;

@end
