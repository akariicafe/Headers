@interface HKHearingFeatures : NSObject

@property (class, readonly) BOOL isHeadphoneExposureNotificationsEnabled;
@property (class, readonly) BOOL isHeadphoneExposureMeasureLevelsEnabled;
@property (class, readonly) BOOL areHeadphoneExposureNotificationsMandatory;
@property (class, readonly) BOOL isHeadphoneExposureNotificationsSupportedOnActiveWatch;

+ (id)sharedInstance;
+ (BOOL)_isMeasureOtherHeadphonesEnabledOnActiveWatchWithError:(id *)a0;
+ (id)_numbersForPreferenceKeys:(id)a0 error:(id *)a1;
+ (BOOL)setBoolForPreferenceKey:(id)a0 newValue:(BOOL)a1 forPairedWatch:(BOOL)a2 error:(id *)a3;
+ (BOOL)_setHeadphoneExposureMeasureLevelsEnabled:(BOOL)a0 error:(id *)a1;
+ (BOOL)unitTesting_forceDefaultHeadphoneDataCollectionInterval;
+ (BOOL)unitTesting_simulateLocalHeadphonePlayback;
+ (BOOL)_boolForPreferenceKey:(id)a0 defaultValue:(BOOL)a1 fromValues:(id)a2;
+ (BOOL)hasActivePairedDevice;
+ (void)unitTesting_overrideIsHeadphoneExposureNotificationsEnabled:(id)a0;
+ (BOOL)isHeadphoneExposureMeasureLevelsEnabledOnActiveWatchWithError:(id *)a0;
+ (void)unitTesting_overrideSimulateLocalHeadphonePlayback:(id)a0;
+ (id)_numbersForPreferenceKeys:(id)a0 fromActiveWatch:(BOOL)a1;
+ (BOOL)isHeadphoneExposureNotificationsEnabledOnActiveWatchWithError:(id *)a0;
+ (BOOL)_isHeadphoneExposureDataTransientOnActiveWatchWithError:(id *)a0;
+ (void)startObservingForChanges;
+ (BOOL)_setHeadphoneExposureNotificationsEnabled:(BOOL)a0 error:(id *)a1;
+ (void)unitTesting_overrideForceDefaultHeadphoneDataCollectionInterval:(id)a0;
+ (BOOL)_isHeadphoneExposureDataTransient;
+ (id)activePairedDevice;
+ (BOOL)_setBoolForWatchPreferenceKey:(id)a0 newValue:(BOOL)a1 error:(id *)a2;
+ (BOOL)_setBoolForPreferenceKey:(id)a0 newValue:(BOOL)a1 error:(id *)a2;
+ (id)_numbersForPhonePreferenceKeys:(id)a0;
+ (id)_sharedAudioDataAnalysisManager;
+ (BOOL)areHeadphoneExposureNotificationsMandatoryOnActiveWatchWithError:(id *)a0;
+ (BOOL)_setBoolForPhonePreferenceKey:(id)a0 newValue:(BOOL)a1 error:(id *)a2;
+ (BOOL)_isMeasureOtherHeadphonesEnabled;
+ (BOOL)_setHeadphoneExposureNotificationsEnabledOnActiveWatch:(BOOL)a0 error:(id *)a1;
+ (id)_numbersForWatchPreferenceKeys:(id)a0;
+ (BOOL)_setHeadphoneExposureMeasureLevelsEnabledOnActiveWatch:(BOOL)a0 error:(id *)a1;

- (id)init;
- (void)dealloc;
- (void)_adasPreferenceDidChange:(id)a0;
- (BOOL)swizzled_isHAENFeatureEnabled;
- (void)_stopObservingForChanges;
- (void)_startObservingForChangesOnActiveWatch;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_startObservingForChanges;

@end
