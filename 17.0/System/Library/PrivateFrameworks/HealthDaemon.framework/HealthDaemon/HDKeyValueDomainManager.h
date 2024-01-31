@class _HKWeakObserversMap, HDProfile, NSMutableSet;

@interface HDKeyValueDomainManager : NSObject {
    _HKWeakObserversMap *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _pendingNotificationLock;
    NSMutableSet *_pendingNotificationKeys;
    BOOL _hasAddedTransactionOnCommitBlock;
}

@property (weak, nonatomic) HDProfile *profile;

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (void)_notifyObserversFor:(id)a0;
- (id)_observerKeyForDomain:(id)a0;
- (id)_observerKeyForDomainName:(id)a0 category:(long long)a1;
- (void)batchNotificationForDomain:(id)a0 category:(long long)a1 forTransaction:(id)a2;
- (void)startObservationForDomain:(id)a0;
- (void)stopObservationForDomain:(id)a0;

@end
