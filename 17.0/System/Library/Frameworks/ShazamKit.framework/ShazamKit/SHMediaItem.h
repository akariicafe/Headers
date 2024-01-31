@class NSUUID, NSString, NSDictionary, NSDate, NSArray, NSURL;

@interface SHMediaItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *underlyingIdentifier;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly, copy, nonatomic) NSString *fuzzyRepresentation;
@property (readonly, nonatomic) NSDate *releaseDate;
@property (readonly, copy, nonatomic) NSString *albumName;
@property (readonly, copy, nonatomic) NSArray *staticLyricLines;
@property (readonly, copy, nonatomic) NSString *lyricsSnippet;
@property (retain, nonatomic) NSDictionary *_rawResponseSongs;
@property (readonly, nonatomic) long long shazamCount;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSString *shazamID;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *artist;
@property (readonly, nonatomic) NSArray *genres;
@property (readonly, copy, nonatomic) NSString *appleMusicID;
@property (readonly, nonatomic) NSURL *appleMusicURL;
@property (readonly, nonatomic) NSURL *webURL;
@property (readonly, nonatomic) NSURL *artworkURL;
@property (readonly, nonatomic) NSURL *videoURL;
@property (readonly, nonatomic) BOOL explicitContent;
@property (readonly, copy, nonatomic) NSString *isrc;
@property (readonly, nonatomic) NSArray *timeRanges;
@property (readonly, nonatomic) NSArray *frequencySkewRanges;
@property (readonly, nonatomic) NSDate *creationDate;

+ (id)serverConnection;
+ (void)fetchMediaItemWithShazamID:(id)a0 completionHandler:(id /* block */)a1;
+ (void)fetchMediaItemsWithShazamIDs:(id)a0 completionHandler:(id /* block */)a1;
+ (id)mediaItemWithDictionary:(id)a0;
+ (id)mediaItemWithProperties:(id)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)valueForProperty:(id)a0;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithProperties:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)describesFrequencySkew:(double)a0;
- (BOOL)describesOffset:(double)a0;
- (BOOL)isEqualMediaItem:(id)a0;
- (id)validValueForProperty:(id)a0;

@end
