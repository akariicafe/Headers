@class NSString, NSDate;

@interface ManagedDirtySyncZone : NSManagedObject

@property (nonatomic, copy) NSDate *timestamp;
@property (nonatomic, copy) NSString *zoneName;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
