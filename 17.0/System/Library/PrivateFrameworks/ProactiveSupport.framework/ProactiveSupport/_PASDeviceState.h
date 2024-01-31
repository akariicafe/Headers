@interface _PASDeviceState : NSObject

+ (BOOL)isUnlocked;
+ (id)currentOsBuild;
+ (void)runBlockWhenDeviceIsClassCUnlockedWithQoS:(unsigned int)a0 block:(id /* block */)a1;
+ (int)lockState;
+ (void *)registerForAKSEventsNotifications:(id /* block */)a0;
+ (BOOL)isClassCLocked;
+ (id)registerForLockStateChangeNotifications:(id /* block */)a0;
+ (void)runBlockWhenDeviceIsClassCUnlocked:(id /* block */)a0;
+ (BOOL)isDeviceFormattedForProtection;
+ (void)unregisterForLockStateChangeNotifications:(id)a0;
+ (void)setSystemCallbacks:(const struct _PASDeviceStateSystemCallbacks { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; } *)a0;
+ (void)unregisterForAKSEventsNotifications:(void *)a0;
+ (void)setDefaultSystemCallbacks;

@end
