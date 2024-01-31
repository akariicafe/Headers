@class AVAudioMixSweepFilterEffectParametersInternal;

@interface AVAudioMixSweepFilterEffectParameters : AVAudioMixEffectParameters {
    AVAudioMixSweepFilterEffectParametersInternal *_sweepFilterAudioEffect;
}

@property (readonly, nonatomic) int minimumCutOffFrequency;
@property (readonly, nonatomic) int maximumCutOffFrequency;
@property (readonly, nonatomic) float bypassThreshold;
@property (readonly, nonatomic) float sweepValue;

+ (id)sweepFilterEffectParametersWithMinimumCutOffFrequency:(unsigned int)a0 maximumCutOffFrequency:(unsigned int)a1 bypassThreshold:(float)a2 sweepValue:(float)a3;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)initWithMinimumCutOffFrequency:(unsigned int)a0 maximumCutOffFrequency:(unsigned int)a1 bypassThreshold:(float)a2 sweepValue:(float)a3;
- (id)sweepFilterEffectWithSweepValue:(float)a0;

@end
