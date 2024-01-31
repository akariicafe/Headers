@class BMSource, NSString, RTLocation, CLLocationManager, CLLocation, NSObject, BMStream;
@protocol OS_dispatch_source;

@interface _DKLocationCoordinatesMonitor : _DKMonitor <CLLocationManagerDelegate> {
    NSObject<OS_dispatch_source> *_fetchLoiTimer;
    CLLocationManager *_locationManager;
    CLLocation *_lastLocation;
    unsigned long long _lastLocationGeoHash300m;
    BMStream *_locationCoordinatesStream;
    BMSource *_locationCoordinatesStreamSource;
    BMStream *_locationHashedCoordinatesStream;
    BMSource *_locationHashedCoordinatesStreamSource;
}

@property (retain) RTLocation *home;
@property (retain) RTLocation *work;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventStream;
+ (id)log;
+ (id)entitlements;

- (id)init;
- (void)dealloc;
- (void)start;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)stop;
- (void)_fetchAndCacheLOIs;
- (void).cxx_destruct;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)deactivate;
- (int)speedRangeFrom:(double)a0;
- (int)altitudeRangeFrom:(double)a0;
- (int)distanceRangeFrom:(double)a0;
- (int)locationTypeFrom:(int)a0;

@end
