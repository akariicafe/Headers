@class Protocol, NSArray, NSMapTable, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface GEOObserverHashTable : NSObject {
    Protocol *_protocol;
    NSHashTable *_observers;
    NSMapTable *_observerQueues;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (readonly, nonatomic) BOOL hasObservers;
@property (readonly, nonatomic) NSArray *allObservers;

- (void)registerObserver:(id)a0 queue:(id)a1;
- (void)forwardInvocation:(id)a0;
- (void)enumerateObserversWithGroup:(id)a0 visitor:(id /* block */)a1;
- (id)init;
- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithProtocol:(id)a0 queue:(id)a1;

@end
