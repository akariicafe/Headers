@class NSString, PGSongEntry;

@interface PGSongPlaybackInfoEntry : NSManagedObject

@property (nonatomic, copy) NSString *dateUTC;
@property (nonatomic, copy) NSString *hoursUTC;
@property (nonatomic, copy) NSString *lastEndReason;
@property (nonatomic) long long playCount;
@property (nonatomic) long long skipCount;
@property (nonatomic) long long playDurationInMilliseconds;
@property (nonatomic, copy) NSString *devices;
@property (nonatomic) BOOL ignoreForRecommendations;
@property (nonatomic, retain) PGSongEntry *song;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
