@interface NPKThreadSafeObserverManager : NPKObserverManager {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _internalLock;
}

- (id)init;
- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)enumerateObserversUsingBlock:(id /* block */)a0;
- (void)registerObserver:(id)a0 withRelativePriority:(unsigned long long)a1;

@end
