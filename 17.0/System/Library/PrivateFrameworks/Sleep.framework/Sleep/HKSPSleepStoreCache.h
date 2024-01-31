@class HKSPSleepSchedule, HKSPSleepSettings, HKSPSleepEventRecord;

@interface HKSPSleepStoreCache : NSObject

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } cacheLock;
@property (readonly, copy, nonatomic) HKSPSleepSchedule *sleepSchedule;
@property (readonly, nonatomic) BOOL sleepScheduleNeedsUpdate;
@property (readonly, copy, nonatomic) HKSPSleepSettings *sleepSettings;
@property (readonly, nonatomic) BOOL sleepSettingsNeedsUpdate;
@property (readonly, copy, nonatomic) HKSPSleepEventRecord *sleepEventRecord;
@property (readonly, nonatomic) BOOL sleepEventRecordNeedsUpdate;
@property (readonly, nonatomic) unsigned long long sleepScheduleState;
@property (readonly, nonatomic) BOOL sleepScheduleStateNeedsUpdate;
@property (readonly, nonatomic) long long sleepMode;
@property (readonly, nonatomic) BOOL sleepModeNeedsUpdate;

- (id)init;
- (id)cachedSleepSettings;
- (void)updateCachedSleepSettings:(id)a0;
- (void)purgeCache;
- (void)updateCachedSleepMode:(long long)a0;
- (void)_locked_purgeCachedSleepSchedule;
- (id)cachedSleepModeWithMissHandler:(id /* block */)a0;
- (id)cachedSleepEventRecordWithMissHandler:(id /* block */)a0;
- (void)_locked_purgeCachedSleepMode;
- (id)cachedSleepScheduleWithMissHandler:(id /* block */)a0;
- (void)updateCachedSleepSchedule:(id)a0;
- (void).cxx_destruct;
- (id)cachedSleepEventRecord;
- (id)cachedSleepScheduleStateWithMissHandler:(id /* block */)a0;
- (void)updateCachedSleepEventRecord:(id)a0;
- (void)_locked_purgeCachedSleepScheduleState;
- (void)_locked_purgeCachedSleepEventRecord;
- (void)purgeCachedSleepSettings;
- (void)purgeCachedSleepSchedule;
- (void)purgeCachedSleepEventRecord;
- (void)_locked_purgeCachedSleepSettings;
- (id)cachedSleepSchedule;
- (void)updateCachedSleepScheduleState:(unsigned long long)a0;
- (void)purgeCachedSleepMode;
- (void)_withLock:(id /* block */)a0;
- (id)cachedSleepSettingsWithMissHandler:(id /* block */)a0;
- (void)purgeCachedSleepScheduleState;

@end
