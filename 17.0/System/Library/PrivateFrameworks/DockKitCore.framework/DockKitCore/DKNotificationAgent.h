@class NotificationAgent;

@interface DKNotificationAgent : NSObject {
    NotificationAgent *_agent;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isTracking;
- (void)deregisterNotifications;
- (BOOL)registerNotifications:(id /* block */)a0;

@end
