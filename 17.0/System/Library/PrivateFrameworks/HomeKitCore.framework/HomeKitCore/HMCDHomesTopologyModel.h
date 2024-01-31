@class NSUUID;

@interface HMCDHomesTopologyModel : NSManagedObject

@property (nonatomic, copy) NSUUID *modelID;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
