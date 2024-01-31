@class HKHealthStore, NSObject;
@protocol OS_dispatch_queue;

@interface REHealthStore : RESingleton {
    HKHealthStore *_healthStore;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)_init;
- (void).cxx_destruct;
- (BOOL)_isClockHostApp;
- (id)_createStore;
- (void)accessHealthStore:(id /* block */)a0;

@end
