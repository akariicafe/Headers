@class NSUUID, SMCacheMO, NSDate;

@interface SMDeviceStatusMO : NSManagedObject

@property (copy, nonatomic) NSUUID *identifier;
@property (nonatomic) short batteryRemaining;
@property (nonatomic) short cellularStrength;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic) short wifiStrength;
@property (retain, nonatomic) SMCacheMO *cache;

+ (id)fetchRequest;
+ (id)managedObjectWithDeviceStatus:(id)a0 inManagedObjectContext:(id)a1;
+ (id)managedObjectWithDeviceStatus:(id)a0 managedObject:(id)a1 inManagedObjectContext:(id)a2;

@end
