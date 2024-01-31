@interface BLSHBacklightHost : NSObject

+ (id)sharedBacklightHost;
+ (id)sharedTelemetrySource;
+ (BOOL)checkForWatchdogDidFire:(BOOL)a0;
+ (void)registerSharedBacklightHost:(id)a0;

@end
