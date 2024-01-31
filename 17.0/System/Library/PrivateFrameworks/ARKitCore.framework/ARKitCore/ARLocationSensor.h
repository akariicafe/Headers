@class _CLLocationPlayer, ARLocationData, NSString, CLLocationManager, VLLocalizer, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, CLLocationManagerDelegate, ARSensorDelegate;

@interface ARLocationSensor : NSObject <CLLocationManagerDelegate, ARSensor> {
    NSString *_bundleIdentifier;
    CLLocationManager *_locationManager;
    _CLLocationPlayer *_locationPlayer;
    VLLocalizer *_localizer;
    BOOL _isLiveSensor;
    BOOL _isStopped;
    NSObject<OS_dispatch_queue> *_locationManagerQueue;
    double _lastVIOUpdateTimestamp;
    double _lastVLUpdateTimestamp;
    double _lastLocationUpdateTimestamp;
    NSMutableArray *_altitudeSkipTiles;
    id<ARSensorDelegate> _delegate;
}

@property (retain) ARLocationData *currentLocation;
@property (weak, nonatomic) id<CLLocationManagerDelegate> locationManagerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ARSensorDelegate> delegate;
@property (nonatomic) unsigned long long powerUsage;

- (id)init;
- (void)dealloc;
- (void)start;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)stop;
- (void).cxx_destruct;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (id)initWithBundleIdentifier:(id)a0;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (id)_createLocationManager;
- (void)_attemptAltitudeLookupAtCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 attemptCount:(unsigned int)a1 lookupStartDate:(id)a2 completionHandler:(id /* block */)a3;
- (id)_validateLocationAuthorization;
- (void)configureForReplay;
- (void)lookupAltitudeAtCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 completionHandler:(id /* block */)a1;
- (unsigned long long)providedDataTypes;
- (void)updateARSessionState:(unsigned long long)a0;
- (void)updateEstimationFromVIOPose:(id)a0 imageData:(id)a1;
- (id)updateFromDeviceOrientationData:(id)a0;
- (id)updateFromLocationData:(id)a0;
- (void)updateFromVisualLocalizationResult:(id)a0;
- (void)waitForOutstandingCallbacks;

@end
