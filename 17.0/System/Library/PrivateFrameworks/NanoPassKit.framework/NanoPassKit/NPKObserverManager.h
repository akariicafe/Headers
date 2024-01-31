@class NSMutableDictionary, NSMutableIndexSet;

@interface NPKObserverManager : NSObject {
    NSMutableIndexSet *_priorityIndexSet;
    NSMutableDictionary *_observersTables;
}

- (id)init;
- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void).cxx_destruct;
- (void)enumerateObserversUsingBlock:(id /* block */)a0;
- (void)_enumerateObserversUsingBlock:(id /* block */)a0;
- (void)_registerObserver:(id)a0;
- (void)_enumerateObserversTablesCopy:(BOOL)a0 withBlock:(id /* block */)a1;
- (void)_registerObserver:(id)a0 withRelativePriority:(unsigned long long)a1;
- (void)_unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0 withRelativePriority:(unsigned long long)a1;

@end
