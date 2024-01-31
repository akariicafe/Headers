@class NSTimeZone, GEOComposedTransitTripRouteSegment, NSArray, GEOTransitBoardingInfo, NSDate, GEOTransitVehicleInfo;
@protocol GEOTransitSystem, GEOTransitLine;

@interface GEOComposedTransitTripRouteStep : GEOComposedTransitRouteStep {
    BOOL _canPreloadTiles;
}

@property (readonly, nonatomic) GEOComposedTransitTripRouteSegment *tripSegment;
@property (readonly, nonatomic) NSTimeZone *departureTimeZone;
@property (readonly, nonatomic) NSTimeZone *arrivalTimeZone;
@property (readonly, nonatomic) NSDate *arrivalTimeAtOrigin;
@property (readonly, nonatomic) NSDate *departureTime;
@property (readonly, nonatomic) NSDate *arrivalTime;
@property (readonly, nonatomic) NSArray *arrivalTimesAtOrigin;
@property (readonly, nonatomic) NSArray *departureTimes;
@property (readonly, nonatomic) NSArray *arrivalTimes;
@property (readonly, nonatomic) double departureTimeIntervalMin;
@property (readonly, nonatomic) double departureTimeIntervalMax;
@property (readonly, nonatomic) GEOTransitVehicleInfo *transitVehicle;
@property (readonly, nonatomic) GEOTransitBoardingInfo *boardingInfo;
@property (readonly, nonatomic) id<GEOTransitLine> transitLine;
@property (readonly, nonatomic) id<GEOTransitSystem> transitSystem;
@property (readonly, nonatomic) NSArray *routeLineArtwork;
@property (readonly, nonatomic) BOOL isRail;
@property (readonly, nonatomic) BOOL isBus;
@property (readonly, nonatomic) BOOL canPreloadTilesForThisStep;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (BOOL)hasDuration;
- (id)description;
- (void).cxx_destruct;
- (unsigned int)duration;
- (id)initWithCoder:(id)a0;
- (id)initWithComposedRoute:(id)a0 decoderData:(id)a1 step:(id)a2 stepIndex:(unsigned long long)a3 duration:(unsigned int)a4 pointRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5;
- (id)initWithComposedRoute:(id)a0 routeSegmentType:(long long)a1 stepIndex:(unsigned long long)a2 pointRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 line:(id)a4 maneuverType:(int)a5 significance:(int)a6;

@end
