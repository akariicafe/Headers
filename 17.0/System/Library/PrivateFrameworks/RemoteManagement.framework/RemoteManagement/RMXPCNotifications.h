@class NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface RMXPCNotifications : NSObject

@property (class, readonly, nonatomic) RMXPCNotifications *sharedNotifier;

@property (nonatomic) BOOL registered;
@property (retain, nonatomic) NSMutableSet *pendingNotifications;
@property (retain, nonatomic) NSMutableDictionary *notificationObservers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *modificationQueue;

- (id)initPrivate;
- (void).cxx_destruct;
- (void)_addXPCEvent:(id)a0;
- (void)_didReceiveNotificationForStream:(id)a0 notificationName:(id)a1;
- (void)_removeXPCEvent:(id)a0;
- (void)_setupEventStreamHandlerForStream:(id)a0;
- (void)_waitForQueue:(id /* block */)a0;
- (void)addObserverForEvent:(id)a0 observer:(id)a1;
- (BOOL)hasObserverForEvent:(id)a0;
- (void)registerForEvents:(id)a0;
- (void)removeObserverForEvent:(id)a0;

@end
