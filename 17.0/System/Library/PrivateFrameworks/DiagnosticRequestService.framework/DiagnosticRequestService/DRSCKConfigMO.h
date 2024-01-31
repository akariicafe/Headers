@interface DRSCKConfigMO : NSManagedObject

@property (nonatomic) short containerEnvironment;
@property (nonatomic) BOOL overridesDefault;
@property (nonatomic) short rapidEnvironment;

+ (id)fetchRequest;

@end
