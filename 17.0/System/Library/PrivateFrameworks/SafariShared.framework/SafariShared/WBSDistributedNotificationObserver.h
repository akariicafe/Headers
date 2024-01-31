@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface WBSDistributedNotificationObserver : NSObject {
    NSString *_notificationName;
    long long _notificationType;
    BOOL _observing;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    id /* block */ _notificationHandler;
    id /* block */ _timeoutHandler;
}

@property (copy) id /* block */ notificationHandler;
@property (copy) id /* block */ timeoutHandler;

- (void)_startObserving;
- (id)initWithNotificationName:(id)a0;
- (id)init;
- (void)waitWithTimeout:(double)a0;
- (void).cxx_destruct;
- (void)_stopObserving;
- (void)_didReceiveNotification:(id)a0;
- (void)_didTimeOut;
- (void)_invalidateTimeoutTimer;
- (void)_scheduleTimeoutTimerWithTimeout:(double)a0;
- (id)initWithNotificationName:(id)a0 type:(long long)a1;
- (void)stopWaiting;

@end
