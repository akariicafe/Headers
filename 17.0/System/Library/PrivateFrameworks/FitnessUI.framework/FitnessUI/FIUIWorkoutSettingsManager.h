@class FIUIWorkoutDefaultMetricsProvider, NPSManager, NSMutableDictionary, NPSDomainAccessor, FIUIWorkoutActivityType, NSMutableArray;

@interface FIUIWorkoutSettingsManager : NSObject {
    long long _activityMoveMode;
    NSMutableDictionary *_settingsByActivityType;
    NSMutableDictionary *_settingOverridesByMetric;
    NSMutableArray *_enabledMetrics;
}

@property (retain, nonatomic) NPSDomainAccessor *domainAccessor;
@property (retain, nonatomic) NPSManager *syncManager;
@property (readonly, nonatomic) FIUIWorkoutActivityType *workoutActivityType;
@property (readonly, nonatomic) FIUIWorkoutDefaultMetricsProvider *defaultMetricsProvider;

+ (void)obliterateUserConfiguredWorkoutMetrics;
+ (long long)readWorkoutMetricsActivityMoveMode;

- (id)init;
- (void).cxx_destruct;
- (void)_migratePaceViewSettingIfNeeded;
- (void)_readFromDomain;
- (void)_clearOldMetricsIfNeeded;
- (BOOL)_enabledMetricsAreDefaultAfterPaceMigration:(id)a0 workoutActivityType:(id)a1;
- (BOOL)_hasUserMadeMetricChangesToWorkoutType:(id)a0 enabledMetrics:(id)a1 settingOverridesByMetric:(id)a2 metricFormatVersion:(id)a3;
- (BOOL)_useUserConfiguredWorkoutMetricsForMetricsActivityMoveMode:(long long)a0 activityMoveMode:(long long)a1;
- (void)_writeToDomainWithShouldUpdateVersion:(BOOL)a0;
- (void)assignMetricType:(unsigned long long)a0 toSlotIndex:(long long)a1;
- (long long)disabledIndexForMetricType:(unsigned long long)a0;
- (id)initWithWorkoutActivityType:(id)a0 activityMoveMode:(long long)a1;
- (BOOL)isMetricEnabled:(unsigned long long)a0;
- (void)moveMetricType:(unsigned long long)a0 toEnabledIndex:(long long)a1;
- (id)orderedDisabledMetrics;
- (id)orderedEnabledAndSupportedMetrics;
- (id)orderedEnabledMetrics;
- (id)orderedSupportedMetrics;
- (void)reloadMetrics;
- (void)setEnabled:(BOOL)a0 forMetricType:(unsigned long long)a1 didChange:(BOOL *)a2;
- (id)supportedMetrics;

@end
