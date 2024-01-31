@class NSArray;

@interface GKViceroyNATConfiguration : NSObject

@property (class, readonly, nonatomic) NSArray *settingsKeys;

+ (void)applySettings:(id)a0;
+ (id)externalAddressForSelfConnectionData:(id)a0;

@end
