@class NSString, NSMutableDictionary, NSDate;
@protocol CALNSnoozeUpdateTimerDelegate, CALNActivityScheduler, CalDateProvider;

@interface CALNSchedulingSnoozeUpdateTimer : NSObject <CALNActivitySchedulerDelegate, CALNSnoozeUpdateTimer> {
    id<CalDateProvider> _dateProvider;
    id<CALNActivityScheduler> _scheduler;
    NSDate *_scheduledFireDate;
    NSDate *_scheduledOverdueDate;
    NSMutableDictionary *_fireDates;
    NSMutableDictionary *_overdueDates;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak, nonatomic) id<CALNSnoozeUpdateTimerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)notifyDelegateOfDueAlarmsAndRescheduleTimer;
- (void)setFireDate:(id)a0 leeway:(double)a1 forEventWithIdentifier:(id)a2;
- (void)significantTimeChange;
- (void)activityRun;
- (id)initWithDateProvider:(id)a0 scheduler:(id)a1;
- (id)_dequeueEventsDueBy:(id)a0;
- (void).cxx_destruct;
- (void)_scheduleTimer;

@end
