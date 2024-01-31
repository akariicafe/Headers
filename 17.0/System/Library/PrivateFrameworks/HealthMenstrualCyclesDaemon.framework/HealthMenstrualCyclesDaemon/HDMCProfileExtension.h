@class HKMCSettingsManager, HDMCNotificationManager, HDMCWatchSettingsCompatibilityManager, HKCalendarCache, HDMCPostInstallUpdateManager, HDMCDeviceScopedStorageManager, HDMCAnalyticsManager, HDMCAnalysisScheduler, HDMCNotificationSyncManager, NSString, HDMCSettingsMigrationManager, HDBackgroundFeatureDeliveryManager, HDMCAnalysisManager, HDPrimaryProfile, HDFeatureAvailabilityManager, HDMCWatchSettingsReconciliationManager, HDAnalyticsDailyEventManager;

@interface HDMCProfileExtension : NSObject <HDMCSettingsMigrationManagerDelegate, HDMCWatchSettingsCompatibilityManagerDelegate, HDMCWatchSettingsReconciliationManagerDelegate, HDProfileExtension, HDFeatureAvailabilityExtensionProvider> {
    HDMCAnalyticsManager *_analyticsManager;
    HDFeatureAvailabilityManager *_featureAvailabilityManager;
    HDFeatureAvailabilityManager *_heartRateFeatureAvailabilityManager;
    HDBackgroundFeatureDeliveryManager *_heartRateBackgroundFeatureDeliveryManager;
    HDFeatureAvailabilityManager *_wristTemperatureInputAvailabilityManager;
    HDBackgroundFeatureDeliveryManager *_wristTemperatureInputBackgroundFeatureDeliveryManager;
    HDAnalyticsDailyEventManager *_wristTemperatureDailyEventManager;
    HDFeatureAvailabilityManager *_deviationsFeatureAvailabilityManager;
    HDBackgroundFeatureDeliveryManager *_deviationsBackgroundFeatureDeliveryManager;
    HDMCPostInstallUpdateManager *_postInstallUpdateManager;
    HDMCSettingsMigrationManager *_settingsMigrationManager;
    HDMCWatchSettingsCompatibilityManager *_watchSettingsCompatibilityManager;
    HDMCWatchSettingsReconciliationManager *_watchSettingsReconciliationManager;
    HDMCAnalysisScheduler *_analysisScheduler;
    HKCalendarCache *_calendarCache;
}

@property (readonly, weak, nonatomic) HDPrimaryProfile *profile;
@property (readonly, nonatomic) HDMCAnalysisManager *analysisManager;
@property (readonly, nonatomic) HDMCDeviceScopedStorageManager *deviceScopedStorageManager;
@property (readonly, nonatomic) HDMCNotificationManager *notificationManager;
@property (readonly, nonatomic) HDMCNotificationSyncManager *notificationSyncManager;
@property (readonly, nonatomic) HKMCSettingsManager *settingsManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)watchSettingsReconciliationManager:(id)a0 didReconcileValuesForKeys:(id)a1 didUpdateFeatureSetting:(BOOL)a2 didUpdateUserDefault:(BOOL)a3;
- (void)_triggerImmediateSyncWithReason:(id)a0;
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0 settingsManager:(id)a1;
- (id)featureAvailabilityExtensionForFeatureIdentifier:(id)a0;
- (void)watchSettingsCompatibilityManager:(id)a0 didChangeUserDefaultsKeys:(id)a1;
- (void)settingsMigrationManagerDidCompleteMigration:(id)a0 didRunMigrationSteps:(BOOL)a1;

@end
