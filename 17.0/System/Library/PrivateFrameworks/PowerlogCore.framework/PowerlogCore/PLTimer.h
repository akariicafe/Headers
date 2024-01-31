@class PLEntryNotificationOperatorComposition, NSDate, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PLTimer : NSObject

@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (copy) id /* block */ block;
@property (retain) NSObject<OS_dispatch_source> *timer;
@property double interval;
@property double tolerance;
@property BOOL repeats;
@property (retain) id userInfo;
@property (retain) PLEntryNotificationOperatorComposition *sleepEntryNotification;
@property (retain) PLEntryNotificationOperatorComposition *wakeEntryNotification;
@property (retain) NSDate *lastSleepTime;
@property (nonatomic) BOOL timerActive;
@property (retain, nonatomic) NSDate *fireDate;

- (void)dealloc;
- (void)invalidate;
- (void)handleTimerFire;
- (void)fire;
- (void)arm;
- (void).cxx_destruct;
- (id)initWithFireDate:(id)a0 withInterval:(double)a1 withTolerance:(double)a2 repeats:(BOOL)a3 withUserInfo:(id)a4 withQueue:(id)a5 withBlock:(id /* block */)a6;

@end
