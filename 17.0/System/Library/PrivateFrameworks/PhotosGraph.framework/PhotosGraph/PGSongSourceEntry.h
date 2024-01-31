@class NSString, NSSet, NSDate;

@interface PGSongSourceEntry : NSManagedObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *version;
@property (nonatomic, copy) NSDate *dateLastUpdated;
@property (nonatomic, copy) NSString *geohash;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSString *category;
@property (nonatomic, copy) NSSet *songs;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
