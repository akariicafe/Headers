@class NSArray, NSMeasurement, NSDictionary, NSDate;

@interface GDKTSDataRepresentation : NSObject <GDKTSDataRepresentationProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSDate *endTime;
@property (readonly, nonatomic) NSMeasurement *distanceInMeters;
@property (readonly, nonatomic) NSMeasurement *elevationGainInMeters;
@property (readonly, nonatomic) NSArray *distanceBuckets;
@property (readonly, nonatomic) NSMeasurement *durationInSeconds;
@property (readonly, nonatomic) NSMeasurement *expectedDurationInSecondsNoTraffic;
@property (readonly, nonatomic) NSArray *distanceSpentInTrafficBuckets;
@property (readonly, nonatomic) NSArray *timeSpentInTrafficBuckets;
@property (readonly, nonatomic) NSArray *distanceSpentAtSpeedBuckets;
@property (readonly, nonatomic) NSArray *timeSpentAtSpeedBuckets;
@property (readonly, nonatomic) NSArray *distanceSpentAtRelativeSpeeds;
@property (readonly, nonatomic) NSArray *timeSpentAtRelativeSpeeds;
@property (readonly, nonatomic) NSArray *distancePerRoadType;
@property (readonly, nonatomic) NSArray *timePerRoadType;
@property (readonly, nonatomic) NSArray *distancePerWeatherType;
@property (readonly, nonatomic) NSArray *timePerWeatherType;
@property (readonly, nonatomic) NSArray *distancePerTerrainType;
@property (readonly, nonatomic) NSArray *timePerTerrainType;
@property (readonly, nonatomic) NSMeasurement *averageSpeedInMetersPerSecond;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) NSMeasurement *usageKwh;
@property (readonly, nonatomic) NSMeasurement *optimalUsageKwh;
@property (readonly, nonatomic) int numBrakingEvents;
@property (readonly, nonatomic) int numAccelEvents;
@property (readonly, nonatomic) int numHighSpeedEvents;
@property (readonly, nonatomic) NSDictionary *roadDistancesInMeters;
@property (readonly, nonatomic) NSDictionary *roadSpeedBuckets;
@property (readonly, nonatomic) NSDictionary *roadRelativeSpeedBuckets;
@property (readonly, nonatomic) NSDictionary *roadTimes;
@property (readonly, nonatomic) NSArray *route;
@property (readonly, nonatomic) NSArray *lifeEventIds;
@property (readonly, nonatomic) NSArray *ktsSegmentIds;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStartTime:(id)a0 endTime:(id)a1 distanceInMeters:(id)a2 elevationGainInMeters:(id)a3 distanceBuckets:(id)a4 durationInSeconds:(id)a5 expectedDurationInSecondsNoTraffic:(id)a6 distanceSpentInTrafficBuckets:(id)a7 timeSpentInTrafficBuckets:(id)a8 distanceSpentAtSpeedBuckets:(id)a9 timeSpentAtSpeedBuckets:(id)a10 distanceSpentAtRelativeSpeeds:(id)a11 timeSpentAtRelativeSpeeds:(id)a12 distancePerRoadType:(id)a13 timePerRoadType:(id)a14 distancePerWeatherType:(id)a15 timePerWeatherType:(id)a16 distancePerTerrainType:(id)a17 timePerTerrainType:(id)a18 averageSpeedInMetersPerSecond:(id)a19 score:(double)a20 usageKwh:(id)a21 optimalUsageKwh:(id)a22 numBrakingEvents:(int)a23 numAccelEvents:(int)a24 numHighSpeedEvents:(int)a25 roadDistancesInMeters:(id)a26 roadSpeedBuckets:(id)a27 roadRelativeSpeedBuckets:(id)a28 roadTimes:(id)a29 route:(id)a30 lifeEventIds:(id)a31 ktsSegmentIds:(id)a32;

@end
