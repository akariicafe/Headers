@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MPAVTelevisionRoutingDataSource : MPAVRoutingDataSource {
    void *_discoveryController;
    NSMutableArray *_discoveredTelevisions;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

- (void)getPickedRouteHasVolumeControlWithCompletion:(id /* block */)a0;
- (BOOL)devicePresenceDetected;
- (id)init;
- (void)dealloc;
- (id)getRoutesForCategory:(id)a0;
- (id)_discoveredTelevisions;
- (void)setDiscoveryMode:(long long)a0;
- (void).cxx_destruct;
- (void)_onQueue_controllerDidRemoveTelevision:(void *)a0;
- (void)_onQueue_controllerDidDiscoverTelevision:(void *)a0;

@end
