@class NSUUID, NSString;

@interface HMCDUserModel : NSManagedObject

@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, copy) NSString *handle;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
