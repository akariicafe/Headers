@class NSObject, NSMapTable, NSMutableSet;
@protocol OS_dispatch_queue;

@interface EFXPCAlarmScheduler : NSObject {
    NSMapTable *_alarms;
    NSMutableSet *_pendingEvents;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy, nonatomic) id /* block */ test_schedulerObserver;

+ (id)log;

- (void)removeAlarm:(id)a0;
- (id)ef_publicDescription;
- (void)addAlarm:(id)a0;
- (id)_init;
- (void)_queue_scheduleEvent:(id)a0;
- (void)_queue_handleEvent:(id)a0;
- (id)initForTesting;
- (void)_queue_notifyAlarmsOfPendingEvents;
- (id)initGlobalInstance;
- (void)_queue_unscheduleEventWithName:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)_queue_handleXPCEvent:(id)a0;
- (void)test_fireEvent:(id)a0;
- (void)scheduleEvent:(id)a0;
- (id)debugDescription;
- (void)unscheduleEventWithName:(id)a0;

@end
