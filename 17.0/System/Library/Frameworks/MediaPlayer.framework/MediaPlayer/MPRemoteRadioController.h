@class NSXPCListener, RadioAvailabilityController, NSString, NSMutableSet, RadioRecentStationsController;

@interface MPRemoteRadioController : NSObject <MPServiceRadioController, NSXPCListenerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableSet *_connections;
    BOOL _hasRefreshedStations;
    NSXPCListener *_listener;
}

@property (readonly, nonatomic) RadioAvailabilityController *availabilityController;
@property (readonly, nonatomic) RadioRecentStationsController *recentStationsController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_addConnection:(id)a0;
- (id)init;
- (void)dealloc;
- (void)serviceRadioControllerGetRecentStationGroupsWithCompletionHandler:(id /* block */)a0;
- (void)start;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)serviceRadioControllerGetRadioAvailabilityWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_radioAvailabilityControllerRadioAvailableDidChangeNotification:(id)a0;
- (void)_removeConnection:(id)a0;
- (void)_recentStationsControllerDidChangeStationsNotification:(id)a0;
- (void)_playActivityReportingControllerDidFlushEventsNotification:(id)a0;
- (void)_handleRecentStationsControllerDidChange;

@end
