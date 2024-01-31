@class NSArray, NSMeasurement, NSDictionary;

@interface GDKTSDataAggregateRepresentation : GDKTSDataRepresentation

@property (readonly, nonatomic) int numTrips;
@property (readonly, nonatomic) NSMeasurement *maxTripDistanceInMeters;
@property (readonly, nonatomic) NSMeasurement *avgTripDistanceInMeters;
@property (readonly, nonatomic) NSMeasurement *maxElevationGainInMeters;
@property (readonly, nonatomic) NSMeasurement *avgElevationGainInMeters;
@property (readonly, nonatomic) NSArray *percentTimeSpentAtSpeedBuckets;
@property (readonly, nonatomic) NSArray *percentTimeSpentAtTrafficBuckets;
@property (readonly, nonatomic) NSArray *percentTimeSpentAtRelativeSpeeds;
@property (readonly, nonatomic) NSArray *percentTimeSpentAtRoadTypes;
@property (readonly, nonatomic) NSArray *percentTimeSpentInWeatherTypes;
@property (readonly, nonatomic) NSArray *percentTimeSpentInTerrainTypes;
@property (readonly, nonatomic) NSArray *percentDistanceTraveledAtSpeedBuckets;
@property (readonly, nonatomic) NSArray *percentDistanceTraveledAtTrafficBuckets;
@property (readonly, nonatomic) NSArray *percentDistanceTraveledAtRelativeSpeeds;
@property (readonly, nonatomic) NSArray *percentDistanceTraveledForRoadTypes;
@property (readonly, nonatomic) NSArray *percentDistanceTraveledInWeatherTypes;
@property (readonly, nonatomic) NSArray *percentDistanceTraveledInTerrainTypes;
@property (readonly, nonatomic) NSArray *scorePerSpeedBucket;
@property (readonly, nonatomic) NSArray *scorePerTrafficBucket;
@property (readonly, nonatomic) NSArray *scorePerRelativeSpeed;
@property (readonly, nonatomic) NSArray *scorePerRoadType;
@property (readonly, nonatomic) NSArray *scorePerWeatherType;
@property (readonly, nonatomic) NSArray *scorePerTerrainType;
@property (readonly, nonatomic) double avgNumBrakingEvents;
@property (readonly, nonatomic) double avgNumAccelEvents;
@property (readonly, nonatomic) double avgNumHighSpeedEvents;
@property (readonly, nonatomic) double mostEfficientDriveScore;
@property (readonly, nonatomic) NSDictionary *routeHeatMap;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStartTime:(id)a0 endTime:(id)a1 distanceInMeters:(id)a2 elevationGainInMeters:(id)a3 distanceBuckets:(id)a4 durationInSeconds:(id)a5 expectedDurationInSecondsNoTraffic:(id)a6 distanceSpentInTrafficBuckets:(id)a7 timeSpentInTrafficBuckets:(id)a8 distanceSpentAtSpeedBuckets:(id)a9 timeSpentAtSpeedBuckets:(id)a10 distanceSpentAtRelativeSpeeds:(id)a11 timeSpentAtRelativeSpeeds:(id)a12 distancePerRoadType:(id)a13 timePerRoadType:(id)a14 distancePerWeatherType:(id)a15 timePerWeatherType:(id)a16 distancePerTerrainType:(id)a17 timePerTerrainType:(id)a18 averageSpeedInMetersPerSecond:(id)a19 score:(double)a20 usageKwh:(id)a21 optimalUsageKwh:(id)a22 numBrakingEvents:(int)a23 numAccelEvents:(int)a24 numHighSpeedEvents:(int)a25 roadDistancesInMeters:(id)a26 roadSpeedBuckets:(id)a27 roadRelativeSpeedBuckets:(id)a28 roadTimes:(id)a29 route:(id)a30 lifeEventIds:(id)a31 ktsSegmentIds:(id)a32 maxTripDistanceInMeters:(id)a33 avgTripDistanceInMeters:(id)a34 maxElevationGainInMeters:(id)a35 avgElevationGainInMeters:(id)a36 percentTimeSpentAtSpeedBuckets:(id)a37 percentTimeSpentAtTrafficBuckets:(id)a38 percentTimeSpentAtRelativeSpeeds:(id)a39 percentTimeSpentAtRoadTypes:(id)a40 percentTimeSpentInWeatherTypes:(id)a41 percentTimeSpentInTerrainTypes:(id)a42 percentDistanceTraveledAtSpeedBuckets:(id)a43 percentDistanceTraveledAtTrafficBuckets:(id)a44 percentDistanceTraveledAtRelativeSpeeds:(id)a45 percentDistanceTraveledForRoadTypes:(id)a46 percentDistanceTraveledInWeatherTypes:(id)a47 percentDistanceTraveledInTerrainTypes:(id)a48 scorePerSpeedBucket:(id)a49 scorePerTrafficBucket:(id)a50 scorePerRelativeSpeed:(id)a51 scorePerRoadType:(id)a52 scorePerWeatherType:(id)a53 scorePerTerrainType:(id)a54 avgNumBrakingEvents:(double)a55 avgNumAccelEvents:(double)a56 avgNumHighSpeedEvents:(double)a57 mostEfficientDriveScore:(double)a58 routeHeatMap:(id)a59;

@end
