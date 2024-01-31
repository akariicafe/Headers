@class MNArrivalUpdater, GEOComposedRoute, GEOComposedRouteLeg, _MNArrivalUpdaterDetails, MNLocation;

@interface _MNArrivalUpdaterState : NSObject

@property (weak, nonatomic) MNArrivalUpdater *arrivalUpdater;
@property (retain, nonatomic) _MNArrivalUpdaterDetails *details;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) MNLocation *location;
@property (readonly, nonatomic) GEOComposedRoute *route;
@property (readonly, nonatomic) GEOComposedRouteLeg *targetLeg;

- (void).cxx_destruct;
- (void)sendArrivalInfo;
- (BOOL)_checkForApproachingWaypoint;
- (BOOL)_checkForArrival;
- (BOOL)_checkForEndOfDrivingSegment;
- (BOOL)_checkForPreArrival;
- (double)_distanceToEndOfLeg;
- (BOOL)_updateForApproachingWaypoint;
- (BOOL)_updateForArrival;
- (void)_updateForEVMonitoring;
- (BOOL)_updateForEndOfDrivingSegment;
- (BOOL)_updateForPreArrival;
- (BOOL)_updateForSearchingForParking;
- (void)forceDepartureWithReason:(unsigned long long)a0;
- (void)onEnterState:(id)a0;
- (void)onLeaveState:(id)a0;
- (double)parkingDetectionExcludeRadius;
- (void)updateForEVChargingState:(BOOL)a0;
- (void)updateForEVReachedTargetBatteryCharge;
- (void)updateForLocation;

@end
