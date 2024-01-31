@class NSString, NSArray, _BlastDoorLPImage, _BlastDoorLPVideo;

@interface _BlastDoorLPiTunesMediaSoftwareMetadata : _BlastDoorLPSpecializationMetadata

@property (copy, nonatomic) NSString *storeFrontIdentifier;
@property (copy, nonatomic) NSString *storeIdentifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *genre;
@property (copy, nonatomic) NSString *platform;
@property (retain, nonatomic) _BlastDoorLPImage *icon;
@property (copy, nonatomic) NSArray *screenshots;
@property (retain, nonatomic) _BlastDoorLPVideo *previewVideo;
@property (nonatomic) BOOL isMessagesOnlyApp;
@property (retain, nonatomic) _BlastDoorLPImage *messagesAppIcon;

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
