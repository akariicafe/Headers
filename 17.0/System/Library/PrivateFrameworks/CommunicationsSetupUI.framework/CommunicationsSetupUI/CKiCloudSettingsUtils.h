@interface CKiCloudSettingsUtils : NSObject

+ (id)localizedDeviceName;
+ (id)iCloudSettingsSyncText;
+ (id)lastSyncedDateStringForDate:(id)a0 inContext:(long long)a1;
+ (id)localizedStringWithKey:(id)a0 inPlistNamed:(id)a1;
+ (id)sharedNumberFormatter;
+ (id)specifierWithTitle:(id)a0 target:(id)a1 selector:(SEL)a2;

@end
