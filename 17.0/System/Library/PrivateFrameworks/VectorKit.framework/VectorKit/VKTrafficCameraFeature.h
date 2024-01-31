@class NSString;

@interface VKTrafficCameraFeature : VKTrafficFeature {
    unsigned int _speedLimit;
}

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) unsigned int speedThreshold;
@property (nonatomic) BOOL isAboveSpeedThreshold;
@property (readonly, nonatomic) NSString *speedLimitText;
@property (readonly, nonatomic) unsigned int countryCode;
@property (readonly, nonatomic) BOOL hasCountryCode;

+ (id)stringForTrafficCameraType:(long long)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isSpeedLimitCamera;
- (id)initWithTrafficCameraType:(long long)a0 uniqueIdentifier:(id)a1 routeOffset:(struct PolylineCoordinate { unsigned int x0; float x1; })a2 onRoute:(id)a3;
- (id)initWithTrafficCamera:(id)a0 onRoute:(id)a1;
- (void)populateDebugNode:(void *)a0;

@end
