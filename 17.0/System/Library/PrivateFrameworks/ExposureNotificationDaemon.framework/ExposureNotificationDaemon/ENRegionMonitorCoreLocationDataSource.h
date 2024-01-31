@class RTRoutineManager, NSString, CLLocationManager, ENRegionVisit, NSObject;
@protocol OS_dispatch_queue, ENRegionMonitorSourceDelegate;

@interface ENRegionMonitorCoreLocationDataSource : NSObject <ENRegionMonitorDataSource, CLLocationManagerDelegate>

@property (copy, nonatomic) ENRegionVisit *cachedRegionVisit;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CLLocationManager *locationManager;
@property (retain, nonatomic) RTRoutineManager *routineManager;
@property (weak, nonatomic) NSObject<ENRegionMonitorSourceDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopMonitoring;
- (void)_setup;
- (void)locationManager:(id)a0 didVisit:(id)a1;
- (id)initWithDelegate:(id)a0 routineManager:(id)a1;
- (void)_processVisit:(id)a0;
- (void)_updatedRegion;
- (void)_processLocation:(id)a0 locationOfInterest:(id)a1;
- (void)processLocation:(id)a0 locationOfInterest:(id)a1;
- (void).cxx_destruct;
- (id)currentRegionVisit;
- (void)processLocation:(id)a0 locationsOfInterest:(id)a1;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)_processLocation:(id)a0 locationsOfInterest:(id)a1;
- (id)initWithDelegate:(id)a0;
- (void)_processLocation:(id)a0;
- (void)updateRegion;
- (void)startMonitoring;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)_updateRegionVisit:(id)a0;
- (BOOL)updateRegionAllowed;
- (void)setup;
- (void)updateRegionVisit:(id)a0;

@end
