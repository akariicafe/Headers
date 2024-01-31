@class NSUUID, NSString, NSDate;

@interface MapsSyncManagedSharedTripBlockedItem : NSManagedObject

@property (class, nonatomic, readonly) Class wrapperClass;

@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic, copy) NSString *sharedTripIdentifier;
@property (nonatomic) long long expiryTime;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
