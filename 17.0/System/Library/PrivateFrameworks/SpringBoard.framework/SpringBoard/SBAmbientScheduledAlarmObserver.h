@class NSMutableDictionary, MTAlarmManager, NSObject;
@protocol OS_dispatch_queue, SBAmbientScheduledAlarmObserverDelegate;

@interface SBAmbientScheduledAlarmObserver : NSObject

@property (retain, nonatomic) MTAlarmManager *alarmManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *scheduledTimerQueue;
@property (retain, nonatomic) NSMutableDictionary *scheduledTimers;
@property (weak, nonatomic) id<SBAmbientScheduledAlarmObserverDelegate> delegate;
@property (nonatomic) BOOL observationEnabled;

- (id)init;
- (void)dealloc;
- (void)_nextAlarmChanged:(id)a0;
- (void).cxx_destruct;
- (void)_timerFired:(id)a0;
- (void)_registerForAlarmNotifications;
- (void)_firingAlarmUpdated:(id)a0;
- (void)_invalidateAllScheduledTimers;
- (id)_newScheduledTimerForFireDate:(id)a0;
- (void)_publishTimerFired:(id)a0;
- (void)_scheduleTimersForAlarm:(id)a0;
- (id)_timeIntervalsWithReasons;
- (void)_unregisterForAlarmNotifications;
- (void)_updateAlarmObservation;
- (void)_updateScheduledTimersForNextAlarm;

@end
