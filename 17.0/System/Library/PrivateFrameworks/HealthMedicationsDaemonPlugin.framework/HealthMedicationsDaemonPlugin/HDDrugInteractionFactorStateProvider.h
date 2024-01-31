@class HDKeyValueDomain, HDDaemon, HKObserverSet;
@protocol HDDrugInteractionFactorStateObserver;

@interface HDDrugInteractionFactorStateProvider : NSObject <HDDrugInteractionFactorStateProvider, HDKeyValueDomainObserver> {
    HKObserverSet<HDDrugInteractionFactorStateObserver> *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HDKeyValueDomain *_lock_medicationsKeyValueDomain;
    BOOL _lock_isAlcoholDrugInteractionFactorEnabled;
    BOOL _lock_isMarijuanaDrugInteractionFactorEnabled;
    BOOL _lock_isTobaccoDrugInteractionFactorEnabled;
}

@property (readonly, weak, nonatomic) HDDaemon *daemon;

- (id)initWithDaemon:(id)a0;
- (id)init;
- (void)dealloc;
- (void)didUpdateKeyValueDomain:(id)a0;
- (long long)hasDrugInteractionFactorInProfile:(id)a0;
- (void)addDrugInteractionFactorStateObserver:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (void)removeDrugInteractionFactorStateObserver:(id)a0;
- (void)monitorDrugInteractionFactorsInProfile:(id)a0;

@end
