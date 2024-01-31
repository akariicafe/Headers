@class NSMutableDictionary, NSMapTable, NSMutableSet, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface _CDContextualLocationRegistrationMonitor : NSObject <CLLocationManagerDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableSet *registrations;
@property (readonly, nonatomic) NSMutableDictionary *managers;
@property (readonly, nonatomic) NSMapTable *effectiveBundleIDs;
@property (readonly) NSMutableDictionary *effectiveBundleIDRegionInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)locationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;
- (void)locationManager:(id)a0 didStartMonitoringForRegion:(id)a1;
- (void)locationManager:(id)a0 didDetermineState:(long long)a1 forRegion:(id)a2;
- (id)init;
- (void)locationManager:(id)a0 monitoringDidFailForRegion:(id)a1 withError:(id)a2;
- (void).cxx_destruct;
- (void)addRegistration:(id)a0;
- (id)regionInfosForRegistration:(id)a0;
- (void)removeRegistration:(id)a0;

@end
