@class NSObject, NSDate;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AXAuditThrottler : NSObject

@property (nonatomic) double _interval;
@property (retain, nonatomic) NSDate *_lastFireTime;
@property (nonatomic) SEL _selector;
@property (nonatomic) BOOL _alwaysReschedule;
@property (nonatomic) BOOL _pendingFire;
@property (weak, nonatomic) NSObject *_target;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_fireQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *_dispatchTimer;

+ (id)throttlerWithInterval:(double)a0 target:(id)a1 selector:(SEL)a2 queue:(id)a3 alwaysReschedule:(BOOL)a4;

- (void)_fire;
- (void).cxx_destruct;
- (void)_scheduleTimerAfterDelay:(double)a0;
- (void)scheduleNow;

@end
