@class NSPointerArray;

@interface ARUIObserverStore : NSObject {
    NSPointerArray *_observers;
}

@property (readonly, nonatomic) unsigned long long count;

- (void)enumerateObserversWithBlock:(id /* block */)a0;
- (id)init;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;

@end
