@interface _TtCC7CoreODI17ODILocationHelperP33_C11C96CF10029B901485F256BEA33A5223LocationManagerDelegate : NSObject <CLLocationManagerDelegate> {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ parent;
    void /* unknown type, empty encoding */ _locationManager;
    void /* unknown type, empty encoding */ lock;
}

- (void)locationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;

@end
