@class GEOComposedRoute, MNDisplayETAInfo, NSUUID;

@interface MNVehicleParkingInfo : NSObject <NSSecureCoding> {
    NSUUID *_routeID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long parkingType;
@property (retain, nonatomic) GEOComposedRoute *remainingWalkingRoute;
@property (retain, nonatomic) MNDisplayETAInfo *walkingRouteDisplayETAInfo;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
