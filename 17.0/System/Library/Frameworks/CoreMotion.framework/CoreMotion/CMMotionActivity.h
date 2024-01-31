@class NSDate;

@interface CMMotionActivity : CMLogItem {
    struct CLMotionActivity { int type; int confidence; int source; int mountedState; int mountedConfidence; int conservativeMountedState; double conservativeMountedProbability; BOOL isStanding; float tilt; double timestamp; BOOL isVehicleConnected; int exitState; double estExitTime; double startTime; int rawType; int rawConfidence; struct { unsigned char motionHint : 1; unsigned char gpsHint : 1; unsigned char basebandHint : 1; unsigned char wifiHint : 1; unsigned char btHint : 1; } vehicularFlags; int vehicularConfidence; int workoutDetectionType; double workoutDetectionTime; unsigned long long workoutEscalationTime; int typeYouth; } fState;
    double fEndTime;
}

@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic, getter=isVehicleConnected) BOOL vehicleConnected;
@property (readonly, nonatomic, getter=isVehicleWifiHint) BOOL vehicleWifiHint;
@property (readonly, nonatomic, getter=isVehicleGpsHint) BOOL vehicleGpsHint;
@property (readonly, nonatomic, getter=isVehicleBasebandHint) BOOL vehicleBasebandHint;
@property (readonly, nonatomic, getter=isVehicleMotionHint) BOOL vehicleMotionHint;
@property (readonly, nonatomic, getter=isVehicleBTHint) BOOL vehicleBTHint;
@property (readonly, nonatomic, getter=isMounted) BOOL mounted;
@property (readonly, nonatomic) double mountedProbability;
@property (readonly, nonatomic) long long confidence;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) BOOL unknown;
@property (readonly, nonatomic) BOOL stationary;
@property (readonly, nonatomic) BOOL walking;
@property (readonly, nonatomic) BOOL running;
@property (readonly, nonatomic) BOOL automotive;
@property (readonly, nonatomic) BOOL cycling;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (struct CLMotionActivity { int x0; int x1; int x2; int x3; int x4; int x5; double x6; BOOL x7; float x8; double x9; BOOL x10; int x11; double x12; double x13; int x14; int x15; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x16; int x17; int x18; double x19; unsigned long long x20; int x21; } *)motionActivity;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMotionActivity:(struct CLMotionActivity { int x0; int x1; int x2; int x3; int x4; int x5; double x6; BOOL x7; float x8; double x9; BOOL x10; int x11; double x12; double x13; int x14; int x15; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x16; int x17; int x18; double x19; unsigned long long x20; int x21; })a0 endDate:(id)a1;
- (id)initWithMotionActivity:(struct CLMotionActivity { int x0; int x1; int x2; int x3; int x4; int x5; double x6; BOOL x7; float x8; double x9; BOOL x10; int x11; double x12; double x13; int x14; int x15; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x16; int x17; int x18; double x19; unsigned long long x20; int x21; })a0;
- (BOOL)isSameStateAs:(id)a0;

@end
