@class NSArray;

@interface GEOComposedWalkingUncertainArrivalRouteStep : GEOComposedWalkingRouteStep {
    NSArray *_aggregatedGEOSteps;
    double _aggregatedStepsDistance;
    unsigned int _aggregatedStepsDuration;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (double)distance;
- (void).cxx_destruct;
- (unsigned int)duration;
- (id)initWithCoder:(id)a0;
- (double)_calculateAggregatedStepsDistance;
- (unsigned int)_calculateAggregatedStepsDuration;
- (id)initWithComposedRoute:(id)a0 aggregatedGEOSteps:(id)a1 stepIndex:(unsigned long long)a2 pointRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 maneuverPointRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
- (BOOL)isUncertainArrival;

@end
