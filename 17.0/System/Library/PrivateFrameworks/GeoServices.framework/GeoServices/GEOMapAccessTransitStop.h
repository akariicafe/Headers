@class NSString;
@protocol GEOMapTransitHall;

@interface GEOMapAccessTransitStop : GEOMapAccessTransitNodeBase <GEOMapTransitStop> {
    id<GEOMapTransitHall> _hall;
}

@property (readonly, nonatomic) unsigned long long hallID;
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
- (id)findLinksOut:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (id)findAccessPoints:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (id)findHall:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (id)findLinksIn:(id /* block */)a0 completionHandler:(id /* block */)a1;

@end
