@class GEORouteMatch, GEOLocation, GEORoadMatch, GEONavigationMatchInfo;

@interface GEONavigationMatchResult : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) GEORouteMatch *routeMatch;
@property (readonly, nonatomic) GEORoadMatch *roadMatch;
@property (readonly, nonatomic) GEOLocation *rawLocation;
@property (readonly, nonatomic) GEONavigationMatchInfo *detailedMatchInfo;
@property (readonly, nonatomic) BOOL locationUnreliable;

+ (id)matchResultWithRawLocation:(id)a0;
+ (id)matchResultWithRoadMatch:(id)a0 location:(id)a1;
+ (id)matchResultWithRouteMatch:(id)a0 location:(id)a1;

- (void)setDetailedMatchInfo:(id)a0;
- (void)setRouteMatch:(id)a0;
- (id)initWithRawLocation:(id)a0;
- (void)setLocationUnreliable:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithRoadMatch:(id)a0 location:(id)a1;
- (id)initWithRouteMatch:(id)a0 location:(id)a1;

@end
