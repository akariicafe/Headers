@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HDAssertionManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSMutableDictionary *_assertionRecordsByIdentifier;
    NSMutableDictionary *_observerSetsByAssertionIdentifier;
    BOOL _invalidated;
    BOOL _consumeBudgets;
    NSObject<OS_dispatch_source> *_budgetConsumptionTimer;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *budgetTimerQueue;

- (BOOL)takeAssertion:(id)a0;
- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)resumeBudgetConsumption;
- (void)_releaseAssertion:(id)a0;
- (void)invalidate;
- (id)ownerIdentifiersForAssertionIdentifier:(id)a0;
- (void)removeObserver:(id)a0 forAssertionIdentifier:(id)a1;
- (void).cxx_destruct;
- (BOOL)hasActiveAssertion:(id)a0;
- (id)allAssertionsForIdentifier:(id)a0;
- (void)suspendBudgetConsumption;
- (BOOL)hasActiveAssertionForIdentifier:(id)a0;
- (id)activeAssertionsForIdentifier:(id)a0;
- (void)addObserver:(id)a0 forAssertionIdentifier:(id)a1 queue:(id)a2;

@end
