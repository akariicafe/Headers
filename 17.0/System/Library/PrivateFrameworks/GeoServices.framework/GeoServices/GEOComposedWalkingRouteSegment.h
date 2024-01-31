@class GEOComposedWalkingRouteStep, GEOComposedTransitWalkingRouteStep;

@interface GEOComposedWalkingRouteSegment : GEOComposedRouteSegment

@property (readonly, nonatomic) unsigned long long transitIncidentMessageStepIndex;
@property (readonly, nonatomic) GEOComposedWalkingRouteStep *lastWalkingStep;
@property (readonly, nonatomic) GEOComposedTransitWalkingRouteStep *arrivalStep;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (long long)type;
- (id)initWithCoder:(id)a0;
- (id)_transitIncidentMessageStep;
- (id)initWithComposedRoute:(id)a0 stepRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 pointRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 segmentIndex:(unsigned long long)a3 transitIncidentMessageStepIndex:(unsigned long long)a4;

@end
