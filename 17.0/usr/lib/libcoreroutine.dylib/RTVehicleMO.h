@class NSString, NSDate;

@interface RTVehicleMO : NSManagedObject

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSString *bluetoothAddress;
@property (copy, nonatomic) NSString *vehicleName;
@property (copy, nonatomic) NSString *vehicleModelName;

+ (id)fetchRequest;
+ (id)managedObjectWithVehicle:(id)a0 inManagedObjectContext:(id)a1;

@end
