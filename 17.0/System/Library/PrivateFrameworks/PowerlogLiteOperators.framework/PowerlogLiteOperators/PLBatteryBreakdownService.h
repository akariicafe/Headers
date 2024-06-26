@class NSSet, NSDictionary;

@interface PLBatteryBreakdownService : PLService

@property (retain, nonatomic) NSSet *rootNodeNames;
@property (retain, nonatomic) NSSet *nonAppNames;
@property (retain, nonatomic) NSSet *intermediateRootNodes;
@property (retain, nonatomic) NSSet *deletedAppNames;
@property (retain, nonatomic) NSSet *deletedAppClipNames;
@property (retain, nonatomic) NSSet *webAppNames;
@property (retain, nonatomic) NSDictionary *nodeIDToNodeName;
@property (retain, nonatomic) NSDictionary *installedBundleIDToDisplayName;
@property (retain, nonatomic) NSDictionary *installedPluginBundleIDToPluginEntry;
@property (retain, nonatomic) NSDictionary *gizmoDaemonToAppBundleID;
@property (retain, nonatomic) NSDictionary *gizmoIDSTopicToAppBundleID;
@property (retain, nonatomic) NSDictionary *rootNodeNameToRootNodeEnergyKey;
@property (retain, nonatomic) NSDictionary *givenNameToMappedName;
@property BOOL showGizmoQualifier;
@property double totalEnergyDay;
@property double totalEnergyWeek;
@property BOOL hasHomeKitActivity;

+ (id)defaults;
+ (void)load;
+ (id)appNameForBundleID:(id)a0;
+ (id)installedPlugins;
+ (BOOL)canSetQualifier:(int)a0 forBundleID:(id)a1;
+ (id)combineQualifiers:(id)a0;
+ (id)pluginEntryFromRecord:(id)a0;
+ (id)rootNodeQualificationNameWithQualificationName:(id)a0 withRootNodeName:(id)a1;
+ (id)whereValidName;

- (void)clearState;
- (void).cxx_destruct;
- (BOOL)isBackgroundRefreshEnabled:(id)a0;
- (double)computeTotalForegroundDuration:(id)a0;
- (int)appTypeForName:(id)a0;
- (double)computeTotalBackgroundDuration:(id)a0;
- (BOOL)shouldShowOngoingRestoreInsight;
- (id)addForegroundAndBackgroundDurations:(id)a0 withRange:(struct _PLTimeIntervalRange { double x0; double x1; })a1 withQueryType:(int)a2;
- (id)addNotificationValues:(id)a0 withRange:(struct _PLTimeIntervalRange { double x0; double x1; })a1 withQueryType:(int)a2;
- (id)adjustBackgroundTimesWithEnergyEntries:(id)a0;
- (id)adjustExtensionBackgroundTimeWithEnergyEntries:(id)a0;
- (id)adjustFGBGTimeForNonAppEnergyEntry:(id)a0;
- (id)adjustForegroundTimesWithEnergyEntries:(id)a0;
- (id)applyDynamicNameTransformationsWithEnergyEntries:(id)a0;
- (id)applyStaticNameTransformationsWithEnergyEntries:(id)a0;
- (id)batteryBreakdownWithTimeRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0 withDataRange:(struct _PLTimeIntervalRange { double x0; double x1; })a1 withEntryTimeInterval:(double)a2 withQueryType:(int)a3;
- (id)batteryBreakdownWithTimeRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0 withDataRange:(struct _PLTimeIntervalRange { double x0; double x1; })a1 withEntryTimeInterval:(double)a2 withQueryType:(int)a3 withTotalSumEnergyRatioCutOff:(double)a4;
- (id)bundleIDsForMappedName:(id)a0;
- (BOOL)checkHomeKitEvents;
- (id)combineDuplicatesWithEnergyEntries:(id)a0;
- (id)determineDisplayNamesWithEnergyEntries:(id)a0;
- (id)energyEntriesWithRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0 withEntryTimeInterval:(double)a1 withQueryType:(int)a2;
- (short)energyMetricBucketForRootNodeID:(id)a0;
- (id)filterEnergyEntriesBasedOnTime:(id)a0 withQueryType:(int)a1;
- (id)filterWithEnergyEntries:(id)a0 withQueryType:(int)a1;
- (double)getLastUpgradeTimestamp;
- (id)getUpgradeDataWithLastUpgradeTimestamp:(double)a0 withFirstEntryTimestampFromDB:(double)a1 withNow:(id)a2 withBeforeUpgrade:(BOOL)a3 withRange:(struct _PLTimeIntervalRange { double x0; double x1; })a4;
- (id)getUsageDataWithStartTime:(double)a0 withMidTime:(double)a1 withEndTime:(id)a2;
- (double)getfirstEntryTimestampFromDb;
- (BOOL)inDemoMode;
- (BOOL)isBackgroundLocationUsageAlwaysEnabled:(id)a0 withLocationDict:(id)a1;
- (BOOL)isForegroundOnlyBucket:(short)a0;
- (id)mapCloudDocsToAppsWithEnergyEntries:(id)a0;
- (id)mapDeletedAppsWithEnergyEntries:(id)a0;
- (id)mapGizmoToAppsWithEnergyEntries:(id)a0;
- (id)mapPluginsToAppsWithEnergyEntries:(id)a0;
- (int)minimumRequiredQueryTypeForAppType:(int)a0;
- (double)nonAppRuntimeWithEventForwardTableName:(id)a0 withRange:(struct _PLTimeIntervalRange { double x0; double x1; })a1 andIdentificationKey:(id)a2;
- (id)nonAppsRuntimesWithRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0;
- (id)nonNullValue:(id)a0 withKey:(id)a1;
- (id)pluginBundleIDsforBundleID:(id)a0;
- (id)populateBLDKeysWithEnergyEntries:(id)a0;
- (id)populateEnergyBucketKeysWithEntries:(id)a0;
- (id)populateRootNodeEnergyKeysWithEnergyEntries:(id)a0;
- (id)qualifiersWithEnergyEntry:(id)a0 bucketSize:(double)a1 andTotalEnergy:(double)a2;
- (id)reaccountBackupRestoreWithEnergyEntries:(id)a0;
- (id)reaccountExchangeEntriesWithEnergyEntries:(id)a0;
- (id)removeNodesNotToShowInInternalUI:(id)a0 withQueryType:(int)a1;
- (BOOL)shouldShowBatteryBreakdownWithTotalSumEnergy:(double)a0 withtotalSumEnergyRatioCutOff:(double)a1;
- (BOOL)shouldShowUpgradeInsightWithQueryType:(int)a0;
- (BOOL)shouldSuggestAutoBrightnessWithEnergyEntries:(id)a0 andSavedEnergyPercent:(double *)a1;
- (BOOL)shouldSuggestAutoLockWithEnergyEntries:(id)a0 andSavedEnergyPercent:(double *)a1;
- (id)shouldSuggestBackgroundCPUWithEnergyEntries:(id)a0;
- (id)shouldSuggestBackgroundLocationWithEnergyEntries:(id)a0;
- (BOOL)shouldSuggestReduceBrightnessWithEnergyEntries:(id)a0 andSavedEnergyPercent:(double *)a1;
- (BOOL)showRootNodesInInternal;
- (id)suggestionsWithEnergyEntries:(id)a0;
- (double)totalSumEnergyRatioCutOff;
- (BOOL)wasGizmoConnectedInRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0;

@end
