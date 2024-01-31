@class NSString, IRNearbyDeviceContainerMO, NSDate;

@interface IRNearbyDeviceMO : NSManagedObject

@property (copy, nonatomic) NSString *idsIdentifier;
@property (copy, nonatomic) NSDate *measurementDate;
@property (copy, nonatomic) NSString *mediaRemoteIdentifier;
@property (nonatomic) double range;
@property (copy, nonatomic) NSString *proximityType;
@property (retain, nonatomic) IRNearbyDeviceContainerMO *nearbyDeviceContainer;

+ (id)fetchRequest;
+ (id)nearbyDeviceMOWithNearbyDeviceDO:(id)a0 nearbyDeviceContainer:(id)a1 inManagedObjectContext:(id)a2;
+ (void)setPropertiesOfnearbyDeviceMO:(id)a0 withNearbyDeviceDO:(id)a1;

- (id)convert;

@end
