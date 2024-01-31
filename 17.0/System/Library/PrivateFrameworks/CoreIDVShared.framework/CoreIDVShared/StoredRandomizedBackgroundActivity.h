@class NSString, NSDate;

@interface StoredRandomizedBackgroundActivity : NSManagedObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSDate *lastAttemptAt;
@property (nonatomic, copy) NSDate *lastSuccessfulAttemptAt;
@property (nonatomic, copy) NSDate *nextAttemptAt;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
