@class NSMutableSet, NSDate;
@protocol SATimeEventRequestProtocol;

@interface SATime : NSObject <SATimeServiceProtocol>

@property (retain, nonatomic) NSMutableSet *ongoingAlarms;
@property (nonatomic) void *alarmQueue;
@property (weak, nonatomic) id<SATimeEventRequestProtocol> externalTimer;
@property (nonatomic) BOOL isReplay;
@property (readonly, nonatomic) NSDate *now;

- (void)ingestTAEvent:(id)a0;
- (void)addAlarm:(id)a0;
- (void)dealloc;
- (void)alarmFired:(id)a0;
- (id)earliestAlarm;
- (void)popAlarm;
- (unsigned long long)alarmCount;
- (id)setupAlarmFireAt:(id)a0 forClient:(id)a1;
- (void)cancelAlarmWithUUID:(id)a0;
- (id)initWithExternalTimer:(id)a0 isReplay:(BOOL)a1;
- (id)getEarliestAlarmDate;
- (void).cxx_destruct;
- (void)advanceTimeWithEvent:(id)a0;
- (void)fireAlarmsIfReady;
- (id)getCurrentTime;

@end
