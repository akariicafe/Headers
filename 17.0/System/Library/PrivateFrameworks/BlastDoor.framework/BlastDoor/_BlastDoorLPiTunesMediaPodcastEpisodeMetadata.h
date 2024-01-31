@class NSString, NSArray, _BlastDoorLPImage, NSDate, _BlastDoorLPArtworkMetadata;

@interface _BlastDoorLPiTunesMediaPodcastEpisodeMetadata : _BlastDoorLPSpecializationMetadata

@property (copy, nonatomic) NSString *storeFrontIdentifier;
@property (copy, nonatomic) NSString *storeIdentifier;
@property (copy, nonatomic) NSString *episodeName;
@property (copy, nonatomic) NSString *podcastName;
@property (copy, nonatomic) NSString *artist;
@property (copy, nonatomic) NSDate *releaseDate;
@property (retain, nonatomic) _BlastDoorLPImage *artwork;
@property (copy, nonatomic) _BlastDoorLPArtworkMetadata *artworkMetadata;
@property (copy, nonatomic) NSArray *offers;

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
