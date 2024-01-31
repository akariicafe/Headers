@class NSUUID, SMInitiatorContactMO, SMCacheMO, NSDate;

@interface SMLocationMO : NSManagedObject

@property (copy, nonatomic) NSUUID *identifier;
@property (nonatomic) double altitude;
@property (nonatomic) double hunc;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic) double vunc;
@property (retain, nonatomic) SMCacheMO *locationsDuringSession;
@property (retain, nonatomic) SMCacheMO *cacheUnlockLocation;
@property (retain, nonatomic) SMCacheMO *cacheLockLocation;
@property (retain, nonatomic) SMCacheMO *cacheMostRecentLocation;
@property (retain, nonatomic) SMCacheMO *cacheStartingLocation;
@property (retain, nonatomic) SMCacheMO *cacheOffWristLocation;
@property (retain, nonatomic) SMCacheMO *cacheParkedCarLocation;
@property (retain, nonatomic) SMInitiatorContactMO *contactUnlockLocation;
@property (retain, nonatomic) SMInitiatorContactMO *contactLockLocation;
@property (retain, nonatomic) SMInitiatorContactMO *contactStartingLocation;
@property (retain, nonatomic) SMInitiatorContactMO *contactOffWristLocation;
@property (retain, nonatomic) SMInitiatorContactMO *contactParkedCarLocation;

+ (id)fetchRequest;
+ (id)managedObjectWithLocation:(id)a0 managedObject:(id)a1 inManagedObjectContext:(id)a2;
+ (id)managedObjectWithLocation:(id)a0 inManagedObjectContext:(id)a1;

@end
