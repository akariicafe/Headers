@class HKObserverSet, NSString, HKHealthStore, HKTaskServerProxyProvider, NSUserDefaults;

@interface HKHeartbeatSeriesFeatureStatusManager : NSObject <HKHeartbeatSeriesFeatureStatusManagerClient, _HKXPCExportable> {
    HKHealthStore *_healthStore;
    HKObserverSet *_observers;
    HKTaskServerProxyProvider *_proxyProvider;
    NSUserDefaults *_heartNotificationsUserDefaults;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (id)exportedInterface;
- (void)registerObserver:(id)a0 queue:(id)a1;
- (id)remoteInterface;
- (void)dealloc;
- (void)unregisterObserver:(id)a0;
- (id)initWithHealthStore:(id)a0;
- (void)connectionInvalidated;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)_handleAutomaticProxyReconnection;
- (void)_startObservingWithActivationHandler:(id /* block */)a0;
- (id)_synchronouslyStartObservingWithError:(id *)a0;
- (void)registerObserver:(id)a0 queue:(id)a1 activationHandler:(id /* block */)a2;
- (void)client_heartbeatSeriesFeatureStatusManagerDidFailToUpdateWithError:(id)a0;
- (void)client_heartbeatSeriesFeatureStatusManagerDidUpdatePredominantFeature:(long long)a0;
- (void)_notifyObserversForFailureToUpdateWithError:(id)a0;
- (void)_notifyObserversForPredominantFeatureUpdate:(long long)a0;
- (void)_startObservingHeartNotificationsUserDefaults;
- (void)_updateAndNotifyAllObservers;
- (id)initWithHealthStore:(id)a0 heartNotificationsUserDefaults:(id)a1;

@end
