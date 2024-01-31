@class HKObserverSet, NSString, HDAssertionManager, CLLocationManager, CLInUseAssertion;
@protocol HDLocationManagerUnitTestDelegate;

@interface HDLocationManager : NSObject <HDAssertionObserver, CLLocationManagerDelegate> {
    HDAssertionManager *_assertionManager;
    CLLocationManager *_locationManager;
    CLInUseAssertion *_inUseAssertion;
    HKObserverSet *_observers;
    id /* block */ _locationManagerConfiguration;
}

@property (weak, nonatomic) id<HDLocationManagerUnitTestDelegate> unitTestDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_mainQueue_takeLocationUpdatingAssertionWithAccuracy:(double)a0;
- (id)_unitTest_locationManager;
- (void)assertionManager:(id)a0 assertionInvalidated:(id)a1;
- (void)requestWhenInUseAuthorization;
- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)_unitTest_setLocationManagerConfiguration:(id /* block */)a0;
- (id)takeLocationUpdatingAssertionForOwnerIdentifier:(id)a0 desiredAccuracy:(double)a1;
- (void).cxx_destruct;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)_unitTest_didTakeAssertion:(id)a0;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)_unitTest_didInvalidateAssertion:(id)a0;
- (id)_mainQueue_newLocationManagerWithEffectiveBundlePath:(id)a0;
- (void)addObserver:(id)a0;
- (void)_mainQueue_updateLocationManager;
- (void)_mainQueue_releaseLocationUpdatingAssertion;

@end
