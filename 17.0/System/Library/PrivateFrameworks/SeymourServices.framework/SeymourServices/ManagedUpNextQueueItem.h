@class NSString, NSDate;

@interface ManagedUpNextQueueItem : NSManagedObject

@property (nonatomic, copy) NSDate *dateAdded;
@property (nonatomic) double duration;
@property (nonatomic) long long healthKitActivityType;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) long long index;
@property (nonatomic, copy) NSString *mediaType;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
