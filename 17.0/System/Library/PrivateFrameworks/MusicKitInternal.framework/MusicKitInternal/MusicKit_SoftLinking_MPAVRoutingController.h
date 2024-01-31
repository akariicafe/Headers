@class NSString, MPAVRoutingController;

@interface MusicKit_SoftLinking_MPAVRoutingController : NSObject <MPAVRoutingControllerDelegate> {
    MPAVRoutingController *_underlyingRoutingController;
}

@property (copy, nonatomic) id /* block */ routesDidUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)routingControllerAvailableRoutesDidChange:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_handleRoutesDidChange:(id)a0;
- (void)beginRouteDiscovery;
- (void)endRouteDiscovery;

@end
