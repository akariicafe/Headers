@interface NudityDetectionPreferencesHelper : NSObject

+ (id)classForNudityAppDetectionSettings;
+ (BOOL)nudityDetectionAvailableForBundleID:(id)a0;
+ (BOOL)nudityDetectionFeatureEnabled;
+ (id)nudityDetectionOnOffLabelForBundleID:(id)a0;
+ (BOOL)nudityDetectionRowEnabled;
+ (id)nudityDetectionRowIconID;
+ (id)nudityDetectionRowLabel;
+ (id)classForNudityDetectionSettings;
+ (id)mainNudityDetectionFooterText;
+ (id)nudityDetectionOnOffLabel;

- (id)init;

@end
