@class NSHashTable;

@interface CRXUWeakObserverList : NSObject {
    NSHashTable *_observers;
}

- (id)init;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)observersRespondingToSelector:(SEL)a0;

@end
