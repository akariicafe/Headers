@interface _KSDeviceStateMonitor : NSObject

@property (nonatomic) BOOL isContentProtectionAvailable;

+ (BOOL)isRunningOnInternalBuild;
+ (id)deviceStateMonitor;

- (id)init;
- (BOOL)deviceIsPasswordConfigured;
- (void)dealloc;
- (BOOL)isDataAvailableForClassC;
- (BOOL)deviceHasBeenUnlockedSinceBoot;
- (void)handleKeyBagLockNotification;

@end
