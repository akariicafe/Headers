@interface CPAudioRoutePolicyManager : NSObject <TURouteControllerDelegate, CPAudioRoutePolicyManager> {
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ routeController;
}

@property (class, nonatomic, readonly) CPAudioRoutePolicyManager *sharedInstance;

@property (nonatomic, retain) void /* unknown type, empty encoding */ pickedRoute;
@property (nonatomic, readonly) BOOL sharePlaySupported;

- (void)routesChangedForRouteController:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)switchToSpeakerRouteIfNecessary;
- (void)addObserver:(id)a0 withQueue:(id)a1;

@end
