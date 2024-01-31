@class NSString, NSSet, NSData, _TtC18HealthPlatformCore6Plugin;

@interface HealthPlatformCore.PluginData : NSManagedObject

@property (nonatomic, copy) NSString *uniqueIdentifier;
@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) NSSet *profiles;
@property (nonatomic, retain) _TtC18HealthPlatformCore6Plugin *plugin;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
