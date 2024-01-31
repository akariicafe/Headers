@class MTXPCConnectionProvider, MTMetrics, MTAlarmCache, NSNotificationCenter, MTAlarmManagerExportedObject;

@interface MTAlarmManager : NSObject

@property (retain, nonatomic) MTAlarmManagerExportedObject *exportedObject;
@property (readonly, nonatomic) MTXPCConnectionProvider *connectionProvider;
@property (retain, nonatomic) MTMetrics *metrics;
@property (retain, nonatomic) MTAlarmCache *cache;
@property (retain, nonatomic) NSNotificationCenter *notificationCenter;

+ (void)warmUp;
+ (id)_filteredAlarms:(id)a0 afterDate:(id)a1 maxCount:(unsigned long long)a2 filter:(id /* block */)a3;
+ (id)_sortedAlarms:(id)a0 date:(id)a1 includeBedtimeNotification:(BOOL)a2;
+ (id)assistantSyncNotificationName;
+ (id)_filterSleepAlarmOverrides:(id)a0 date:(id)a1;

- (id)initWithConnectionProvider:(id)a0 metrics:(id)a1;
- (id)resetSleepAlarmSnoozeState;
- (id)updateSleepAlarms;
- (id)sleepAlarmSync;
- (id)nextAlarmsForDateSync:(id)a0 maxCount:(unsigned long long)a1 includeSleepAlarm:(BOOL)a2 includeBedtimeNotification:(BOOL)a3;
- (void)reconnect;
- (id)nextSleepAlarm;
- (id)removeAlarm:(id)a0;
- (id)alarms;
- (void)checkIn;
- (id)init;
- (id)addAlarm:(id)a0;
- (id)alarmsSyncIncludingSleepAlarm:(BOOL)a0;
- (void)dealloc;
- (id)nextAlarmsForDateSync:(id)a0 maxCount:(unsigned long long)a1 includeSleepAlarm:(BOOL)a2;
- (id)nextAlarmsForDateSync:(id)a0 maxCount:(unsigned long long)a1;
- (id)nextAlarmSync;
- (id)sleepAlarm;
- (id)_alarmsIncludingSleepAlarm:(BOOL)a0 doSynchronous:(BOOL)a1;
- (id)nextAlarmsForDateSync:(id)a0 maxCount:(unsigned long long)a1 includeBedtimeNotification:(BOOL)a2;
- (id)snoozeAlarmWithIdentifier:(id)a0;
- (id)_initWithConnectionProvidingBlock:(id /* block */)a0 metrics:(id)a1 notificationCenter:(id)a2;
- (id)nextWidgetAlarmInThreshold;
- (id)sleepAlarmsSync;
- (id)_nextAlarmsInRange:(id)a0 maxCount:(unsigned long long)a1 includeSleepAlarm:(BOOL)a2 includeBedtimeNotification:(BOOL)a3 doSynchronous:(BOOL)a4;
- (id)nextAlarmsForDate:(id)a0 maxCount:(unsigned long long)a1 includeSleepAlarm:(BOOL)a2;
- (id)nextAlarmsInRangeSync:(id)a0 maxCount:(unsigned long long)a1 includeSleepAlarm:(BOOL)a2;
- (id)_initWithConnectionProvidingBlock:(id /* block */)a0 metrics:(id)a1;
- (id)updateAlarm:(id)a0;
- (id)nextAlarmsInRange:(id)a0 maxCount:(unsigned long long)a1 includeSleepAlarm:(BOOL)a2 includeBedtimeNotification:(BOOL)a3;
- (unsigned long long)alarmCount;
- (id)_sortedNextAlarmsAfterDate:(id)a0 includeSleepAlarm:(BOOL)a1 includeBedtimeNotification:(BOOL)a2 doSynchronous:(BOOL)a3;
- (id)dismissAlarmWithIdentifier:(id)a0;
- (unsigned long long)indexForAlarm:(id)a0;
- (id)alarmAtIndex:(unsigned long long)a0;
- (id)nextAlarm;
- (id)alarmsIncludingSleepAlarm:(BOOL)a0;
- (id)nextAlarmsInRangeSync:(id)a0 maxCount:(unsigned long long)a1 includeSleepAlarm:(BOOL)a2 includeBedtimeNotification:(BOOL)a3;
- (id)nextExpectedRefreshDate;
- (id)nextAlarmsForDate:(id)a0 maxCount:(unsigned long long)a1 includeBedtimeNotification:(BOOL)a2;
- (id)initWithConnectionProvider:(id)a0 metrics:(id)a1 notificationCenter:(id)a2;
- (id)nextFutureAlarmDate;
- (id)nextAlarmsInRange:(id)a0 maxCount:(unsigned long long)a1 includeSleepAlarm:(BOOL)a2;
- (id)nextAlarmsForDate:(id)a0 maxCount:(unsigned long long)a1 includeSleepAlarm:(BOOL)a2 includeBedtimeNotification:(BOOL)a3;
- (void).cxx_destruct;
- (id)snoozeAlarmWithIdentifier:(id)a0 snoozeAction:(unsigned long long)a1;
- (void)_getCachedAlarmsWithFuture:(id)a0 finishBlock:(id /* block */)a1;
- (id)alarmWithIDString:(id)a0 includeSleep:(BOOL)a1;
- (unsigned long long)firingAlarmCount;
- (id)dismissAlarmWithIdentifier:(id)a0 dismissAction:(unsigned long long)a1;
- (id)_alarmWithIDStringAsync:(id)a0;
- (id)initWithMetrics:(id)a0;
- (id)alarmsSync;
- (id)sleepAlarms;
- (id)_nextAlarmsForDate:(id)a0 maxCount:(unsigned long long)a1 includeSleepAlarm:(BOOL)a2 includeBedtimeNotification:(BOOL)a3 doSynchronous:(BOOL)a4;
- (id)alarmWithIDString:(id)a0;
- (id)nextAlarmInHoursThreshold:(long long)a0;
- (id)nextAlarmsForDate:(id)a0 maxCount:(unsigned long long)a1;
- (id)_sortedNextAlarmsAfterDate:(id)a0 includeSleepAlarm:(BOOL)a1 includeBedtimeNotification:(BOOL)a2;
- (unsigned long long)alarmCountIncludingSleepAlarm:(BOOL)a0;

@end
