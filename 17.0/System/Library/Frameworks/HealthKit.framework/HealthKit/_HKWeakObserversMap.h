@class HKMultimap;

@interface _HKWeakObserversMap : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HKMultimap *_map;
}

- (id)init;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0 forKey:(id)a1;
- (void)addObserver:(id)a0 queue:(id)a1 forKey:(id)a2;
- (void)notifyObserversOfKey:(id)a0 handler:(id /* block */)a1;
- (id)test_observersForKey:(id)a0;

@end
