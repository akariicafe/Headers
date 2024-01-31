@interface FAFamilyNotificationObserver : NSObject {
    BOOL _observing;
    id /* block */ _notificationHandler;
}

+ (void)initialize;
+ (id)familyNotificationObserverWithNotificationHandler:(id /* block */)a0;

- (void)_startObserving;
- (void)stopObserving;
- (id)init;
- (void)dealloc;
- (id)_initWithNotificationHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_didReceiveNotification;

@end
