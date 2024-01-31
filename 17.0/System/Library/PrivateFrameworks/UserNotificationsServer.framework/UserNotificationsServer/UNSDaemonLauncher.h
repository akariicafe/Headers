@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface UNSDaemonLauncher : NSObject <UNUserNotificationCenterDelegateServiceProtocol> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    NSMutableDictionary *_connectionByBundleIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)didReceiveNotificationResponse:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)didChangeSettings:(id)a0 forBundleIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)didOpenApplicationForResponse:(id)a0 forBundleIdentifier:(id)a1;
- (id)_queue_ensureConnectionForBundleIdentifier:(id)a0;
- (void)_queue_interruptedConnectionForBundleIdentifier:(id)a0;
- (void)_queue_invalidatedConnectionForBundleIdentifier:(id)a0;

@end
