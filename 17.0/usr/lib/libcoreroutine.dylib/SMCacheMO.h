@class SMReceiverContactMO, NSUUID, SMInitiatorContactMO, SMDeviceStatusMO, NSSet, SMLocationMO, NSData;

@interface SMCacheMO : NSManagedObject

@property (copy, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) SMInitiatorContactMO *initiatorContact;
@property (retain, nonatomic) SMDeviceStatusMO *deviceStatus;
@property (retain, nonatomic) NSSet *locationsDuringSession;
@property (retain, nonatomic) SMLocationMO *unlockLocation;
@property (retain, nonatomic) SMLocationMO *lockLocation;
@property (retain, nonatomic) SMLocationMO *mostRecentLocation;
@property (retain, nonatomic) SMLocationMO *startingLocation;
@property (retain, nonatomic) SMLocationMO *offWristLocation;
@property (retain, nonatomic) SMLocationMO *parkedCarLocation;
@property (retain, nonatomic) NSData *destinationMapItem;
@property (retain, nonatomic) SMReceiverContactMO *receiverContactPhone;
@property (retain, nonatomic) SMReceiverContactMO *receiverContactWatch;

+ (id)fetchRequest;
+ (id)getLocationMOFromLocation:(id)a0 context:(id)a1;
+ (id)getLocationMOFromLocations:(id)a0 context:(id)a1;
+ (id)managedObjectWithCache:(id)a0 inManagedObjectContext:(id)a1;
+ (id)managedObjectWithCache:(id)a0 managedObject:(id)a1 inManagedObjectContext:(id)a2;

@end
