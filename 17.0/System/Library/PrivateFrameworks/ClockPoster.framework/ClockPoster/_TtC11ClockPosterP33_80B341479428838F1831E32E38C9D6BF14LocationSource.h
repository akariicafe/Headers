@class NSString;

@interface _TtC11ClockPosterP33_80B341479428838F1831E32E38C9D6BF14LocationSource : NSObject <CLLocationManagerDelegate> {
    void /* unknown type, empty encoding */ _isLocationUpdating;
    void /* unknown type, empty encoding */ _location;
    void /* unknown type, empty encoding */ stream;
    void /* unknown type, empty encoding */ distanceFilter;
    void /* unknown type, empty encoding */ source;
    void /* unknown type, empty encoding */ inUseAssertion;
    void /* unknown type, empty encoding */ $__lazy_storage_$_locationManager;
    void /* unknown type, empty encoding */ locationQueue;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void).cxx_destruct;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;

@end
