@class NSData;

@interface MapsSyncManagedHistoryRideShareItem : MapsSyncManagedHistoryItem

@property (class, nonatomic, readonly) Class wrapperClass;

@property (nonatomic, copy) NSData *endWaypoint;
@property (nonatomic, copy) NSData *startWaypoint;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
