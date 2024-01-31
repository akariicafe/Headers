@class ATXLocationOfInterest;

@interface ATXPredictionLocationMotionContext : ATXPredictionContextDomain

@property (readonly, nonatomic) ATXLocationOfInterest *previousLOI;
@property (readonly, nonatomic) ATXLocationOfInterest *currentLOI;
@property (readonly, nonatomic) long long motionType;
@property (readonly, nonatomic) long long geohash;
@property (readonly, nonatomic) long long coarseGeohash;
@property (readonly, nonatomic) long long largeGeohash;
@property (readonly, nonatomic) BOOL locationEnabled;
@property (readonly, nonatomic) double distanceFromHomeOfCurrentLocationInMeters;
@property (readonly, nonatomic) double distanceFromWorkOfCurrentLocationInMeters;
@property (readonly, nonatomic) double distanceFromSchoolOfCurrentLocationInMeters;
@property (readonly, nonatomic) double distanceFromGymOfCurrentLocationInMeters;
@property (readonly, nonatomic) BOOL canPredictClipsGivenRecentMotion;

- (id)initWithProto:(id)a0;
- (long long)_atxMotionTypeFromPBMotionType:(int)a0;
- (id)encodeAsProto;
- (id)_unarchiveCLLocation:(id)a0;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)jsonDict;
- (id)initWithCurrentLOI:(id)a0 previousLOI:(id)a1 motionType:(long long)a2 geohash:(long long)a3 coarseGeohash:(long long)a4 largeGeohash:(long long)a5 locationEnabled:(BOOL)a6 distanceFromHome:(double)a7 distanceFromWork:(double)a8 distanceFromSchool:(double)a9 distanceFromGym:(double)a10 canPredictClipsGivenRecentMotion:(BOOL)a11;
- (id)description;
- (int)_pbMotionTypeFromATXMotionType:(long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCurrentLOI:(id)a0 previousLOI:(id)a1 motionType:(long long)a2 currentLocation:(id)a3 locationEnabled:(BOOL)a4 distanceFromHome:(double)a5 distanceFromWork:(double)a6 distanceFromSchool:(double)a7 distanceFromGym:(double)a8 canPredictClipsGivenRecentMotion:(BOOL)a9;
- (BOOL)isEqualToATXPredictionLocationMotionContext:(id)a0;

@end
