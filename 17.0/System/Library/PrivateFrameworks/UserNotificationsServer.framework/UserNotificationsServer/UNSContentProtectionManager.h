@class UNSKeyedObservable, NSObject;
@protocol OS_dispatch_queue;

@interface UNSContentProtectionManager : NSObject {
    long long _contentProtectionState;
    BOOL _unlockedSinceBoot;
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_queue;
    UNSKeyedObservable *_observable;
}

- (BOOL)isProtectedDataAvailable;
- (id)classDStrategy;
- (id)classDStrategyExcludedFromBackup;
- (id)init;
- (id)contentProtectionStrategyForMinimumProtection:(id)a0 excludedFromBackup:(BOOL)a1;
- (void)dealloc;
- (void)removeContentProtectionObserver:(id)a0;
- (void)addContentProtectionObserver:(id)a0;
- (long long)_queue_keyBagLockState;
- (id)classCStrategy;
- (void)_queue_adjustContentProtectionStateWithBlock:(id /* block */)a0;
- (long long)_queue_observedState;
- (void).cxx_destruct;
- (id)classCStrategyExcludedFromBackup;
- (long long)observedState;
- (BOOL)deviceUnlockedSinceBoot;

@end
