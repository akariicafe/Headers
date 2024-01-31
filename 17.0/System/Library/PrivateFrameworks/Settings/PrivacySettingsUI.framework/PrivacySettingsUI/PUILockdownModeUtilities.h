@interface PUILockdownModeUtilities : NSObject

+ (BOOL)isLockdownModeEnabled;
+ (BOOL)getCanSetLockdownMode;
+ (BOOL)getCanShowLockdownMode;
+ (BOOL)isCaptivePortalModeIgnoredForContainerPath:(id)a0;
+ (BOOL)isLockdownModeEnabledInAccount;
+ (void)setCaptivePortalModeIgnoredForContainerPath:(id)a0 ignored:(BOOL)a1;
+ (void)setLockdownModeEnabled:(BOOL)a0 forAllDevices:(BOOL)a1 completion:(id /* block */)a2;

@end
