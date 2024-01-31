@interface TVRUIFeatures : NSObject

+ (BOOL)_isInternalInstall;
+ (BOOL)cleandogEnabled;
+ (BOOL)ghostdogEnabled;
+ (BOOL)corianderEnabled;
+ (BOOL)findMyEnabled;
+ (BOOL)isWakeToRemoteOnLockScreenDisabled;
+ (BOOL)rapportEnabled;
+ (BOOL)updogEnabled;
+ (BOOL)swapBackPlayPauseButtonsEnabled;
+ (id)_globalPrefForKey:(id)a0;
+ (BOOL)_valueForInternalInstallWithBlock:(id /* block */)a0;
+ (BOOL)isCorianderDebugUIEnabled;
+ (BOOL)isHintsDebugUIEnabled;
+ (BOOL)isTapToRadarEnabled;
+ (BOOL)persistHintsUIEnabled;

@end
