@class GeographicCoordinate, NSSet, CLIndoorAvailabilityTileParams;

@interface CLAvailableVenuesStateMachine : NSObject

@property (readonly) GeographicCoordinate *lastFix;
@property double maxLoadRadius;
@property (retain) NSSet *disabledVenues;
@property (readonly) CLIndoorAvailabilityTileParams *availabilityTileParams;

+ (long long)getLocationContextFromVenueBounds:(const void *)a0;
+ (double)metersFromGreatCircleDistance:(double)a0;
+ (double)distBetweenLatLon:(id)a0 latlon1:(id)a1;
+ (double)deg2rad:(double)a0;

- (id)init;
- (id)computeAvailableVenues:(id)a0 nearCoordinates:(id)a1;
- (BOOL)shouldRecompute:(id)a0;
- (id)getNearbyLocationGroupsForTile:(id)a0 withUpdatedPos:(id)a1 nearLocationsOfInterest:(id)a2;
- (void)clearLastFix;
- (BOOL)isVenueDisabled:(id)a0 locationId:(id)a1;
- (id)getNearbyLocationGroupsForTile:(id)a0 withUpdatedPos:(id)a1;
- (void).cxx_destruct;
- (id)computeAvailableVenues:(id)a0 nearCoordinates:(id)a1 withError:(BOOL *)a2;
- (id)openTileParserAtPath:(id)a0;
- (id)recomputeIfNecessary:(id)a0 withGlobalAvailabilityTile:(id)a1 andAdditionalLOIs:(id)a2;
- (id)getNearbyLocationGroups:(id)a0 withUpdatedPos:(id)a1;
- (id)getNearbyLocationGroups:(id)a0 withUpdatedPos:(id)a1 nearLocationsOfInterest:(id)a2;

@end
