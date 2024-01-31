@interface CNMobileKeyBag : NSObject

+ (BOOL)isDevicePasscodeProtected;
+ (BOOL)isDeviceUnlockedSinceBoot;
+ (const char *)firstUnlockNotificationID;

@end
