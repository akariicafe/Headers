@class NSString, NSDictionary, NSDate, NSNumber;

@interface ICStoreFinanceItemMetadata : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSDictionary *metadataDictionary;
@property (readonly, copy, nonatomic) NSNumber *itemAdamID;
@property (readonly, copy, nonatomic) NSNumber *itemCloudID;
@property (readonly, copy, nonatomic) NSString *itemName;
@property (readonly, copy, nonatomic) NSString *itemSortName;
@property (readonly, copy, nonatomic) NSString *artistName;
@property (readonly, copy, nonatomic) NSString *artistSortName;
@property (readonly, copy, nonatomic) NSNumber *artistID;
@property (readonly, copy, nonatomic) NSString *playlistName;
@property (readonly, copy, nonatomic) NSString *albumSortName;
@property (readonly, copy, nonatomic) NSString *playlistArtistName;
@property (readonly, copy, nonatomic) NSString *composerName;
@property (readonly, copy, nonatomic) NSString *composerSortName;
@property (readonly, copy, nonatomic) NSString *genre;
@property (readonly, copy, nonatomic) NSNumber *genreID;
@property (readonly, copy, nonatomic) NSNumber *playlistID;
@property (readonly, copy, nonatomic) NSNumber *discCount;
@property (readonly, copy, nonatomic) NSNumber *discNumber;
@property (readonly, copy, nonatomic) NSNumber *trackCount;
@property (readonly, copy, nonatomic) NSNumber *trackNumber;
@property (readonly, copy, nonatomic) NSNumber *duration;
@property (readonly, copy, nonatomic) NSNumber *isExplicit;
@property (readonly, copy, nonatomic) NSNumber *year;
@property (readonly, copy, nonatomic) NSNumber *bitrate;
@property (readonly, copy, nonatomic) NSString *comments;
@property (readonly, copy, nonatomic) NSDate *dateAdded;
@property (readonly, copy, nonatomic) NSNumber *drmVersionNumber;
@property (readonly, copy, nonatomic) NSString *fileExtension;
@property (readonly, copy, nonatomic) NSNumber *isGapless;
@property (readonly, copy, nonatomic) NSNumber *isMasteredForITunes;
@property (readonly, copy, nonatomic) NSString *kind;
@property (readonly, copy, nonatomic) NSNumber *sampleRate;
@property (readonly, copy, nonatomic) NSNumber *versionRestrictions;
@property (readonly, copy, nonatomic) NSString *xid;
@property (readonly, copy, nonatomic) NSNumber *isCompilation;
@property (readonly, copy, nonatomic) NSString *copyright;
@property (readonly, copy, nonatomic) NSNumber *rank;
@property (readonly, copy, nonatomic) NSDate *releaseDate;
@property (readonly, copy, nonatomic) NSNumber *storefrontID;
@property (readonly, copy, nonatomic) NSNumber *vendorID;

- (id)initWithMetadataDictionary:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)albumID;

@end
