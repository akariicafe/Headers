@interface ATXAppPanelLaunchRatioLogger : NSObject

+ (void)logNonAppPanelAppLaunchFromDock;
+ (id)_getOrCreateDataDictionaryFromDefaults:(id)a0;
+ (int)_homeScreenLocationFromPageIndex:(unsigned long long)a0;
+ (void)_logRatioMetricToTracker:(id)a0 location:(int)a1 ratioType:(int)a2 numAppLaunches:(unsigned long long)a3 numAppsShown:(unsigned long long)a4;
+ (void)_writeDataDictionaryToDefaults:(id)a0 dataDictionary:(id)a1;
+ (void)logAppPanelAppLaunchWithSBPageIndex:(unsigned long long)a0;
+ (void)logAppPanelAppLaunchWithSBPageIndex:(unsigned long long)a0 userDefaults:(id)a1;
+ (void)logCountedAppLaunchesToEventTracker;
+ (void)logCountedAppLaunchesToEventTracker:(id)a0 homeScreenConfigCache:(id)a1 userDefaults:(id)a2;
+ (void)logCountedAppLaunchesToEventTracker:(id)a0 homeScreenPage:(id)a1 dataDictionary:(id)a2;
+ (void)logCountedDockLaunchesToEventTracker:(id)a0 dockAppList:(id)a1 dataDictionary:(id)a2;
+ (void)logNonAppPanelAppLaunchFromDockWithUserDefaults:(id)a0;
+ (void)logNonAppPanelAppLaunchWithSBPageIndex:(unsigned long long)a0;
+ (void)logNonAppPanelAppLaunchWithSBPageIndex:(unsigned long long)a0 userDefaults:(id)a1;

@end
