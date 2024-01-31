@class MPModelGroup, NSString, MPModelAlbum, MPModelArtist, NSDate, MPModelPlaylist, MPModelRadioStation;

@interface MPModelPlayEvent : MPModelObject

@property (readonly, copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDate *datePlayed;
@property (copy, nonatomic) NSString *featureName;
@property (retain, nonatomic) MPModelAlbum *album;
@property (retain, nonatomic) MPModelArtist *artist;
@property (retain, nonatomic) MPModelPlaylist *playlist;
@property (retain, nonatomic) MPModelRadioStation *radioStation;
@property (retain, nonatomic) MPModelGroup *group;

+ (id)__radioStation_KEY;
+ (id)__album_KEY;
+ (id)__artist_KEY;
+ (id)__playlist_KEY;
+ (void)__MPModelPropertyPlayEventDatePlayed__MAPPING_MISSING__;
+ (void)__MPModelPropertyPlayEventFeatureName__MAPPING_MISSING__;
+ (void)__MPModelRelationshipPlayEventAlbum__MAPPING_MISSING__;
+ (void)__MPModelRelationshipPlayEventArtist__MAPPING_MISSING__;
+ (void)__MPModelRelationshipPlayEventGroup__MAPPING_MISSING__;
+ (void)__MPModelRelationshipPlayEventPlaylist__MAPPING_MISSING__;
+ (void)__MPModelRelationshipPlayEventRadioStation__MAPPING_MISSING__;
+ (id)__datePlayed_KEY;
+ (id)__featureName_KEY;
+ (id)__group_KEY;
+ (id)playEventWithModelObject:(id)a0 featureName:(id)a1;

- (long long)itemType;
- (id)contentItemCollectionInfo;
- (id)genericObjectRepresentation;

@end
