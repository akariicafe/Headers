@interface CBSensorOverrideFilter : CBFilter {
    struct { float x; float y; } _chromaticity;
    double _illuminance;
}

@property int orientation;

- (void)dealloc;
- (id)initWithData:(id)a0;
- (id)filterEvent:(id)a0;

@end
