@interface ATXNotificationsSettingsLogger : NSObject

+ (id)getAppGenreFromBundleId:(id)a0;

- (double)getSamplingRate;
- (id)convertToPBFormat:(id)a0 setting:(id)a1;
- (id)createPBSettingForBundleID:(id)a0 settings:(id)a1;
- (id)getAggregatedData:(id)a0 totalApps:(int)a1;
- (id)getAppUsageDataForBundleID:(id)a0;
- (void)logNotificationSettingsWithActivity:(id)a0;
- (id)retrieveLogWithActivity:(id)a0;
- (id)retrieveSettingsForBundleIDs:(id)a0;
- (id)wrapLog:(id)a0;

@end
