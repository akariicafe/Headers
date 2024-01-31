@class NSString, NSArray, NSURL, NSDateComponents;

@interface INMessageLinkMetadata : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *itemType;
@property (copy, nonatomic) NSString *originalURL;
@property (copy, nonatomic) NSArray *imageURLs;
@property (copy, nonatomic) NSArray *iconURLs;
@property (copy, nonatomic) NSString *creator;
@property (nonatomic) long long linkMediaType;
@property (copy, nonatomic) NSString *iTunesStoreIdentifier;
@property (copy, nonatomic) NSString *iTunesStoreFrontIdentifier;
@property (copy, nonatomic) NSString *songTitle;
@property (copy, nonatomic) NSString *songArtist;
@property (copy, nonatomic) NSString *songAlbum;
@property (copy, nonatomic) NSString *albumName;
@property (copy, nonatomic) NSString *albumArtist;
@property (copy, nonatomic) NSString *musicVideoName;
@property (copy, nonatomic) NSString *musicVideoArtist;
@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *artistGenre;
@property (copy, nonatomic) NSString *playlistName;
@property (copy, nonatomic) NSString *playlistCurator;
@property (copy, nonatomic) NSString *radioName;
@property (copy, nonatomic) NSString *radioCurator;
@property (copy, nonatomic) NSString *softwareName;
@property (copy, nonatomic) NSString *softwareGenre;
@property (copy, nonatomic) NSString *softwarePlatform;
@property (copy, nonatomic) NSString *bookName;
@property (copy, nonatomic) NSString *bookAuthor;
@property (copy, nonatomic) NSString *audioBookName;
@property (copy, nonatomic) NSString *audioBookAuthor;
@property (copy, nonatomic) NSString *audioBookNarrator;
@property (copy, nonatomic) NSString *podcastName;
@property (copy, nonatomic) NSString *podcastArtist;
@property (copy, nonatomic) NSString *podcastEpisodeName;
@property (copy, nonatomic) NSString *podcastEpisodePodcastName;
@property (copy, nonatomic) NSString *podcastEpisodeArtist;
@property (copy, nonatomic) NSDateComponents *podcastEpisodeReleaseDate;
@property (copy, nonatomic) NSString *tvEpisodeEpisodeName;
@property (copy, nonatomic) NSString *tvEpisodeSeasonName;
@property (copy, nonatomic) NSString *tvEpisodeGenre;
@property (copy, nonatomic) NSString *tvSeasonName;
@property (copy, nonatomic) NSString *tvSeasonGenre;
@property (copy, nonatomic) NSString *movieName;
@property (copy, nonatomic) NSString *movieGenre;
@property (copy, nonatomic) NSString *tvShowName;
@property (copy, nonatomic) NSString *movieBundleName;
@property (copy, nonatomic) NSString *movieBundleGenre;
@property (copy, nonatomic) NSString *appleTvTitle;
@property (copy, nonatomic) NSString *appleTvSubtitle;
@property (copy, nonatomic) NSString *siteName;
@property (copy, nonatomic) NSString *summary;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *openGraphType;
@property (copy, nonatomic) NSURL *linkURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;

- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)_dictionaryRepresentation;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSiteName:(id)a0 summary:(id)a1 title:(id)a2 itemType:(id)a3 originalURL:(id)a4 imageURLs:(id)a5 iconURLs:(id)a6 creator:(id)a7 linkMediaType:(long long)a8 iTunesStoreIdentifier:(id)a9 iTunesStoreFrontIdentifier:(id)a10 songTitle:(id)a11 songArtist:(id)a12 songAlbum:(id)a13 albumName:(id)a14 albumArtist:(id)a15 musicVideoName:(id)a16 musicVideoArtist:(id)a17 artistName:(id)a18 artistGenre:(id)a19 playlistName:(id)a20 playlistCurator:(id)a21 radioName:(id)a22 radioCurator:(id)a23 softwareName:(id)a24 softwareGenre:(id)a25 softwarePlatform:(id)a26 bookName:(id)a27 bookAuthor:(id)a28 audioBookName:(id)a29 audioBookAuthor:(id)a30 audioBookNarrator:(id)a31 podcastName:(id)a32 podcastArtist:(id)a33 podcastEpisodeName:(id)a34 podcastEpisodePodcastName:(id)a35 podcastEpisodeArtist:(id)a36 podcastEpisodeReleaseDate:(id)a37 tvEpisodeEpisodeName:(id)a38 tvEpisodeSeasonName:(id)a39 tvEpisodeGenre:(id)a40 tvSeasonName:(id)a41 tvSeasonGenre:(id)a42 movieName:(id)a43 movieGenre:(id)a44 tvShowName:(id)a45 movieBundleName:(id)a46 movieBundleGenre:(id)a47 appleTvTitle:(id)a48 appleTvSubtitle:(id)a49;
- (id)initWithSiteName:(id)a0 summary:(id)a1 title:(id)a2 openGraphType:(id)a3 itemType:(id)a4 linkURL:(id)a5 originalURL:(id)a6 imageURLs:(id)a7 iconURLs:(id)a8 creator:(id)a9 linkMediaType:(long long)a10 iTunesStoreIdentifier:(id)a11 iTunesStoreFrontIdentifier:(id)a12 songTitle:(id)a13 songArtist:(id)a14 songAlbum:(id)a15 albumName:(id)a16 albumArtist:(id)a17 musicVideoName:(id)a18 musicVideoArtist:(id)a19 artistName:(id)a20 artistGenre:(id)a21 playlistName:(id)a22 playlistCurator:(id)a23 radioName:(id)a24 radioCurator:(id)a25 softwareName:(id)a26 softwareGenre:(id)a27 softwarePlatform:(id)a28 bookName:(id)a29 bookAuthor:(id)a30 audioBookName:(id)a31 audioBookAuthor:(id)a32 audioBookNarrator:(id)a33 podcastName:(id)a34 podcastArtist:(id)a35 podcastEpisodeName:(id)a36 podcastEpisodePodcastName:(id)a37 podcastEpisodeArtist:(id)a38 podcastEpisodeReleaseDate:(id)a39 tvEpisodeEpisodeName:(id)a40 tvEpisodeSeasonName:(id)a41 tvEpisodeGenre:(id)a42 tvSeasonName:(id)a43 tvSeasonGenre:(id)a44 movieName:(id)a45 movieGenre:(id)a46 tvShowName:(id)a47 movieBundleName:(id)a48 movieBundleGenre:(id)a49 appleTvTitle:(id)a50 appleTvSubtitle:(id)a51;
- (id)initWithSiteName:(id)a0 summary:(id)a1 title:(id)a2 openGraphType:(id)a3 linkURL:(id)a4;

@end
