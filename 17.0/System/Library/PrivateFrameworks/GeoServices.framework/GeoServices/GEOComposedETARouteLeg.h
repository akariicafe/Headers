@class NSArray, GEOComposedRouteEVChargingStationInfo, GEOWaypointInfo;

@interface GEOComposedETARouteLeg : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long originalLegIndex;
@property (nonatomic) double length;
@property (retain, nonatomic) NSArray *steps;
@property (retain, nonatomic) GEOComposedRouteEVChargingStationInfo *chargingStationInfo;
@property (retain, nonatomic) GEOWaypointInfo *originWaypointInfo;
@property (retain, nonatomic) GEOWaypointInfo *destinationWaypointInfo;
@property (readonly, nonatomic) double travelDuration;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithPrecision:(unsigned long long)a0;

@end
