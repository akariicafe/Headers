@protocol FBSOrientationObserverClientDelegate;

@interface FBSOrientationObserverClient : FBSServiceFacilityClient {
    id<FBSOrientationObserverClientDelegate> _delegate;
    unsigned int _interest;
}

- (long long)activeInterfaceOrientation;
- (void)handleMessage:(id)a0 withType:(long long)a1;
- (void)configureConnectMessage:(id)a0;
- (void)invalidate;
- (id)initWithDelegate:(id)a0 calloutQueue:(id)a1;
- (void)_getActiveInterfaceOrientationSynchronously:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)registerOrientationInterest:(unsigned int)a0;
- (void).cxx_destruct;
- (void)activeInterfaceOrientationWithCompletion:(id /* block */)a0;

@end
