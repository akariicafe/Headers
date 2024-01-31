@class NSString;

@interface ACCNavigationAccessoryComponent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long identifier;
@property (retain) NSString *name;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) unsigned long long maxLength_CurrentRoadName;
@property (nonatomic) unsigned long long maxLength_DestinationRoadName;
@property (nonatomic) unsigned long long maxLength_PostManeuverRoadName;
@property (nonatomic) unsigned long long maxLength_ManeuverDescription;
@property (nonatomic) unsigned long long maxLength_LaneGuidanceDescription;
@property (nonatomic) BOOL requestSourceName;
@property (nonatomic) BOOL requestSourceSupportsRouteGuidance;
@property (nonatomic) BOOL supportsExitInfo;
@property (nonatomic) BOOL supportsLaneGuidance;
@property (nonatomic) BOOL supportsTimeZoneOffset;
@property (nonatomic) unsigned long long maxCapacity_GuidanceManeuver;
@property (nonatomic) unsigned long long maxCapacity_LaneGuidance;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
