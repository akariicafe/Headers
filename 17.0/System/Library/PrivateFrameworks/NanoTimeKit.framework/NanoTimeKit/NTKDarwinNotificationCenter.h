@class NSMutableDictionary;

@interface NTKDarwinNotificationCenter : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSMutableDictionary *observersByNotificationName;

+ (void)postNotification:(id)a0;
+ (id)defaultCenter;

- (void)_addObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)handleDarwinNotification:(id)a0;
- (void)_registerForNotificationName:(id)a0;
- (void)_unregisterForNotificationNameIfNeeded:(id)a0;
- (void)addObserver:(id)a0 notificationName:(id)a1 selector:(SEL)a2;
- (void)addObserver:(id)a0 notificationName:(id)a1 usingBlock:(id /* block */)a2;
- (void)removeObserver:(id)a0 notificationName:(id)a1;

@end
