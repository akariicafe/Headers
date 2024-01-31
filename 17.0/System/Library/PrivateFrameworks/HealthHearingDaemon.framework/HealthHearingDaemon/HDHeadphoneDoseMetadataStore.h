@class HDKeyValueDomain, HKProfileIdentifier, HDProfile;

@interface HDHeadphoneDoseMetadataStore : NSObject <HDProfileReadyObserver> {
    HDProfile *_profile;
    HDKeyValueDomain *_domain;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    double _doseLimit;
    BOOL _shouldLoadDoseLimitOverride;
}

@property (readonly, nonatomic) HKProfileIdentifier *_profileIdentifier;

+ (id)_earliestFireDateAllowedWithNow:(id)a0;

- (void)profileDidBecomeReady:(id)a0;
- (BOOL)rebuildCachedFireDateFromLocalHAENStoreIfNeededWithError:(id *)a0;
- (BOOL)_overrideDoseLimit:(id)a0 error:(id *)a1;
- (long long)_updatePreviousSevenDayNotificationFireDateWith:(id)a0 fromRemoteNotification:(BOOL)a1 isLocalDevice:(BOOL)a2 now:(id)a3 error:(id *)a4;
- (id)_lock_fetchDoseLimitInfoWithError:(id *)a0;
- (void)_lock_loadDoseLimitOverrideIfNeeded;
- (id)initWithProfile:(id)a0;
- (void)_lock_loadDoseLimitOverride;
- (BOOL)shouldNotifyUserForAccumulatedDose:(double)a0;
- (long long)_updatePreviousSevenDayLocalNotificationFireDateWithSamplesInserted:(id)a0 now:(id)a1 error:(id *)a2;
- (id)_fetchPreviousSevenDayLocalNotificationFireDateWithError:(id *)a0;
- (BOOL)_clearPreviousSevenDayRemoteNotificationFireDateWithError:(id *)a0;
- (BOOL)updateCacheWithFireDate:(id)a0 fromRemoteNotification:(BOOL)a1 error:(id *)a2;
- (BOOL)_updateCacheWithFireDate:(id)a0 fromRemoteNotification:(BOOL)a1 changed:(BOOL *)a2 error:(id *)a3;
- (BOOL)_shouldRebuildPreviousSevenDayNotificationWithError:(id *)a0;
- (long long)updatePreviousSevenDayLocalNotificationFireDateWithSamplesInserted:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)_setShouldRebuildSevenDayStatistics:(BOOL)a0 error:(id *)a1;
- (BOOL)_clearPreviousSevenDayLocalNotificationFireDateWithError:(id *)a0;
- (BOOL)_setPreviousSevenDayLocalNotificationFireDate:(id)a0 error:(id *)a1;
- (BOOL)rebuildCachedFireDateFromLocalHAENStoreWithError:(id *)a0;
- (id)_filterForValidateFireDate:(id)a0 now:(id)a1 error:(id *)a2;
- (id)_info;
- (BOOL)_setShouldRebuildPreviousSevenDayNotification:(BOOL)a0 error:(id *)a1;
- (id)_fetchDoseLimitInfoWithError:(id *)a0;
- (id)_infoForAccumulatedDoseAtFireDate:(id)a0;
- (id)_fetchPreviousSevenDayRemoteNotificationFireDateWithNow:(id)a0 error:(id *)a1;
- (id)_mostRecentSevenDayLocalNotificationWithNow:(id)a0 error:(id *)a1;
- (id)_infoForSevenDayDoseAtFireDate:(id)a0;
- (id)_fetchPreviousSevenDayRemoteNotificationFireDateWithError:(id *)a0;
- (BOOL)_setPreviousSevenDayRemoteNotificationFireDate:(id)a0 error:(id *)a1;
- (id)_fetchPreviousSevenDayLocalNotificationFireDateWithNow:(id)a0 error:(id *)a1;
- (id)collectionIntervalForDoseAccumulated:(double)a0;
- (BOOL)_shouldRebuildSevenDayStatisticsWithError:(id *)a0;
- (BOOL)_rebuildCachedFireDateFromLocalHAENStoreWithNow:(id)a0 error:(id *)a1;
- (long long)updatePreviousSevenDayRemoteNotificationFireDateWith:(id)a0 error:(id *)a1;

@end
