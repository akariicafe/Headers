@class NSMutableSet;

@interface PLHelperdLifecycleManager : NSObject

@property (retain) NSMutableSet *activeServices;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)serviceNameFor:(long long)a0;
- (BOOL)isServiceActive:(long long)a0;
- (void)signalServiceActive:(long long)a0;
- (void)signalServiceInactive:(long long)a0;
- (void)stopPowerlogHelperd;

@end
