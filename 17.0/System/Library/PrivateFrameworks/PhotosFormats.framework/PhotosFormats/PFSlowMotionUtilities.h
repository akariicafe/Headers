@class NSArray;

@interface PFSlowMotionUtilities : NSObject

@property (class, readonly, nonatomic) int preferredTimeScale;
@property (class, readonly, nonatomic) NSArray *slowMotionSourceAssetPropertyKeys;

+ (id)sharedConfiguration;
+ (id)timeRangeMapperForSourceDuration:(double)a0 slowMotionRate:(float)a1 slowMotionTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 forExport:(BOOL)a3;
+ (BOOL)_isValidSlowMotionRate:(float)a0;
+ (BOOL)_isValidSlowMotionTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
+ (BOOL)_scaleComposition:(id)a0 baseDuration:(double)a1 slowMotionRate:(float)a2 slowMotionRegions:(id)a3 forExport:(BOOL)a4 outTimeRangeMapper:(id *)a5;
+ (double)_scaleWithinComposition:(id)a0 fromCursor:(double)a1 timeStep:(double)a2 rate:(float)a3 timeRangeMapper:(id)a4;
+ (id)_scaledCompositionForAsset:(id)a0 slowMotionRate:(float)a1 slowMotionTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 forExport:(BOOL)a3 outTimeRangeMapper:(id *)a4;
+ (id)_setVolume:(float)a0 forSlowMotionRegionsInTrack:(id)a1 timeRangeMapper:(id)a2;
+ (id)_slowMotionRegionsFromSlowMotionTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
+ (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })_timeRangeFromTime:(float)a0 toTime:(float)a1;
+ (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })adjustTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 forNewStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 endTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
+ (id)assetFromVideoAsset:(id)a0 slowMotionRate:(float)a1 slowMotionTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 forExport:(BOOL)a3 outAudioMix:(id *)a4 outTimeRangeMapper:(id *)a5;
+ (id)audioMixForScaledComposition:(id)a0 timeRangeMapper:(id)a1;
+ (void)configureExportSession:(id)a0 forcePreciseConversion:(BOOL)a1;
+ (id)exportPresetForAsset:(id)a0 preferredPreset:(id)a1;

@end
