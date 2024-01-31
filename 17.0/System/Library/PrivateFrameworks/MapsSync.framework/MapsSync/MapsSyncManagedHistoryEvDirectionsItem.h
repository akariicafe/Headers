@class NSString;

@interface MapsSyncManagedHistoryEvDirectionsItem : MapsSyncManagedHistoryDirectionsItem

@property (class, nonatomic, readonly) Class wrapperClass;

@property (nonatomic) double requiredCharge;
@property (nonatomic, copy) NSString *vehicleIdentifier;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
