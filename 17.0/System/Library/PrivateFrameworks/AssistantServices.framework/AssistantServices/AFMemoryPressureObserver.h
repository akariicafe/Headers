@class NSString, NSHashTable, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AFMemoryPressureObserver : NSObject <AFInvalidating> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    unsigned long long _memoryPressureFlags;
    NSHashTable *_listeners;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedObserver;

- (void)addListener:(id)a0;
- (void)removeListener:(id)a0;
- (void)_handleMemoryPressureWithFlags:(unsigned long long)a0;
- (void)getCurrentConditionWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)invalidate;
- (void)_removeAllListeners;
- (void)_stopObservingMemoryPressure;
- (void).cxx_destruct;
- (void)_addListener:(id)a0;
- (void)_removeListener:(id)a0;
- (id)initWithOptions:(unsigned long long)a0;
- (void)removeAllListeners;
- (void)_startObservingMemoryPressureWithOptions:(unsigned long long)a0;

@end
