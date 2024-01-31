@class PSSpecifier, NSTimer, STAppAndWebsiteActivityOnboardingController, STEyeReliefOnboardingController, NSString, UIViewController;

@interface STLimitUsageGroupSpecifierProvider : STRootGroupSpecifierProvider <MCProfileConnectionObserver, STAlwaysAllowListControllerDelegate, STDeviceBedtimeListControllerDelegate>

@property (weak) UIViewController *rootViewController;
@property (retain, nonatomic) PSSpecifier *appAndWebsiteActivitySpecifier;
@property (retain, nonatomic) PSSpecifier *deviceBedtimeSpecifier;
@property (retain, nonatomic) PSSpecifier *appLimitsSpecifier;
@property (retain, nonatomic) PSSpecifier *alwaysAllowedSpecifier;
@property (retain, nonatomic) PSSpecifier *screenDistanceSpecifier;
@property (retain, nonatomic) NSTimer *downtimeScheduleRefreshTimer;
@property (retain, nonatomic) STAppAndWebsiteActivityOnboardingController *appAndWebsiteActivityOnboardingController;
@property (retain, nonatomic) STEyeReliefOnboardingController *eyeReliefOnboardingController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)providerWithCoordinator:(id)a0 rootViewController:(id)a1;

- (id)init;
- (void)dealloc;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)setCoordinator:(id)a0;
- (void)scheduleDowntimeRefreshIfNeeded;
- (void)_deviceBedtimeDidChange:(id)a0;
- (void)_hasWatchOSDevicesOnlyDidChange:(BOOL)a0;
- (void)_isScreenTimeEnabledOrHasWatchOSDevicesOnlyDidChange;
- (void)_refreshBedtimeSpecifiersForBedtime:(id)a0;
- (id)_subtitleTextForDeviceBedtime:(id)a0;
- (void)alwaysAllowListController:(id)a0 didFinishEditingAlwaysAllowList:(id)a1;
- (id)alwaysAllowedDetailText;
- (id)appLimitsDetailText;
- (void)bedtimeListController:(id)a0 didFinishEditingBedtime:(id)a1;
- (id)limitUsageSpecifers;
- (void)scheduleDowntimeRefreshAndReloadSpecifiersForBedtime:(id)a0;
- (void)setUpAppAndWebsiteActivity:(id)a0;
- (void)setUpScreenDistance:(id)a0;
- (void)showAlwaysAllowedViewController:(id)a0;
- (void)showAppLimitsViewController:(id)a0;
- (BOOL)showDemoModeAlertIfNeeded;
- (void)showDeviceBedtimeViewController:(id)a0;
- (void)showScreenDistanceViewController:(id)a0;

@end
