@class NSString, NSSet;

@interface HealthPlatformCore.Plugin : NSManagedObject

@property (nonatomic, copy) NSString *package;
@property (nonatomic, copy) NSSet *allPluginData;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
