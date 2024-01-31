@class NSString;
@protocol GEOMapTransitStation;

@interface GEOMapAccessTransitHall : GEOMapAccessTransitNodeBase <GEOMapTransitHall> {
    id<GEOMapTransitStation> _station;
}

@property (readonly, nonatomic) unsigned long long stationID;
@property (readonly, nonatomic) struct { double x0; double x1; } coordinate;
@property (readonly, nonatomic) unsigned long long transitID;
@property (readonly, nonatomic) NSString *internalName;
@property (readonly, nonatomic) double boundingRadius;
@property (readonly, nonatomic) struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; } boundingRect;
@property (readonly, nonatomic) struct { double x0; double x1; } *polygonPoints;
@property (readonly, nonatomic) long long polygonPointsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)findStation:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (id)findStops:(id /* block */)a0 completionHandler:(id /* block */)a1;

@end
