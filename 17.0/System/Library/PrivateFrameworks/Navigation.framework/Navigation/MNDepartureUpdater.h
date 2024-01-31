@class GEOComposedRoute, NSArray, GEOComposedRouteLeg, NSMutableDictionary;

@interface MNDepartureUpdater : NSObject {
    NSArray *_conditions;
    NSMutableDictionary *_conditionScores;
}

@property (readonly, nonatomic) GEOComposedRoute *route;
@property (readonly, nonatomic) GEOComposedRouteLeg *arrivalLeg;
@property (readonly, nonatomic) unsigned long long arrivalWaypointLegIndex;

- (void).cxx_destruct;
- (void)_initConditions;
- (id)_arrivalRegionsDepartureConditions;
- (id)_defaultDepartureConditions;
- (BOOL)allowDepartureForLocation:(id)a0;
- (id)initWithRoute:(id)a0 arrivalLegIndex:(unsigned long long)a1;

@end
