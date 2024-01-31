@interface GEORouteBuilder : NSObject

+ (id)_unpackedPointsDataForGeoRoute:(id)a0;
+ (id)_cellularCoverageForGeoWaypointRoute:(id)a0 coordinates:(id)a1;
+ (void)_componentsForGeoWaypointRoute:(id)a0 initializerData:(id)a1 coordinates:(id)a2 custodian:(id)a3 outLegs:(out id *)a4 outSegments:(out id *)a5 outSteps:(out id *)a6;
+ (id)_composedRouteLegForStartStep:(id)a0 endStep:(id)a1 startSegment:(id)a2 endSegment:(id)a3 custodian:(id)a4 geoRouteLeg:(id)a5 legIndex:(unsigned long long)a6 origin:(id)a7 destination:(id)a8 arrivalParameters:(id)a9 legLength:(double)a10;
+ (id)_composedRouteSegmentForStartStep:(id)a0 andEndStep:(id)a1 segmentIndex:(unsigned long long)a2 andCustodian:(id)a3;
+ (id)_composedRouteStepWithTransportType:(int)a0 andCustodian:(id)a1 geoRouteLeg:(id)a2 forGeoStep:(id)a3 withStepIndex:(unsigned long long)a4 startRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a5 endRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a6 maneuverStartRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a7;
+ (id)_composedRouteStepWithTransportType:(int)a0 andCustodian:(id)a1 geoRouteLeg:(id)a2 forGeoStep:(id)a3 withStepIndex:(unsigned long long)a4 stepStartPointIndex:(unsigned long long)a5 legStartPointIndex:(unsigned long long)a6;
+ (id)_coordinatesForGeoWaypointRoute:(id)a0;
+ (id)_guidanceEventsForGeoWaypointRoute:(id)a0 legs:(id)a1 steps:(id)a2 coordinates:(id)a3;
+ (BOOL)_isGuidanceEventAtEndOfLeg:(int)a0;
+ (id)_segmentForStepIndex:(unsigned long long)a0 withSegments:(id)a1;
+ (id)_visualInfosForGuidanceEvents:(id)a0 steps:(id)a1 coordinates:(id)a2;
+ (id)buildMapRegionFromPointSections:(id)a0;
+ (id)buildPointSectionsWithSteps:(id)a0 segments:(id)a1 coordinates:(id)a2;
+ (id)outputForGeoWaypointRoute:(id)a0 initializerData:(id)a1 custodian:(id)a2;
+ (id)segmentForPointIndex:(unsigned long long)a0 withSegments:(id)a1 andSteps:(id)a2;
+ (unsigned long long)segmentIndexForPointIndex:(unsigned long long)a0 withSegments:(id)a1;
+ (unsigned long long)stepIndexForPointIndex:(unsigned long long)a0 withSteps:(id)a1;

@end
