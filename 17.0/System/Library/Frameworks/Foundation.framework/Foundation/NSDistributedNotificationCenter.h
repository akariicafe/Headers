@interface NSDistributedNotificationCenter : NSNotificationCenter

@property BOOL suspended;

+ (id)notificationCenterForType:(id)a0;
+ (id)defaultCenter;

- (void)postNotification:(id)a0;
- (id)init;
- (id)addObserverForName:(id)a0 object:(id)a1 queue:(id)a2 usingBlock:(id /* block */)a3;
- (void)removeObserver:(id)a0 name:(id)a1 object:(id)a2;
- (void)addObserver:(id)a0 selector:(SEL)a1 name:(id)a2 object:(id)a3;
- (void)addObserver:(id)a0 selector:(SEL)a1 name:(id)a2 object:(id)a3 suspensionBehavior:(unsigned long long)a4;
- (id)addObserverForName:(id)a0 object:(id)a1 suspensionBehavior:(unsigned long long)a2 queue:(id)a3 usingBlock:(id /* block */)a4;
- (void)postNotificationName:(id)a0 object:(id)a1;
- (void)postNotificationName:(id)a0 object:(id)a1 userInfo:(id)a2;
- (void)postNotificationName:(id)a0 object:(id)a1 userInfo:(id)a2 deliverImmediately:(BOOL)a3;
- (void)postNotificationName:(id)a0 object:(id)a1 userInfo:(id)a2 options:(unsigned long long)a3;

@end
