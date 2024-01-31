@class NSString, CLLocationManagerRoutine, RTTripSegmentInertialDataStore;

@interface RTTripSegmentInertialDataManager : RTService <CLInertialDataManagerDelegate, RTPurgable, RTStoreManager>

@property (retain, nonatomic) CLLocationManagerRoutine *routineLocationManager;
@property (retain, nonatomic) RTTripSegmentInertialDataStore *inertialDataStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)vendedClasses;
+ (long long)periodicPurgePolicy;

- (void)performPurgeOfType:(long long)a0 referenceDate:(id)a1 completion:(id /* block */)a2;
- (void)fetchEnumerableObjectsWithOptions:(id)a0 offset:(unsigned long long)a1 handler:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;
- (void)inertialDataManager:(id)a0 didUpdateInertialData:(id)a1;
- (void)_addTripSegmentInertialData:(id)a0 handler:(id /* block */)a1;
- (void)_fetchTripSegmentInertialDataWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)addTripSegmentInertialData:(id)a0 handler:(id /* block */)a1;
- (void)fetchTripSegmentInertialDataWithOptions:(id)a0 handler:(id /* block */)a1;
- (id)initWithInertialDataStore:(id)a0 routineLocationManager:(id)a1;

@end
