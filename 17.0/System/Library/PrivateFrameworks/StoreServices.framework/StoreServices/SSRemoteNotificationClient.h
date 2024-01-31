@class NSObject;
@protocol OS_dispatch_queue;

@interface SSRemoteNotificationClient : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    int _notifyToken;
}

+ (id)sharedClient;

- (id)init;
- (void)dealloc;
- (void)registerForRemoteNotifications;
- (void)unregisterForRemoteNotifications;
- (id)popQueuedNotifications;

@end
