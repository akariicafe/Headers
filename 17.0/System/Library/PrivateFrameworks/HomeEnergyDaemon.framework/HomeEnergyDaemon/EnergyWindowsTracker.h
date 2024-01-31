@class NSString, NSDate;

@interface EnergyWindowsTracker : NSManagedObject

@property (nonatomic, copy) NSString *gridID;
@property (nonatomic, copy) NSDate *lastAccessed;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
