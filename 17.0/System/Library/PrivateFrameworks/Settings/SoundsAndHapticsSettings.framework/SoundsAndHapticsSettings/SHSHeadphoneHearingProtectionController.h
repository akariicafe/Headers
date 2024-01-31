@class NSArray, HKHealthStore, NSNumberFormatter, ADASManager, NSNumber;

@interface SHSHeadphoneHearingProtectionController : PSListController

@property (retain, nonatomic) ADASManager *audioSettingsManager;
@property (nonatomic, getter=isDeviceiPad) BOOL DeviceiPad;
@property (nonatomic, getter=isDeviceiPod) BOOL DeviceiPod;
@property (nonatomic, getter=isDeviceInRetailKioskMode) BOOL DeviceInRetailKioskMode;
@property (readonly, nonatomic) BOOL shouldShowHeadphoneNotificationsSection;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) NSArray *weeklyNotificationData;
@property (nonatomic) int weeklyNotificationCount;
@property (retain, nonatomic) NSNumberFormatter *numberFormatter;
@property (retain, nonatomic) NSNumber *levelLimitThreshold;

- (void)dismiss;
- (id)startDate;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (id)endDate;
- (void)loadView;
- (id)specifiers;
- (void).cxx_destruct;
- (id)deviceTypeString;
- (void)openAboutHeadphoneNotifications;
- (id)getHeadphoneLevelLimitEnabled;
- (id)getHeadphoneLevelLimitSetting;
- (id)getHeadphoneNotificationsEnabled;
- (id)headphoneAudioDevicesSpecifier;
- (id)headphoneLevelLimitDescriptionSpecifier;
- (id)headphoneLevelLimitGroupSpecifier;
- (BOOL)headphoneLevelLimitLockedByRestrictions;
- (id)headphoneLevelLimitSliderSpecifier;
- (id)headphoneLevelLimitSwitchSpecifier;
- (id)headphoneNotificationsGroupSpecifier;
- (id)headphoneNotificationsSwitchSpecifier;
- (id)headphoneWeeklyNotificationDescriptionSpecifier;
- (void)openHealthArticleSafeListening;
- (void)openHealthPrivacySettings;
- (void)queryNotificationCountsFromDate:(id)a0 toDate:(id)a1;
- (void)setHeadphoneLevelLimitEnabled:(id)a0 forSpecifier:(id)a1;
- (void)setHeadphoneLevelLimitValue:(id)a0 forSpecifier:(id)a1;
- (void)setHeadphoneNotificationsEnabled:(id)a0 forSpecifier:(id)a1;
- (BOOL)shouldShowHealthFeatures;
- (id)updateHeadphoneLevelLimitDescriptionText;
- (id)updateHeadphoneLevelLimitText;
- (void)updateMonthlyNotificationCounts:(id)a0 withNames:(id)a1 forDates:(id)a2;
- (id)weeklyNotificationCount:(id)a0;

@end
