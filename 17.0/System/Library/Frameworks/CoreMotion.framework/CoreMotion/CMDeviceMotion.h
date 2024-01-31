@class CMAttitude;

@interface CMDeviceMotion : CMLogItem {
    id _internal;
}

@property (readonly, nonatomic) BOOL usingVisionCorrections;
@property (readonly, nonatomic) BOOL doingYawCorrection;
@property (readonly, nonatomic) BOOL doingBiasEstimation;
@property (readonly, nonatomic) int magneticFieldCalibrationLevel;
@property (readonly, nonatomic) double headingAccuracy;
@property (readonly, nonatomic) BOOL fusedWithVision;
@property (readonly, nonatomic) CMAttitude *attitude;
@property (readonly, nonatomic) struct { double x0; double x1; double x2; } rotationRate;
@property (readonly, nonatomic) struct { double x0; double x1; double x2; } gravity;
@property (readonly, nonatomic) struct { double x0; double x1; double x2; } userAcceleration;
@property (readonly, nonatomic) struct { struct { double x0; double x1; double x2; } x0; int x1; } magneticField;
@property (readonly, nonatomic) double heading;
@property (readonly, nonatomic) long long sensorLocation;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)initWithDeviceMotion:(struct { struct { double x0; double x1; double x2; double x3; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; struct { float x0; float x1; float x2; } x3; int x4; BOOL x5; BOOL x6; BOOL x7; float x8; BOOL x9; BOOL x10; int x11; })a0 internal:(struct { float x0; })a1 timestamp:(double)a2;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
