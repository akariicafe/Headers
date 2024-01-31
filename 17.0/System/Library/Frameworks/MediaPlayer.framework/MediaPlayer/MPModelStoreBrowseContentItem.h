@class MPModelMediaClip, MPModelArtist, MPModelCreditsArtist, MPModelRecordLabel, MPModelSong, MPModelCurator, MPModelMovie, MPModelTVSeason, MPModelTVShowCreator, NSString, MPModelTVEpisode, MPModelRadioStation, MPModelTVShow, MPModelSocialPerson, MPModelPlaylist, MPModelAlbum;

@interface MPModelStoreBrowseContentItem : MPModelObject

@property (nonatomic) unsigned long long itemType;
@property (copy, nonatomic) NSString *artistUploadedContentType;
@property (retain, nonatomic) MPModelArtist *artist;
@property (retain, nonatomic) MPModelAlbum *album;
@property (retain, nonatomic) MPModelCurator *curator;
@property (retain, nonatomic) MPModelMediaClip *mediaClip;
@property (retain, nonatomic) MPModelMovie *movie;
@property (retain, nonatomic) MPModelPlaylist *playlist;
@property (retain, nonatomic) MPModelRadioStation *radioStation;
@property (retain, nonatomic) MPModelSocialPerson *socialPerson;
@property (retain, nonatomic) MPModelSong *song;
@property (retain, nonatomic) MPModelTVEpisode *episode;
@property (retain, nonatomic) MPModelTVSeason *season;
@property (retain, nonatomic) MPModelTVShow *show;
@property (retain, nonatomic) MPModelTVShowCreator *showCreator;
@property (retain, nonatomic) MPModelRecordLabel *recordLabel;
@property (retain, nonatomic) MPModelCreditsArtist *creditsArtist;
@property (nonatomic) long long detailedItemType;

+ (void)__MPModelStoreBrowseContentItemRelationshipRadioStation__MAPPING_MISSING__;
+ (void)__MPModelStoreBrowseContentItemRelationshipMovie__MAPPING_MISSING__;
+ (id)__curator_KEY;
+ (id)__movie_KEY;
+ (id)__radioStation_KEY;
+ (id)__episode_KEY;
+ (void)__MPModelStoreBrowseContentItemPropertyDetailedItemType__MAPPING_MISSING__;
+ (id)__album_KEY;
+ (id)__itemType_KEY;
+ (void)__MPModelStoreBrowseContentItemRelationshipCreditsArtist__MAPPING_MISSING__;
+ (void)__MPModelStoreBrowseContentItemRelationshipTVSeason__MAPPING_MISSING__;
+ (void)__MPModelStoreBrowseContentItemRelationshipPlaylist__MAPPING_MISSING__;
+ (id)__creditsArtist_KEY;
+ (void)__MPModelStoreBrowseContentItemRelationshipRecordLabel__MAPPING_MISSING__;
+ (id)requiredStoreLibraryPersonalizationProperties;
+ (id)__season_KEY;
+ (void)__MPModelStoreBrowseContentItemPropertyItemType__MAPPING_MISSING__;
+ (id)__artist_KEY;
+ (id)__song_KEY;
+ (id)__show_KEY;
+ (id)__recordLabel_KEY;
+ (void)__MPModelStoreBrowseContentItemRelationshipTVShow__MAPPING_MISSING__;
+ (void)__MPModelStoreBrowseContentItemRelationshipSocialPerson__MAPPING_MISSING__;
+ (void)__MPModelStoreBrowseContentItemRelationshipTVEpisode__MAPPING_MISSING__;
+ (void)__MPModelStoreBrowseContentItemPropertyArtistUploadedContentType__MAPPING_MISSING__;
+ (void)__MPModelStoreBrowseContentItemRelationshipCurator__MAPPING_MISSING__;
+ (id)__detailedItemType_KEY;
+ (id)__playlist_KEY;
+ (void)__MPModelStoreBrowseContentItemRelationshipArtist__MAPPING_MISSING__;
+ (id)__socialPerson_KEY;
+ (void)__MPModelStoreBrowseContentItemRelationshipMediaClip__MAPPING_MISSING__;
+ (void)__MPModelStoreBrowseContentItemRelationshipAlbum__MAPPING_MISSING__;
+ (void)__MPModelStoreBrowseContentItemRelationshipTVShowCreator__MAPPING_MISSING__;
+ (void)__MPModelStoreBrowseContentItemRelationshipSong__MAPPING_MISSING__;
+ (id)__artistUploadedContentType_KEY;
+ (id)__mediaClip_KEY;
+ (id)__showCreator_KEY;

- (id)innerObject;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)a0;
- (id)personalizationScopedPropertiesForProperties:(id)a0;
- (id)relativeModelObjectForStoreLibraryPersonalization;

@end
