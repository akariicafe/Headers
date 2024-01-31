@class NSString, GEOLocation, GEOQuickETATransitDeparturesInfo, NSMutableArray;

@interface GEOQuickETAResponse : NSObject

@property (readonly, nonatomic) GEOLocation *sourceLocation;
@property (readonly, nonatomic) GEOLocation *destinationLocation;
@property (readonly, nonatomic) unsigned int responseETASeconds;
@property (readonly, nonatomic) unsigned int baselineETASeconds;
@property (readonly, nonatomic) double distance;
@property (readonly, nonatomic) NSString *routeDescription;
@property (readonly, nonatomic) GEOQuickETATransitDeparturesInfo *transitDeparturesInfo;
@property (readonly, nonatomic) double distanceToDepartureStop;
@property (readonly, nonatomic) double walkingDurationToDepartureStop;
@property (readonly, nonatomic) NSMutableArray *sortedETAs;

- (void).cxx_destruct;
- (id)initWithDirectionsResponse:(id)a0 fromRequest:(id)a1;
- (id)initWithETAResult:(id)a0 fromRequest:(id)a1;

@end
