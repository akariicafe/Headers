@class NSUUID, NSDate;

@interface SMInitiatorLocationMO : NSManagedObject

@property (copy, nonatomic) NSUUID *identifier;
@property (nonatomic) double altitude;
@property (nonatomic) double hunc;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic) double vunc;

+ (id)fetchRequest;
+ (id)managedObjectWithLocation:(id)a0 managedObject:(id)a1 inManagedObjectContext:(id)a2;
+ (id)managedObjectWithLocation:(id)a0 inManagedObjectContext:(id)a1;

@end
