@class NSObject, NSMutableDictionary, NSHashTable;
@protocol OS_dispatch_queue;

@interface BYNetworkMonitor : NSObject {
    struct __SCNetworkReachability { } *_reachability;
    NSHashTable *_observers;
    int _currentNetworkType;
    NSMutableDictionary *_networkTypeBlocks;
    NSObject<OS_dispatch_queue> *_networkTypeQueue;
}

+ (id)sharedInstance;
+ (BOOL)holdsWiFiAssertion;
+ (void)setHoldsWiFiAssertion:(BOOL)a0;

- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (int)currentNetworkType;
- (void)_initNetworkObservation;
- (int)_networkTypeFromFlags:(unsigned int)a0;
- (void).cxx_destruct;
- (void)withMinimumNetworkType:(int)a0 timeout:(double)a1 runBlock:(id /* block */)a2;
- (void)setCurrentNetworkType:(int)a0;
- (void)addObserver:(id)a0;

@end
