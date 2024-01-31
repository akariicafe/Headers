@interface PXPlacesLocationAuthorizationMonitor : NSObject <CLLocationManagerDelegate> {
    void /* unknown type, empty encoding */ locationManager;
    void /* unknown type, empty encoding */ _authorizationStatus;
    void /* unknown type, empty encoding */ observable;
}

@property (class, nonatomic, readonly) PXPlacesLocationAuthorizationMonitor *sharedInstance;

- (void)locationManagerDidChangeAuthorization:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
