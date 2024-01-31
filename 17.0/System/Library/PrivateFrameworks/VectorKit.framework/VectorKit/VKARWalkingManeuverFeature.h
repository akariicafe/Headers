@class NSString;

@interface VKARWalkingManeuverFeature : VKARWalkingFeature {
    struct _retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { void /* function */ **_vptr$_retain_ptr; NSString *_obj; struct _retain_objc_arc { } _retain; struct _release_objc_arc { } _release; } _displayText;
}

@property (readonly, nonatomic) struct { double latitude; double longitude; double altitude; } position;
@property (readonly, nonatomic) struct Coordinate3D<geo::Degrees, double> { struct Unit<geo::DegreeUnitDescription, double> { double x0; } x0; struct Unit<geo::DegreeUnitDescription, double> { double x0; } x1; struct Unit<geo::MeterUnitDescription, double> { double x0; } x2; } coordinate;
@property (readonly, nonatomic) struct PolylineCoordinate { unsigned int index; float offset; } routeCoordinate;
@property (readonly, nonatomic) NSString *displayText;
@property (readonly, nonatomic) double maneuverHeading;

- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)setDisplayText:(id)a0;
- (id)initWithDisplayLocation:(struct { double x0; double x1; double x2; })a0 routeCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a1 maneuverHeading:(double)a2 displayText:(id)a3;
- (id)initWithDisplayLocation:(struct { double x0; double x1; double x2; })a0 routeCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a1 maneuverHeading:(double)a2 displayText:(id)a3 maneuverPriority:(unsigned long long)a4;

@end
