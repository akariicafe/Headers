@interface ARGeoTrackingTechniqueStatePose : NSObject

@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } transform;
@property (readonly, nonatomic) BOOL fused;
@property (readonly, nonatomic) double heading;

- (id)initWithTimestamp:(double)a0 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 fused:(BOOL)a2 heading:(double)a3;

@end
