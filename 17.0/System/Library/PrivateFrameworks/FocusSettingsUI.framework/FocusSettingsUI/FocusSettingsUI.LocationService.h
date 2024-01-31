@interface FocusSettingsUI.LocationService : NSObject <CLLocationManagerDelegate, MKLocalSearchCompleterDelegate> {
    void /* unknown type, empty encoding */ _queryFragment;
    void /* unknown type, empty encoding */ _status;
    void /* unknown type, empty encoding */ _searchResults;
    void /* unknown type, empty encoding */ completionCancellable;
    void /* unknown type, empty encoding */ queryCancellable;
    void /* unknown type, empty encoding */ locationManager;
    void /* unknown type, empty encoding */ completer;
    void /* unknown type, empty encoding */ _completions;
    void /* unknown type, empty encoding */ _searchCompletion;
    void /* unknown type, empty encoding */ locationQueue;
    void /* unknown type, empty encoding */ localRegion;
    void /* unknown type, empty encoding */ searchNearCurrentLocation;
}

- (id)init;
- (void).cxx_destruct;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)completerDidUpdateResults:(id)a0;

@end
