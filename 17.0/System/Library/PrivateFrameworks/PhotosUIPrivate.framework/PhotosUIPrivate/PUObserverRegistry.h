@class NSPointerArray, NSObject;
@protocol OS_dispatch_queue;

@interface PUObserverRegistry : NSObject

@property (readonly, nonatomic) NSPointerArray *_observers;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_observerQueue;

- (void)enumerateObserversWithBlock:(id /* block */)a0;
- (id)init;
- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void).cxx_destruct;

@end
