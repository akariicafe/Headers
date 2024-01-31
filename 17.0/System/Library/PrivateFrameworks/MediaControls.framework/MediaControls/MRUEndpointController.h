@class NSString, MPAVEndpointRoute, NSHashTable, MPCPlayerResponse, MediaControlsEndpointController;

@interface MRUEndpointController : NSObject <MediaControlsEndpointControllerDelegate>

@property (retain, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) MediaControlsEndpointController *endpointController;
@property (readonly, nonatomic) MPCPlayerResponse *response;
@property (readonly, copy, nonatomic) NSString *routeUID;
@property (readonly, copy, nonatomic) MPAVEndpointRoute *route;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) BOOL isEndpointDiscovered;
@property (readonly, nonatomic, getter=isAirPlaying) BOOL airplaying;
@property (readonly, nonatomic) BOOL isDeviceSystemRoute;
@property (readonly, nonatomic) BOOL updatesActiveEndpointInPlace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)proactiveEndpointController;
+ (id)userSelectedEndpointController;
+ (id)localEndpointController;
+ (id)proactiveRecommendedEndpointController;

- (void)launchNowPlayingApp;
- (id)initWithRouteUID:(id)a0 client:(id)a1 player:(id)a2;
- (void)removeObserver:(id)a0;
- (id)initWithEndpointController:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)connectAllowingAuthenticationWithCompletion:(id /* block */)a0;
- (BOOL)containsOutputDeviceWithRouteUID:(id)a0;
- (void)endpointController:(id)a0 didLoadNewResponse:(id)a1;
- (void)endpointControllerDidChangeState:(id)a0;
- (void)endpointControllerRouteDidUpdate:(id)a0;
- (void)notifyObserversRouteDidUpdate;

@end
