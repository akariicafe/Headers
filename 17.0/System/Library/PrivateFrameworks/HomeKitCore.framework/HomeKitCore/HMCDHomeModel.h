@class NSUUID, NSString;

@interface HMCDHomeModel : NSManagedObject

@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, copy) NSString *name;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
