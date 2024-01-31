@class NSArray, GEOTransitStep;
@protocol GEOTransitArtworkDataSource;

@interface GEOComposedTransitWalkingRouteStep : GEOComposedWalkingRouteStep {
    GEOTransitStep *_transitStep;
    struct { double latitude; double longitude; } _startCoordinate;
    struct { double latitude; double longitude; } _endCoordinate;
    NSArray *_steppingArtwork;
    NSArray *_routeDetailsPrimaryArtwork;
    id<GEOTransitArtworkDataSource> _routeDetailsSecondaryArtwork;
    NSArray *_advisories;
    NSArray *_transitIncidents;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (double)distance;
- (id)description;
- (void).cxx_destruct;
- (id)transitStep;
- (id)initWithCoder:(id)a0;
- (id)steppingArtwork;
- (void)_commonInitWithDecoderData:(id)a0;
- (id)advisories;
- (struct { double x0; double x1; double x2; })endGeoCoordinate;
- (id)initWithComposedRoute:(id)a0 decoderData:(id)a1 transitStep:(id)a2 stepIndex:(unsigned long long)a3 geoStep:(id)a4 pointRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 maneuverPointRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6;
- (id)initWithComposedRoute:(id)a0 decoderData:(id)a1 transitStep:(id)a2 stepIndex:(unsigned long long)a3 startCoordinate:(struct { double x0; double x1; })a4 endCoordinate:(struct { double x0; double x1; })a5 pointRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6;
- (id)instructions;
- (BOOL)isArrivalStep;
- (BOOL)isStartOrResumeStep;
- (id)routeDetailsPrimaryArtwork;
- (id)routeDetailsSecondaryArtwork;
- (struct { double x0; double x1; double x2; })startGeoCoordinate;
- (id)transitIncidents;

@end
