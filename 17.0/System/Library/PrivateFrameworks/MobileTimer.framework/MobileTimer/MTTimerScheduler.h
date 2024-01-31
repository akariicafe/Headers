@class NSString, MTScheduledList;
@protocol MTPersistence, MTTimerSchedulerDelegate, MTTimerStorage, NAScheduler, MTNotificationCenter, MTSchedulingDelegate, MTTaskScheduler;

@interface MTTimerScheduler : NSObject <MTTimerObserver, MTScheduledListDelegate, MTAgentDiagnosticDelegate, MTAgentNotificationListener>

@property (retain, nonatomic) id<MTTimerStorage> storage;
@property (retain, nonatomic) id<MTNotificationCenter> notificationCenter;
@property (readonly, nonatomic) MTScheduledList *scheduledTimers;
@property (retain, nonatomic) id<NAScheduler> serializer;
@property (readonly, copy, nonatomic) id /* block */ currentDateProvider;
@property (readonly, nonatomic) id<MTSchedulingDelegate> schedulingDelegate;
@property (readonly, nonatomic) id<MTTaskScheduler> taskScheduler;
@property (retain, nonatomic) id<MTPersistence> defaults;
@property (weak, nonatomic) id<MTTimerSchedulerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_intervalToCheckForTimersToFireBeforeDate:(id)a0;

- (id)nextTimer;
- (void)_queue_unregisterTimer;
- (void)printDiagnostics;
- (void)scheduledListDidChange:(id)a0 withCompletion:(id /* block */)a1;
- (void)scheduleTimers:(id)a0;
- (id)_queue_nextTimer;
- (void)_queue_unscheduleTimers:(id)a0;
- (id)gatherDiagnostics;
- (id)initWithStorage:(id)a0 notificationCenter:(id)a1 scheduler:(id)a2 defaults:(id)a3;
- (id)_queue_lastTimerTriggerDate;
- (void)_queue_updatePersistentTimerForNextTimerWithCompletion:(id /* block */)a0;
- (void)source:(id)a0 didAddTimers:(id)a1;
- (void)source:(id)a0 didDismissTimer:(id)a1;
- (BOOL)handlesNotification:(id)a0 ofType:(long long)a1;
- (void)unscheduleTimers:(id)a0;
- (id)initWithStorage:(id)a0 notificationCenter:(id)a1 scheduler:(id)a2 defaults:(id)a3 schedulingDelegate:(id)a4 taskScheduler:(id)a5 currentDateProvider:(id /* block */)a6;
- (void)_queue_fireTriggeredTimersWithCompletionBlock:(id /* block */)a0;
- (void)nextTimerDidChange:(id)a0;
- (void)source:(id)a0 didFireTimer:(id)a1;
- (void)_queue_triggerDidFireForTimerWithCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_fireScheduledTimer:(id)a0 firedDate:(id)a1 completionBlock:(id /* block */)a2;
- (void)rescheduleTimers;
- (id)_queue_nextScheduledTimer;
- (id)initWithStorage:(id)a0 notificationCenter:(id)a1;
- (void)rescheduleTimersWithCompletion:(id /* block */)a0;
- (void)_queue_rescheduleTimersWithCompletion:(id /* block */)a0;
- (void)handleNotification:(id)a0 ofType:(long long)a1 completion:(id /* block */)a2;
- (void)_queue_setLastTimerTriggerDate:(id)a0;
- (void)_queue_scheduleTimers:(id)a0 withCompletion:(id /* block */)a1;
- (void)source:(id)a0 didRemoveTimers:(id)a1;
- (id)nextTriggerDate;
- (void)source:(id)a0 didUpdateTimers:(id)a1;
- (id)sourceIdentifier;

@end
