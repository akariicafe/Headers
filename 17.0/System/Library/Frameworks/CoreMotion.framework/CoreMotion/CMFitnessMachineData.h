@class NSString, NSDate;

@interface CMFitnessMachineData : NSObject <NSSecureCoding, NSCopying> {
    double fTimestamp;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int externalFitnessType;
@property (nonatomic) NSString *deviceIdentifier;
@property (nonatomic) NSString *manufacturer;
@property (nonatomic) NSString *model;
@property (readonly, nonatomic) NSDate *timestamp;
@property (nonatomic) double elapsedTime;
@property (nonatomic) double totalEnergy;
@property (nonatomic) double totalDistance;
@property (nonatomic) double totalElevationAscended;
@property (nonatomic) long long totalStrideCount;
@property (nonatomic) long long totalStrokeCount;
@property (nonatomic) long long totalFloorsClimbed;
@property (nonatomic) double instantaneousSpeed;
@property (nonatomic) double instantaneousCadence;
@property (nonatomic) double instantaneousPower;
@property (nonatomic) double inclination;
@property (nonatomic) double resistanceLevel;

+ (BOOL)isAvailable;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithTimestamp:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)convertToCLFitnessMachineData:(struct _CLFitnessMachineData { double x0; double x1; double x2; double x3; double x4; long long x5; long long x6; long long x7; double x8; double x9; int x10; double x11; double x12; int x13; double x14; double x15; int x16; double x17; double x18; double x19; int x20; BOOL x21; } *)a0 deviceId:(int)a1;
- (id)initWithExernalBikeSensorData:(double)a0 speed:(double)a1 cadence:(double)a2 power:(double)a3 model:(id)a4 deviceIdentifier:(id)a5 manufacturer:(id)a6 externalFitnessType:(int)a7;
- (void)initializeVariables;

@end
