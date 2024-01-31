@interface CMADeviceMotion : NSObject

@property (nonatomic) double timestamp;
@property (nonatomic) struct { double x; double y; double z; double w; } quaternion;
@property (nonatomic) struct { double x; double y; double z; } rotationRate;
@property (nonatomic) struct { double x; double y; double z; } acceleration;

@end
