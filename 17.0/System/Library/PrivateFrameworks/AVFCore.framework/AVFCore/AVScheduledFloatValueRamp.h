@interface AVScheduledFloatValueRamp : AVScheduledParameterRamp {
    float _startValue;
    float _endValue;
}

@property (class, readonly) float defaultFloatValue;

@property (readonly) float startFloatValue;
@property (readonly) float endFloatValue;

+ (id)defaultValue;
+ (float)boundsAdjustedFloatValue:(float)a0;
+ (id)scheduledFloatValueRampWithStartValue:(float)a0 endValue:(float)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2;

- (id)propertyList;
- (id)initWithPropertyList:(id)a0;
- (id)endValue;
- (float)_interpolatedValueAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)_makeRampWithTruncatedTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 endValue:(float)a1;
- (long long)_parameterRampMode;
- (id)initWithStartValue:(float)a0 endValue:(float)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2;
- (id)scheduledParameterRampInterpolatedToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)startValue;

@end
