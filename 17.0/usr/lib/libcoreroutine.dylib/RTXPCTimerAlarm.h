@class NSObject, NSString, NSDate;
@protocol OS_dispatch_queue;

@interface RTXPCTimerAlarm : NSObject

@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) NSString *identifier;

- (id)initWithIdentifier:(id)a0 queue:(id)a1 handler:(id /* block */)a2;
- (void)_setup;
- (void)_invalidate;
- (BOOL)invalidate;
- (void)_resetState;
- (void)onNotification:(id)a0;
- (void).cxx_destruct;
- (void)setup;
- (void)_deregisterAlarm;
- (void)_fireWithDate:(id)a0;
- (void)_handleDurationExpiry;
- (BOOL)_isEndDateValid:(id)a0;
- (void)_onNotification:(id)a0;
- (void)_setAlarmWithEndDate:(id)a0 userVisible:(BOOL)a1;
- (BOOL)fireWithDate:(id)a0 error:(id *)a1;

@end
