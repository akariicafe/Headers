@class CLCircularRegion;
@protocol ATXLocationManagerProtocol;

@interface ATXInformationHeuristicRefreshLocationTrigger : ATXInformationHeuristicRefreshTrigger <NSSecureCoding> {
    id<ATXLocationManagerProtocol> _locationManager;
    CLCircularRegion *_regionToMonitor;
    BOOL _previouslyInsideRegion;
    BOOL _previouslyOutsideRegion;
    id _token;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (BOOL)_locationIsStaleOrNotAccurateEnough:(id)a0 now:(id)a1;

- (void)_run;
- (void)_start;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_stop;
- (id)initWithCoder:(id)a0;
- (id)initWithEnteringLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radiusInMeters:(double)a1;
- (id)initWithExitingLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radiusInMeters:(double)a1;
- (id)initWithLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a0 notifyOnEntry:(BOOL)a1 notifyOnExit:(BOOL)a2 radiusInMeters:(double)a3;
- (id)initWithLocationManager:(id)a0 regionToMonitor:(id)a1;
- (void)updateWithInjectedLocationManager:(id)a0;

@end
