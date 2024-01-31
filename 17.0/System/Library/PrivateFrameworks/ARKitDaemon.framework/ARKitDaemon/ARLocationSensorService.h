@class NSString;

@interface ARLocationSensorService : ARSensorService <ARRemoteLocationSensorService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceName;

- (id)initWithConnection:(id)a0;
- (void)configureForReplay;
- (void)currentLocationWithReply:(id /* block */)a0;
- (void)lookupAltitudeAtCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 completionHandler:(id /* block */)a1;
- (void)sensor:(id)a0 didOutputSensorData:(id)a1;
- (void)updateARSessionState:(unsigned long long)a0;
- (void)updateEstimationFromVIOPose:(id)a0 imageData:(id)a1;
- (id)updateFromDeviceOrientationData:(id)a0;
- (id)updateFromLocationData:(id)a0;
- (void)updateFromVisualLocalizationResult:(id)a0;

@end
