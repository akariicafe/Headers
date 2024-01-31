@class NSUUID, NSDate;

@interface MapsSyncManagedHistoryItem : NSManagedObject

@property (class, nonatomic, readonly) Class wrapperClass;

@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic) double position;
@property (nonatomic) long long positionIndex;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
