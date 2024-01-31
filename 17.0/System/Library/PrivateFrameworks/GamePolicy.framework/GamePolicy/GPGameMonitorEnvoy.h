@interface GPGameMonitorEnvoy : NSObject

+ (id)sharedInstance;
+ (id)shared;
+ (BOOL)applicationIsIdentifiedGame:(id)a0 info:(id)a1 entitlements:(id)a2;
+ (BOOL)deviceSupportsGamePolicy;
+ (id)gameCategories;

- (id)init;
- (void)gameDidLaunch:(id)a0;
- (void)_sb_gameDidLaunch:(id)a0;

@end
