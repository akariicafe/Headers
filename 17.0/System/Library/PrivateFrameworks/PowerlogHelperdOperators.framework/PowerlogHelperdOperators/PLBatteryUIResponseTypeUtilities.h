@interface PLBatteryUIResponseTypeUtilities : NSObject

+ (void)addEntryTypesToEnergyEntriesInBucket:(id)a0 withResponderService:(id)a1;
+ (void)applyDynamicNameTransformation:(id)a0 withResponderService:(id)a1;
+ (void)applyStaticNameTransformation:(id)a0 withResponderService:(id)a1;
+ (void)collapseEnergyEntries:(id)a0;
+ (BOOL)energyEntryHasNegligibleEnergyDrain:(id)a0 filterArray:(id)a1;
+ (void)filterEnergyEntriesByAppTypeFromBucket:(id)a0;
+ (void)filterEnergyEntriesWithRuntimes:(id)a0;
+ (id)getBundleIDToDisplayNameMapWithResponderService:(id)a0;
+ (id)getBundleIDToReplacementBundleIDMap;
+ (id)getDeletedAppBundleIDsWithResponderService:(id)a0;
+ (id)getDeletedAppClipBundleIDsWithResponderService:(id)a0;
+ (id)getEnergyEntry:(id)a0 forBundleID:(id)a1;
+ (id)getInstalledPluginEntries;
+ (id)getNonAppBundleIDs;
+ (id)getPluginBundleIDToEntryMapWithResponderService:(id)a0;
+ (id)getRootNodeBundleIDs;
+ (id)getWebAppBundleIDsWithResponderService:(id)a0;
+ (void)reaccountBackupRestore:(id)a0;
+ (void)reaccountExchangeEntries:(id)a0 withExchangeBundleIDs:(id)a1;
+ (void)replaceBundleIDsWithDisplayNamesForEnergyEntryInBucket:(id)a0 withResponderService:(id)a1;
+ (void)transformDeletedApps:(id)a0 withResponderService:(id)a1;
+ (void)transformPlugins:(id)a0 withResponderService:(id)a1;

@end
