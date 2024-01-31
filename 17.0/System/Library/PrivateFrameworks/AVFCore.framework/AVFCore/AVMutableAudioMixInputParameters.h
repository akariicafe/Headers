@class NSString, AVMutableAudioMixInputParametersInternal;

@interface AVMutableAudioMixInputParameters : AVAudioMixInputParameters {
    AVMutableAudioMixInputParametersInternal *_mutableInputParameters;
}

@property (nonatomic) int trackID;
@property (copy, nonatomic) NSString *audioTimePitchAlgorithm;
@property (retain, nonatomic) struct opaqueMTAudioProcessingTap { } *audioTapProcessor;

+ (id)audioMixInputParameters;
+ (id)audioMixInputParametersWithAssetTrack:(id)a0 introFadeDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 fadeOutStart:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 fadeOutDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
+ (id)audioMixInputParametersWithTrack:(id)a0;
+ (id)audioMixInputParametersWithTrack:(id)a0 scheduledAudioParameters:(id)a1;

- (void)setVolume:(float)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)setVolumeRampFromStartVolume:(float)a0 toEndVolume:(float)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2;
- (void)setVolumeRampFromStartVolume:(float)a0 toEndVolume:(float)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 rampMode:(long long)a3;

@end
