@class MPMediaControlsConfiguration, MediaControlsHomeObserver, NSString, MPAVEndpointRoute, NSArray, NSMutableDictionary, NSObject, MPAVRoutingController;
@protocol OS_dispatch_queue, MediaControlsEndpointsManagerDelegate;

@interface MediaControlsEndpointsManager : NSObject <MPAVRoutingControllerDelegate, MediaControlsHomeObserverDelegate, MPAVOutputDevicePlaybackDataSource> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_endpointControllersMap;
    BOOL _didLoadHomeUIDsOnce;
    BOOL _isRequestingActiveRoute;
    BOOL _isUpdatingRoutes;
    NSArray *_pendingRoutesToUpdate;
}

@property (readonly, nonatomic) MediaControlsHomeObserver *homeObserver;
@property (readonly, nonatomic) MPAVRoutingController *routingController;
@property (readonly, copy, nonatomic) NSString *activeSystemRouteUID;
@property (readonly, copy, nonatomic) NSString *pendingActiveSystemRouteUID;
@property (readonly, nonatomic) MPAVEndpointRoute *activeSystemRoute;
@property (readonly, nonatomic) MPAVEndpointRoute *resolvedActiveSystemRoute;
@property (readonly, copy, nonatomic) MPMediaControlsConfiguration *configuration;
@property (nonatomic) long long discoveryMode;
@property (readonly, copy, nonatomic) NSArray *routes;
@property (weak, nonatomic) id<MediaControlsEndpointsManagerDelegate> delegate;
@property (readonly, nonatomic) BOOL isActiveSystemEndpointEqualToLocalEndpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)routingControllerAvailableRoutesDidChange:(id)a0;
- (void)prewarm;
- (void)getOutputDeviceIsPlaying:(id)a0 completion:(id /* block */)a1;
- (BOOL)_homeHasRoute:(id)a0;
- (void)dealloc;
- (id)_createSectionedCollectionFromRoutes:(id)a0;
- (void)_activeSystemRouteDidChange:(id)a0;
- (long long)_indexOfRouteWithUID:(id)a0;
- (id)endpointControllerForRoute:(id)a0;
- (void)setActiveSystemRoute:(id)a0 requestDetails:(id)a1;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)_endpointControllerContainingOutputDevice:(id)a0 endpointWrapper:(id *)a1;
- (void)setActiveSystemRoute:(id)a0 reason:(id)a1;
- (void)homeObserverDidUpdateKnownUIDs:(id)a0;
- (void)_updateActiveRouteWithReason:(id)a0;
- (void)_setRoutes:(id)a0 withChangeDetails:(id)a1;
- (void)_updateWithRoutes:(id)a0;

@end
