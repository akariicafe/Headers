@class Protocol, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface CARObserverHashTable : NSObject {
    Protocol *_protocol;
    NSHashTable *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly) BOOL hasObservers;

- (id)initWithProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;
- (void)removeObserver:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithProtocol:(id)a0 callbackQueue:(id)a1;
- (void)addObserver:(id)a0;

@end
