@interface AVScheduledVolumeRamp : AVScheduledFloatValueRamp {
    long long _rampMode;
}

@property (readonly) float startVolume;
@property (readonly) float endVolume;
@property (readonly) long long rampMode;

+ (id)_defaultAdditionalFigRepresentationObjects;
+ (id)volumeRampWithStartVolume:(float)a0 endVolume:(float)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 rampMode:(long long)a3;

- (id)propertyList;
- (id)initWithPropertyList:(id)a0;
- (id)_additionalFigRepresentationObjects;
- (id)_makeRampWithTruncatedTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 endValue:(float)a1;
- (long long)_parameterRampMode;
- (id)initWithStartVolume:(float)a0 endVolume:(float)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 rampMode:(long long)a3;

@end
