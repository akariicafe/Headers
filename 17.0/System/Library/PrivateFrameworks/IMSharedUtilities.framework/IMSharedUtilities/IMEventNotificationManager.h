@class IMEventListenerList, NSString, NSMutableArray, IMAutomaticEventNotificationQueue;

@interface IMEventNotificationManager : NSObject <IMEventNotificationQueueDelegate>

@property (readonly, nonatomic) IMAutomaticEventNotificationQueue *notificationQueue;
@property (readonly, nonatomic) IMEventListenerList *eventListeners;
@property (readonly, nonatomic) NSMutableArray *registeredNotificationQueues;
@property long long busyCount;
@property double eventTimeout;
@property (readonly, getter=isBusy) BOOL busy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerEventListener:(id)a0;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)appendNotificationForEventHandler:(id)a0 eventNotificationBlock:(id /* block */)a1;
- (void)appendNotificationForEventHandler:(id)a0 sender:(id)a1 eventNotificationBlock:(id /* block */)a2;
- (void)cancelAllEventNotifications;
- (void)cancelEventNotificationsForEventHandler:(id)a0;
- (id)createEventListenerForNotificationName:(id)a0 object:(id)a1;
- (void)eventListenerDidFinish:(id)a0;
- (void)eventNotificationQueue:(id)a0 didChangeBusyState:(BOOL)a1;
- (void)pauseEventNotifications:(BOOL)a0;
- (void)pushNotificationForEventHandler:(id)a0 eventNotificationBlock:(id /* block */)a1;
- (void)pushNotificationForEventHandler:(id)a0 sender:(id)a1 eventNotificationBlock:(id /* block */)a2;
- (void)registerNotificationQueue:(id)a0;

@end
