@class NSMutableDictionary, AVScheduledAudioParametersInternal;

@interface AVScheduledAudioParameters : NSObject <NSCopying, NSMutableCopying> {
    AVScheduledAudioParametersInternal *_scheduledParametersInternal;
}

@property (copy, nonatomic, getter=_ramps, setter=_setRamps:) NSMutableDictionary *ramps;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (id)propertyList;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithPropertyList:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_figAudioCurves;
- (id)_audioCurveOfClass:(Class)a0;
- (id)_audioVolumeCurve;
- (id)_getRampOfClass:(Class)a0 forTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a2;
- (BOOL)_isScheduledRampClass:(id)a0;
- (id)_rampsOfClass:(Class)a0;
- (void)_setRamp:(id)a0;
- (id)_volumeCurveAsString;
- (id)_volumeCurveKeysForScheduledRampClassNames;
- (BOOL)getVolumeRampForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 startVolume:(float *)a1 endVolume:(float *)a2 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a3;
- (BOOL)getVolumeRampForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 startVolume:(float *)a1 endVolume:(float *)a2 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a3 rampMode:(long long *)a4;

@end
