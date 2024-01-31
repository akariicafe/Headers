@class NSData, NSString, NSDate;

@interface EnergyWindowsCache : NSManagedObject

@property (nonatomic, copy) NSData *energyWindows;
@property (nonatomic, copy) NSString *gridID;
@property (nonatomic, copy) NSDate *insertTime;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
