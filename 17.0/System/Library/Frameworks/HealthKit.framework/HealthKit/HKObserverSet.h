@class NSArray, NSString, NSMapTable, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface HKObserverSet : NSObject {
    NSString *_name;
    NSObject<OS_os_log> *_category;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMapTable *_queuesByObserver;
    NSObject<OS_dispatch_queue> *_defaultObserverQueue;
}

@property (readonly) unsigned long long count;
@property (readonly, copy) NSArray *allObservers;

- (void)registerObserver:(id)a0 queue:(id)a1;
- (void)registerObserver:(id)a0;
- (void)notifyObserversInGroup:(id)a0 handler:(id /* block */)a1;
- (void)unregisterObserver:(id)a0;
- (void)notifyObservers:(id /* block */)a0;
- (void).cxx_destruct;
- (void)registerObserver:(id)a0 queue:(id)a1 runIfFirstObserver:(id /* block */)a2;
- (id)initWithName:(id)a0 loggingCategory:(id)a1;
- (void)unregisterObserver:(id)a0 runIfLastObserver:(id /* block */)a1;
- (void)notifyObserver:(id)a0 handler:(id /* block */)a1;
- (void)unregisterAllObservers;

@end
