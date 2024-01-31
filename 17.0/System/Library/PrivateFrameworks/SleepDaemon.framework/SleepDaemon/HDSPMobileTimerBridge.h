@class MTAlarmManager, NAFuture;

@interface HDSPMobileTimerBridge : NSObject

@property (readonly, nonatomic) MTAlarmManager *alarmManager;
@property (readonly, nonatomic) NAFuture *alarmServerReady;

+ (BOOL)sleepAlarm:(id)a0 matchesSleepScheduleModel:(id)a1;
+ (id)sleepScheduleModelFromSleepAlarm:(id)a0;

- (void)resetSleepAlarmSnoozeState;
- (void)updateSleepAlarms;
- (id)init;
- (id)initWithAlarmManager:(id)a0;
- (void)_checkAlarmServer;
- (void)_alarmServerReady;
- (void).cxx_destruct;
- (id)sleepAlarmsFutureIgnoringCache:(BOOL)a0;
- (id)sleepAlarmsFuture;

@end
