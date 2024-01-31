@class NSDate, NSString, NSArray, NSURL, SHShazamKey, NSSet, NSDictionary, NSMutableSet, CLLocation, SHMediaItem, SHMediaLibraryItemMetadata;

@interface SHMediaLibraryTrack : NSObject <SHMediaLibraryItem>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableSet *labelSet;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSURL *artworkURL;
@property (retain, nonatomic) NSURL *shazamURL;
@property (retain, nonatomic) SHShazamKey *shazamKey;
@property (retain, nonatomic) CLLocation *location;
@property (copy, nonatomic) NSString *providerName;
@property (copy, nonatomic) NSString *providerIdentifier;
@property (copy, nonatomic) NSString *recognitionIdentifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *associatedGroupIdentifier;
@property (copy, nonatomic) NSString *albumName;
@property (copy, nonatomic) NSString *appleMusicID;
@property (copy, nonatomic) NSString *isrc;
@property (retain, nonatomic) NSURL *appleMusicURL;
@property (retain, nonatomic) NSArray *genres;
@property (retain, nonatomic) NSDate *releaseDate;
@property (retain, nonatomic) NSURL *videoURL;
@property (retain, nonatomic) NSDictionary *rawSongResponse;
@property (nonatomic) BOOL explicitContent;
@property (nonatomic) long long shazamCount;
@property (retain, nonatomic) NSDate *lastUpdatedDate;
@property (readonly, nonatomic) NSSet *labels;
@property (readonly, nonatomic) SHMediaItem *mediaItemValue;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) SHMediaLibraryItemMetadata *metadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addLabel:(id)a0;
- (id)initWithMediaItem:(id)a0;
- (id)_initWithIdentifier:(id)a0 metadata:(id)a1 labels:(id)a2;
- (void)addPlatformLabel;
- (id)initWithIdentifier:(id)a0 builder:(id /* block */)a1;
- (id)initWithIdentifier:(id)a0 metadata:(id)a1 builder:(id /* block */)a2;
- (id)initWithManagedTrack:(id)a0;
- (BOOL)isEqualTrack:(id)a0;
- (id)platformLabel;
- (void)updateWithBuilderBlock:(id /* block */)a0;
- (void)updateWithMediaItem:(id)a0;

@end
