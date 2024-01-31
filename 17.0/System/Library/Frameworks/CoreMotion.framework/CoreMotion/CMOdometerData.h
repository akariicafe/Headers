@class NSString, NSNumber, NSDate;

@interface CMOdometerData : NSObject <SRSampling, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSNumber *distance;
@property (retain, nonatomic) NSNumber *currentSpeed;
@property (retain, nonatomic) NSNumber *averageSpeed;
@property (retain, nonatomic) NSNumber *accuracy;
@property (retain, nonatomic) NSNumber *gpsAltitude;
@property (retain, nonatomic) NSNumber *rawSpeed;
@property (retain, nonatomic) NSNumber *odometer;
@property (retain, nonatomic) NSNumber *gpsSpeedAccuracy;
@property (retain, nonatomic) NSNumber *timestampGps;
@property (retain, nonatomic) NSNumber *groundAltitude;
@property (retain, nonatomic) NSNumber *groundAltitudeUncertainty;
@property (retain, nonatomic) NSNumber *smoothedGPSAltitude;
@property (retain, nonatomic) NSNumber *smoothedGPSAltitudeUncertainty;
@property (retain, nonatomic) NSNumber *gpsCourseRadians;
@property (retain, nonatomic) NSNumber *gpsCourseAccuracy;
@property (retain, nonatomic) NSNumber *deltaGroundAltitude;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) double deltaDistance;
@property (readonly, nonatomic) double deltaDistanceAccuracy;
@property (readonly, nonatomic) double speed;
@property (readonly, nonatomic) double speedAccuracy;
@property (readonly, nonatomic) NSDate *gpsDate;
@property (readonly, nonatomic) double deltaAltitude;
@property (readonly, nonatomic) double verticalAccuracy;
@property (readonly, nonatomic) long long originDevice;
@property (readonly, nonatomic) NSNumber *slope;
@property (readonly, nonatomic) NSNumber *maxAbsSlope;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)binarySampleRepresentation;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;
- (id)initWithDeltaDistance:(double)a0 startDate:(id)a1 endDate:(id)a2 accuracy:(id)a3 rawSpeed:(id)a4 gpsSpeedAccuracy:(id)a5 timestampGps:(id)a6 deltaGroundAltitude:(id)a7 groundAltitudeUncertainty:(id)a8 originDevice:(long long)a9 slope:(id)a10 maxAbsSlope:(id)a11;
- (id)initWithDistance:(id)a0 startDate:(id)a1 endDate:(id)a2 currentSpeed:(id)a3 averageSpeed:(id)a4;
- (id)relativeTimestampGps;
- (void)updateStartDate:(id)a0;

@end
