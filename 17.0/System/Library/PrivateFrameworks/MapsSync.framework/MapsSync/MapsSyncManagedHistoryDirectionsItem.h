@class NSData;

@interface MapsSyncManagedHistoryDirectionsItem : MapsSyncManagedHistoryItem

@property (class, nonatomic, readonly) Class wrapperClass;

@property (nonatomic) BOOL navigationInterrupted;
@property (nonatomic, copy) NSData *routeRequestStorage;
@property (nonatomic, copy) NSData *sharedETAData;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
