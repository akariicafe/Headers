@class GEOComposedRouteEVChargingStationInfo, NSString;

@interface VKEVChargeStationRouteWaypoint : VKRouteWaypointInfo

@property (readonly, nonatomic) GEOComposedRouteEVChargingStationInfo *chargeInfo;
@property (retain, nonatomic) NSString *chargeTimeText;

- (void).cxx_destruct;
- (id)initWithWaypoint:(id)a0 displayInfo:(id)a1 legIndex:(unsigned long long)a2 routeCoordinate:(struct { double x0; double x1; double x2; })a3 adjacentRouteCoordinate:(struct { double x0; double x1; double x2; })a4;

@end
