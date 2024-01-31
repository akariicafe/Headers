@class _HKWeakObserversMap, NSString, HDRestorableAlarm, NSObject, HDDaemon;
@protocol OS_dispatch_queue;

@interface HDHealthAppRestorableAlarmManager : NSObject <HDHealthDaemonReadyObserver> {
    HDRestorableAlarm *_scheduler;
    _HKWeakObserversMap *_alarmHandlers;
}

@property (retain, nonatomic) HDDaemon *daemon;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)daemonReady:(id)a0;
- (id)initWithDaemon:(id)a0;
- (void).cxx_destruct;
- (void)_queue_alarm:(id)a0 didReceiveDueEvents:(id)a1;
- (void)_scheduleAlarmEventWithHandler:(id)a0 dueDate:(id)a1 eventOptions:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)_queue_removeAlarmEvent:(id)a0;
- (void)_queue_scheduleAlarmEvent:(id)a0 completion:(id /* block */)a1;
- (void)_rescheduleAlarmEvent:(id)a0 dueDate:(id)a1 completion:(id /* block */)a2;
- (id)createAlarmEventWithIdentifier:(id)a0 dueDate:(id)a1 eventOptions:(unsigned long long)a2;
- (void)removeAlarmEvent:(id)a0;
- (BOOL)removeAlarmEventWithIdentifier:(id)a0 error:(id *)a1;
- (void)rescheduleAlarmEvent:(id)a0 dueDate:(id)a1;
- (void)rescheduleAlarmEvent:(id)a0 dueDate:(id)a1 completion:(id /* block */)a2;
- (void)scheduleAlarmEvent:(id)a0 completion:(id /* block */)a1;
- (void)scheduleAlarmEventWithHandler:(id)a0 dueDate:(id)a1 eventOptions:(unsigned long long)a2;
- (void)scheduleAlarmEventWithHandler:(id)a0 dueDate:(id)a1 eventOptions:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)setHandlerForAlarmEvent:(id)a0 handler:(id)a1;

@end
