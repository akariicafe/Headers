@class NSData, NSString, NSNumber;

@interface MapsSyncManagedHistoryMultiPointRoute : MapsSyncManagedHistoryItem

@property (class, nonatomic, readonly) Class wrapperClass;

@property (nonatomic) BOOL navigationInterrupted;
@property (nonatomic) short routeProgressWaypointIndex;
@property (nonatomic, copy) NSData *routeRequestStorage;
@property (nonatomic, copy) NSData *sharedETAData;
@property (nonatomic) short type;
@property (nonatomic, copy) NSString *vehicleIdentifier;
@property (nonatomic, retain) NSNumber *requiredCharge;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
