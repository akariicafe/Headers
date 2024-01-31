@class NSData;

@interface MapsSyncManagedHistoryTransitItem : MapsSyncManagedHistoryItem

@property (class, nonatomic, readonly) Class wrapperClass;

@property (nonatomic) long long muid;
@property (nonatomic, copy) NSData *transitLineStorage;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
