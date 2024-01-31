@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface AFNetworkAvailability : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    int _notifyToken;
    struct AvailabilityState { unsigned char availabilityIsKnown : 1; unsigned char isAvailable : 1; } _state;
    NSHashTable *_observers;
}

+ (id)sharedAvailability;

- (void)_notifyObservers;
- (void)_availabilityChanged;
- (id)init;
- (void)removeObserver:(id)a0;
- (void)_updateState;
- (void)_clearState;
- (void)_stopObservingAvailability;
- (void).cxx_destruct;
- (BOOL)isAvailable;
- (void)addObserver:(id)a0;
- (void)_startObservingAvailability;

@end
