@class SHMetadataMO, NSString, NSArray, NSURL, NSDate, NSDictionary, SHGroupMO;

@interface SHTrackMO : NSManagedObject

@property (copy, nonatomic) NSString *albumName;
@property (copy, nonatomic) NSString *appleMusicID;
@property (copy, nonatomic) NSURL *appleMusicURL;
@property (copy, nonatomic) NSURL *artworkURL;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic) BOOL explicit;
@property (retain, nonatomic) NSArray *genres;
@property (copy, nonatomic) NSString *isrc;
@property (retain, nonatomic) NSArray *labels;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (copy, nonatomic) NSDate *modifiedDate;
@property (copy, nonatomic) NSString *providerID;
@property (copy, nonatomic) NSString *providerName;
@property (retain, nonatomic) NSDictionary *rawSongResponse;
@property (copy, nonatomic) NSString *recognitionID;
@property (copy, nonatomic) NSDate *releaseDate;
@property (nonatomic) long long shazamCount;
@property (copy, nonatomic) NSString *shazamKey;
@property (copy, nonatomic) NSURL *shazamURL;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *syncID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSURL *videoURL;
@property (retain, nonatomic) SHGroupMO *group;
@property (retain, nonatomic) SHMetadataMO *metadata;

+ (id)fetchRequest;

@end
