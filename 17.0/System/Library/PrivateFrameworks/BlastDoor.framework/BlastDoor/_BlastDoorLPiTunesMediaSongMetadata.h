@class NSString, NSArray, _BlastDoorLPImage, NSURL, _BlastDoorLPArtworkMetadata, _BlastDoorLPLyricExcerptMetadata;

@interface _BlastDoorLPiTunesMediaSongMetadata : _BlastDoorLPSpecializationMetadata

@property (copy, nonatomic) NSString *storeFrontIdentifier;
@property (copy, nonatomic) NSString *storeIdentifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *artist;
@property (copy, nonatomic) NSString *album;
@property (copy, nonatomic) NSString *lyrics;
@property (retain, nonatomic) _BlastDoorLPImage *artwork;
@property (copy, nonatomic) _BlastDoorLPArtworkMetadata *artworkMetadata;
@property (copy, nonatomic) NSURL *previewURL;
@property (copy, nonatomic) NSArray *offers;
@property (copy, nonatomic) _BlastDoorLPLyricExcerptMetadata *lyricExcerpt;

+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_enumerateAsynchronousFields:(id /* block */)a0;

@end
