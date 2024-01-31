@class GEOComposedWaypointDisplayInfo, NSString, GEOFeatureStyleAttributes, GEOComposedWaypoint;

@interface VKRouteWaypointInfo : NSObject {
    GEOComposedWaypointDisplayInfo *_displayInfo;
}

@property (readonly, nonatomic) unsigned long long legIndex;
@property (nonatomic) BOOL needsTextUpdate;
@property (nonatomic) BOOL isAtStart;
@property (nonatomic) BOOL isAtEnd;
@property (nonatomic) BOOL isOnSelectedRoute;
@property (readonly, nonatomic) struct { double latitude; double longitude; double altitude; } routeCoordinate;
@property (readonly, nonatomic) struct { double latitude; double longitude; double altitude; } adjacentRouteCoordinate;
@property (nonatomic) unsigned char when;
@property (readonly, nonatomic) NSString *annotationText;
@property (readonly, nonatomic) unsigned char type;
@property (readonly, nonatomic) GEOComposedWaypoint *waypoint;
@property (readonly, nonatomic) GEOFeatureStyleAttributes *styleAttributes;

+ (id)newRouteWaypointForWaypoint:(id)a0 displayInfo:(id)a1 legIndex:(unsigned long long)a2 routeCoordinate:(struct { double x0; double x1; double x2; })a3 adjacentRouteCoordinate:(struct { double x0; double x1; double x2; })a4;

- (void).cxx_destruct;
- (id)initWithWaypoint:(id)a0 displayInfo:(id)a1 legIndex:(unsigned long long)a2 routeCoordinate:(struct { double x0; double x1; double x2; })a3 adjacentRouteCoordinate:(struct { double x0; double x1; double x2; })a4 waypointType:(unsigned char)a5;

@end
