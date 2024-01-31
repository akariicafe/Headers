@class NSString;

@interface HomeEnergyUI.HomeEnergyWindowsModel : NSObject <CLLocationManagerDelegate> {
    void /* unknown type, empty encoding */ _energyWindows;
    void /* unknown type, empty encoding */ _state;
    void /* unknown type, empty encoding */ _gridID;
    void /* unknown type, empty encoding */ _locationCity;
    void /* unknown type, empty encoding */ _isNotificationEnabled;
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ widgetKitMode;
    void /* unknown type, empty encoding */ countryCode;
    void /* unknown type, empty encoding */ nextWindowTypeChangeTimer;
    void /* unknown type, empty encoding */ location;
    void /* unknown type, empty encoding */ isValid;
    void /* unknown type, empty encoding */ $__lazy_storage_$_locationManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_geoCoder;
    void /* unknown type, empty encoding */ forceReverseGeoCode;
}

@property (nonatomic, readonly) NSString *description;

- (void)locationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)processNextWindowTypeChangeTimeout;
- (id)init;
- (void).cxx_destruct;

@end
