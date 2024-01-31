@interface MDMFindMyUtilities : NSObject

+ (BOOL)isManagedLostModeActive;
+ (void)enableActivationLockWithCompletionHandler:(id /* block */)a0;
+ (BOOL)isActivationLockOn;

@end
