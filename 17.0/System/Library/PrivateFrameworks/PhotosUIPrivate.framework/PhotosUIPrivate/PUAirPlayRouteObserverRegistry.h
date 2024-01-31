@class NSString, AVOutputDeviceDiscoverySession, NSHashTable, NSObject, NSDate;
@protocol OS_dispatch_queue, PUAirPlayRouteObserverRegistryDelegate;

@interface PUAirPlayRouteObserverRegistry : NSObject <PXSettingsKeyObserver>

@property (retain, nonatomic, setter=_setRouteObservers:) NSHashTable *_routeObservers;
@property (retain, nonatomic, setter=_setDiscoverySession:) AVOutputDeviceDiscoverySession *_discoverySession;
@property (retain, nonatomic, setter=_setDiscoverySessionIsolationQueue:) NSObject<OS_dispatch_queue> *_discoverySessionIsolationQueue;
@property (nonatomic, setter=_setRouteAvailability:) unsigned long long routeAvailability;
@property (nonatomic, getter=_isDiscoveryAllowed, setter=_setDiscoveryAllowed:) BOOL _discoveryAllowed;
@property (nonatomic) unsigned long long lastKnownRouteAvailability;
@property (retain, nonatomic) NSDate *lastKnownRouteAvailabilityDate;
@property (weak, nonatomic) id<PUAirPlayRouteObserverRegistryDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)_updateAllObservers;
- (void)_discoverySessionIsolationQueue_updateRouteAvailability;
- (void)_updateObserver:(id)a0;
- (void)_appEnteringForeground:(id)a0;
- (void)addRouteObserver:(id)a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void).cxx_destruct;
- (void)_updateDiscoverySession;
- (void)_appEnteredBackground:(id)a0;
- (void)removeRouteObserver:(id)a0;
- (void)_availableOutputDevicesDidChange:(id)a0;

@end
