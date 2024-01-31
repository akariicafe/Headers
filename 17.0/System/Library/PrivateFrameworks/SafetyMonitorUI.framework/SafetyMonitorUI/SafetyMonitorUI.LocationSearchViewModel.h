@interface SafetyMonitorUI.LocationSearchViewModel : NSObject <CLLocationManagerDelegate, MKLocalSearchCompleterDelegate> {
    void /* unknown type, empty encoding */ _locationSearchText;
    void /* unknown type, empty encoding */ _searchedLocations;
    void /* unknown type, empty encoding */ _selectedLocation;
    void /* unknown type, empty encoding */ _selectedLocationValidity;
    void /* unknown type, empty encoding */ _destinationType;
    void /* unknown type, empty encoding */ _selectedFenceSize;
    void /* unknown type, empty encoding */ _annotations;
    void /* unknown type, empty encoding */ cancellableSet;
    void /* unknown type, empty encoding */ safetyMonitorManager;
    void /* unknown type, empty encoding */ mkLocalSearchCompleter;
    void /* unknown type, empty encoding */ locationManager;
    void /* unknown type, empty encoding */ _endLocation;
}

- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)completerDidUpdateResults:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
