@interface MCBatterySaverMode : NSObject

+ (id)setOfActiveRestrictionUUIDs;
+ (BOOL)isBatterySaverModeActive;
+ (id)currentBatterySaverRestrictions;
+ (id)batterySaverRestrictions;
+ (id)currentBatterySaverRestrictions:(int)a0;
+ (BOOL)isBatterySaverModeActive:(int)a0;

@end
