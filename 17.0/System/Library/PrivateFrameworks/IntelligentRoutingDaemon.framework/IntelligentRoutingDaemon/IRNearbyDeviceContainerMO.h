@class NSSet, IRReplayEventMO, NSDate;

@interface IRNearbyDeviceContainerMO : NSManagedObject

@property (retain, nonatomic) NSDate *freezeDateNIHomeDevice;
@property (retain, nonatomic) NSSet *nearbyDevices;
@property (retain, nonatomic) IRReplayEventMO *replayEvent;

+ (id)fetchRequest;
+ (id)nearbyDeviceContainerMOWithNearbyDeviceContainerDO:(id)a0 replayEvent:(id)a1 inManagedObjectContext:(id)a2;
+ (void)setPropertiesOfNearbyDeviceContainerMO:(id)a0 withNearbyDeviceContainerDO:(id)a1 inManagedObjectContext:(id)a2;

- (id)convert;

@end
