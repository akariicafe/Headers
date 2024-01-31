@class NSMutableDictionary;

@interface GTObservableService : NSObject {
    NSMutableDictionary *_observerIdToObserver;
    unsigned long long _nextObserverId;
}

@property (readonly) unsigned long long count;

- (id)init;
- (unsigned long long)registerObserver:(id)a0;
- (void).cxx_destruct;
- (void)deregisterObserver:(unsigned long long)a0;
- (void)deregisterObserversForConnection:(id)a0 path:(id)a1;
- (void)notifyAll:(id /* block */)a0;

@end
