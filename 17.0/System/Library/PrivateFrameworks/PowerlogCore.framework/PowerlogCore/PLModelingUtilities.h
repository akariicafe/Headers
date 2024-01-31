@interface PLModelingUtilities : NSObject

+ (BOOL)isWatch;
+ (BOOL)internalBuild;
+ (BOOL)isiPad;
+ (BOOL)carrierBuild;
+ (BOOL)isiPhone;
+ (BOOL)isMac;
+ (BOOL)isAppleTV;
+ (BOOL)hasAOD;
+ (BOOL)isTVOS;
+ (BOOL)isARMMac;
+ (BOOL)isiPod;
+ (BOOL)isHomePod;
+ (BOOL)alsCurveHigherThanDefault;
+ (double)defaultBatteryEnergyCapacity;
+ (double)duetDiscretionaryBudget;
+ (double)getDefaultL0bThresholdForDeviceType;
+ (BOOL)isHeySiriAlwaysOn;
+ (BOOL)isLowPowerModeSupported;
+ (BOOL)isNarrowScreen;
+ (BOOL)isPercentageSupported;
+ (double)networkingEnergyWithBytes:(int)a0 withDuration:(double)a1;
+ (BOOL)shouldShowBatteryGraphs;
+ (id)valueForMobileGestaltCapability:(id)a0;

@end
