@class NSUUID, NSArray, GEOETATrafficUpdateWaypointRoute, NSDate;

@interface GEOComposedETARoute : NSObject <_GEORouteHypothesisMonitorETAProvider, NSSecureCoding> {
    unsigned long long _startingStepIndex;
    GEOETATrafficUpdateWaypointRoute *_geoETAWaypointRoute;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double _hypothesis_travelDuration;
@property (readonly, nonatomic) double _hypothesis_travelDurationAggressiveEstimate;
@property (readonly, nonatomic) double _hypothesis_travelDurationConservativeEstimate;
@property (readonly, nonatomic) NSUUID *uniqueRouteID;
@property (readonly, nonatomic) NSUUID *etauResponseID;
@property (readonly, nonatomic) NSArray *legs;
@property (readonly, nonatomic) NSDate *serverDisplayETA;
@property (readonly, nonatomic) BOOL hasValidTravelDurations;
@property (readonly, nonatomic) double travelDuration;
@property (readonly, nonatomic) double historicTravelDuration;
@property (readonly, nonatomic) double travelDurationAggressiveEstimate;
@property (readonly, nonatomic) double travelDurationConservativeEstimate;
@property (readonly, nonatomic) double length;
@property (readonly, nonatomic) struct { unsigned int index; float offset; } startRouteCoordinate;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (double)_hypothesis_travelDurationFromStep:(id)a0 stepRemainingDistance:(double)a1;
- (double)_travelDurationFromStepID:(unsigned long long)a0 toStepID:(unsigned long long)a1 currentStepRemainingDistance:(double)a2;
- (id)evChargingStationInfos;
- (id)evStepInfos;
- (id)geoETAWaypointRoute;
- (id)geoTrafficBannerTexts;
- (id)initWithRouteForTesting:(id)a0;
- (void)invalidateServerDisplayETA;
- (id)navigabilityInfo;
- (BOOL)prepareForRequest:(id)a0 route:(id)a1 routeMatch:(id)a2 targetLegIndex:(unsigned long long)a3 state:(int)a4;
- (double)travelDurationToEndOfLegFromStepID:(unsigned long long)a0 currentStepRemainingDistance:(double)a1;
- (double)travelDurationToEndOfRouteFromStepID:(unsigned long long)a0 currentStepRemainingDistance:(double)a1;
- (BOOL)updateForResponse:(id)a0 route:(id)a1;

@end
