@class NSDateInterval, NSDate, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface REUpNextTimer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_lastFireDate;
}

@property (retain) NSObject<OS_dispatch_source> *dispatch_timer;
@property (readonly, nonatomic) NSDateInterval *fireInterval;
@property (readonly, nonatomic) double rate;
@property (readonly, nonatomic) id /* block */ block;
@property (readonly, getter=isValid) BOOL valid;

+ (id)timerWithInterval:(double)a0 queue:(id)a1 block:(id /* block */)a2;
+ (id)timerWithFireDate:(id)a0 queue:(id)a1 block:(id /* block */)a2;
+ (id)timerWithFireInterval:(id)a0 atRate:(double)a1 queue:(id)a2 block:(id /* block */)a3;

- (void)dealloc;
- (void)invalidate;
- (void)_rescheduleTimer;
- (void).cxx_destruct;
- (void)_handleTimer;
- (BOOL)_isNowRepeatingTimerWithCurrentDate:(id)a0;
- (void)_scheduleTimerWithInterval:(id)a0 rate:(double)a1;
- (id)initWithDateInterval:(id)a0 rate:(double)a1 queue:(id)a2 block:(id /* block */)a3;

@end
