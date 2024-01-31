@class WLKPlayable, NSString, NSDate, NSNumber, WLKArtworkVariantListing;

@interface WLKBasicEpisodeMetadata : WLKBasicContentMetadata

@property (readonly, copy, nonatomic) NSString *showTitle;
@property (readonly, copy, nonatomic) NSString *canonicalShowID;
@property (readonly, copy, nonatomic) NSString *canonicalSeasonID;
@property (readonly, nonatomic) NSNumber *seasonNumber;
@property (readonly, nonatomic) NSNumber *episodeNumber;
@property (readonly, nonatomic) NSString *seasonTitle;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) NSDate *releaseDate;
@property (readonly, nonatomic) WLKArtworkVariantListing *showImages;
@property (readonly, nonatomic) WLKArtworkVariantListing *seasonImages;
@property (readonly, nonatomic) WLKPlayable *playable;

+ (id)episodesWithDictionaries:(id)a0 context:(id)a1;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 context:(id)a1;
- (id)initWithDictionary:(id)a0 context:(id)a1 playablesDict:(id)a2 playablesId:(id)a3 seasonsDict:(id)a4;

@end
