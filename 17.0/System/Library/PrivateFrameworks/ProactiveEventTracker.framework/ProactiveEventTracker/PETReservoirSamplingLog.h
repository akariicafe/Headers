@class NSObject;
@protocol PETReservoirSamplingLogStore;

@interface PETReservoirSamplingLog : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSObject<PETReservoirSamplingLogStore> *_store;
    unsigned int _limit;
    struct { unsigned long long s[2]; } _rng;
}

- (void)clear;
- (void)_enumerateItemsWithBlockLocked:(id /* block */)a0;
- (id)init;
- (void)dealloc;
- (id)initWithPath:(id)a0 limit:(unsigned long long)a1;
- (void)_clearLocked;
- (void)enumerateAndClearItemsWithBlock:(id /* block */)a0;
- (void)unlock;
- (void)_unlock;
- (BOOL)_readHeader;
- (void).cxx_destruct;
- (void)log:(id)a0;
- (id)initWithStore:(id)a0 limit:(unsigned long long)a1;
- (BOOL)_lock;
- (void)_gc;
- (id)initInMemoryWithLimit:(unsigned long long)a0;
- (void)enumerateItemsWithBlock:(id /* block */)a0;

@end
