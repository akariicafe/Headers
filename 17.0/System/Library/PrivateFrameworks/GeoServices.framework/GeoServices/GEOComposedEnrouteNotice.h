@class GEOEnrouteNotice, NSString, GEOComposedTrafficSignal, NSArray, GEOComposedRouteAnnotation, GEOComposedTrafficCamera, GEOLatLng;

@interface GEOComposedEnrouteNotice : NSObject <NSSecureCoding> {
    GEOEnrouteNotice *_enrouteNotice;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int noticeType;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) GEOComposedTrafficCamera *trafficCamera;
@property (readonly, nonatomic) GEOComposedTrafficSignal *trafficSignal;
@property (readonly, nonatomic) GEOComposedRouteAnnotation *routeAnnotation;
@property (readonly, nonatomic) BOOL hasHighlightDistance;
@property (readonly, nonatomic) unsigned int highlightDistance;
@property (readonly, nonatomic) BOOL hasGroupIdentifier;
@property (readonly, nonatomic) unsigned int groupIdentifier;
@property (readonly, nonatomic) BOOL hasGroupItemHorizontalDisplayOrder;
@property (readonly, nonatomic) unsigned int groupItemHorizontalDisplayOrder;
@property (readonly, nonatomic) BOOL hasGroupItemVerticalDisplayOrder;
@property (readonly, nonatomic) unsigned int groupItemVerticalDisplayOrder;
@property (readonly, nonatomic) BOOL hasPriority;
@property (readonly, nonatomic) unsigned int priority;
@property (readonly, nonatomic) NSArray *guidanceEvents;
@property (readonly, nonatomic) GEOLatLng *position;
@property (readonly, nonatomic) struct { unsigned int index; float offset; } routeCoordinate;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithEnrouteNotice:(id)a0 enrouteNoticeIndex:(unsigned long long)a1 legIndex:(unsigned long long)a2 onRoute:(id)a3;
- (id)initWithEnrouteNotice:(id)a0 enrouteNoticeIndex:(unsigned long long)a1 legIndex:(unsigned long long)a2 onRoute:(id)a3 withPolylineCoordinate:(struct { unsigned int x0; float x1; })a4;
- (id)initWithEnrouteNotice:(id)a0 enrouteNoticeIndex:(unsigned long long)a1 legIndex:(unsigned long long)a2 onRoute:(id)a3 withPosition:(id)a4;

@end
