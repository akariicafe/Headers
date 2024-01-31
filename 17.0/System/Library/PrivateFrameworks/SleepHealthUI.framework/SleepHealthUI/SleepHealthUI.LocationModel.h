@interface SleepHealthUI.LocationModel : NSObject <CLLocationManagerDelegate> {
    void /* unknown type, empty encoding */ debugIdentifier;
    void /* unknown type, empty encoding */ options;
    void /* unknown type, empty encoding */ locationManager;
    void /* unknown type, empty encoding */ _currentLocation;
    void /* unknown type, empty encoding */ _currentCity;
    void /* unknown type, empty encoding */ _solarColors;
    void /* unknown type, empty encoding */ inUseAssertion;
}

- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
