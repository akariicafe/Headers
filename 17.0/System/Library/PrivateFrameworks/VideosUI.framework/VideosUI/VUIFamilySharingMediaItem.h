@class VUIFamilySharingRelationships, NSString, VUIExtrasInfo, VUIFamilySharingEntity, VUIVideosPlayable, NSObject;
@protocol VUIMediaEntityAssetController;

@interface VUIFamilySharingMediaItem : VUIMediaItem

@property (retain, nonatomic) VUIFamilySharingEntity *entity;
@property (retain, nonatomic) NSObject<VUIMediaEntityAssetController> *assetController;
@property (retain, nonatomic) NSString *artworkURL;
@property (retain, nonatomic) NSString *previewArtworkURL;
@property (retain, nonatomic) VUIExtrasInfo *iTunesExtrasInfo;
@property (retain, nonatomic) VUIFamilySharingRelationships *relationships;
@property (retain, nonatomic) VUIVideosPlayable *videosPlayable;
@property (retain, nonatomic) NSString *buyParams;
@property (retain, nonatomic) NSString *personalizedBuyParams;

- (id)releaseDate;
- (id)contentDescription;
- (id)seasonNumber;
- (id)storeID;
- (id)episodeNumber;
- (id)resolution;
- (void).cxx_destruct;
- (id)title;
- (id)duration;
- (id)bookmark;
- (id)showTitle;
- (id)contentRating;
- (id)releaseYear;
- (id)extrasURL;
- (id)audioCapability;
- (id)colorCapability;
- (id)showCanonicalID;
- (id)_bestOffer;
- (id)_bestRedownloadOffer;
- (id)_itunesExtrasDictionary;
- (id)genreTitle;
- (id)initWithAMSEntity:(id)a0 requestedProperties:(id)a1;
- (BOOL)isFamilySharingContent;
- (id)seasonCanonicalID;
- (id)seasonIdentifier;
- (id)showIdentifier;

@end
