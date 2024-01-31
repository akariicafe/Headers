@class NSString, HDRestorableAlarmScheduler, NSMutableSet, NSObject, HDXPCAlarm;
@protocol OS_dispatch_queue;

@interface HDRestorableAlarm : NSObject <HDDiagnosticObject> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_eventHandlerQueue;
    HDRestorableAlarmScheduler *_scheduler;
    id /* block */ _eventsHandler;
    NSMutableSet *_outstandingEventIdentifiers;
}

@property (readonly, nonatomic) HDXPCAlarm *systemScheduler;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginReceivingEventsWithHandler:(id /* block */)a0;
- (BOOL)scheduleEvents:(id)a0 error:(id *)a1;
- (id)diagnosticDescription;
- (id)eventWithIdentifier:(id)a0 dueDate:(id)a1 eventOptions:(unsigned long long)a2;
- (void)invalidate;
- (BOOL)removeAllEventsWithError:(id *)a0;
- (id)allScheduledEventsWithError:(id *)a0;
- (BOOL)removeEvents:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)eventsDidFire:(id)a0;
- (id)replaceAllScheduledEventsWithEvents:(id)a0 error:(id *)a1;
- (void)checkForDueEventsWithCompletion:(id /* block */)a0;
- (id)eventWithIdentifier:(id)a0 dueDateComponents:(id)a1 eventOptions:(unsigned long long)a2;
- (id)initWithProfile:(id)a0 clientIdentifier:(id)a1 eventHandlerQueue:(id)a2;

@end
