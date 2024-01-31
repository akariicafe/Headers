@class AAAccountUserNotificationDaemonConnection;

@interface AAAccountUserNotificationPublisher : NSObject {
    AAAccountUserNotificationDaemonConnection *_daemonConnection;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithDaemonXPCEndpoint:(id)a0;
- (void)postAccountUserNotificationWith:(id)a0 completion:(id /* block */)a1;

@end
