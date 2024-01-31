@interface VKARWalkingArrivalStoreFront : NSObject {
    struct Matrix<float, 2, 1> { float _e[2]; } _dimensionsInMeters;
}

@property (readonly, nonatomic) struct OrientedBox<double, 2U, double, double> { struct RigidTransform<double, double> { struct Matrix<double, 3, 1> { double _e[3]; } _translation; struct Quaternion<double> { struct Matrix<double, 3, 1> { double _e[3]; } _imaginary; double _scalar; } _rotation; } _transform; struct Box<double, 2> { struct Matrix<double, 2, 1> { double _e[2]; } _minimum; struct Matrix<double, 2, 1> { double _e[2]; } _maximum; } _bounds; } face;
@property (readonly, nonatomic) struct Coordinate3D<geo::Degrees, double> { struct Unit<geo::DegreeUnitDescription, double> { double x0; } x0; struct Unit<geo::DegreeUnitDescription, double> { double x0; } x1; struct Unit<geo::MeterUnitDescription, double> { double x0; } x2; } bottomCenterCoordinate;
@property (readonly, nonatomic) struct Mercator3<double> { double x0[3]; } bottomCenterPoint;
@property (readonly, nonatomic) struct Matrix<double, 3, 1> { double x0[3]; } normal;
@property (readonly, nonatomic) struct Unit<geo::MeterUnitDescription, double> { double x0; } faceWidthInMeters;
@property (readonly, nonatomic) struct Unit<geo::MeterUnitDescription, double> { double x0; } faceHeightInMeters;
@property (readonly, nonatomic) struct Unit<geo::MeterUnitDescription, double> { double _value; } appliedUndulation;

- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithGEOOrientedBox:(id)a0 undulationProvider:(id /* block */)a1;
- (id)initWithOrientedRect:(const void *)a0;
- (id)initWithOrientedRect:(const void *)a0 undulationProvider:(id /* block */)a1;
- (id)initWithYaw:(float)a0 pitch:(float)a1 roll:(float)a2 x:(double)a3 y:(double)a4 z:(double)a5 w:(float)a6 h:(float)a7 undulationProvider:(id /* block */)a8;

@end
