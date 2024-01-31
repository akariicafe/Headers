@class AXAccessQueue, NSMutableSet, AXAccessQueueTimer, NSDate, NSMutableArray;
@protocol GAXTimeRestrictionManagerDelegate;

@interface GAXTimeRestrictionManager : NSObject

@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (retain, nonatomic) NSDate *startTime;
@property (nonatomic) long long expirationDurationInSeconds;
@property (retain, nonatomic) AXAccessQueueTimer *expirationTimer;
@property (retain, nonatomic) NSMutableSet *alarmDurationsInSeconds;
@property (retain, nonatomic) NSMutableArray *alarmTimers;
@property (weak, nonatomic) id<GAXTimeRestrictionManagerDelegate> delegate;
@property (retain, nonatomic) AXAccessQueue *assertedAccessQueue;
@property (readonly, nonatomic) long long remainingTimeInSeconds;

- (void)pause;
- (id)description;
- (void)resume;
- (void).cxx_destruct;
- (void)cancel;
- (void)_scheduleTimers;
- (void)_addAlarmForDuration:(long long)a0;
- (void)_removeAllAlarmTimers;
- (void)_removeAllTimers;
- (void)_removeExpirationTimer;
- (void)beginWithDuration:(long long)a0;
- (id)initWithAssertedAccessQueue:(id)a0;

@end
