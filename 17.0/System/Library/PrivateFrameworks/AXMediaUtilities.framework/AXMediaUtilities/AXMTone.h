@class AXMSynthPatch, AXMADSREnvelope;

@interface AXMTone : NSObject

@property (nonatomic) unsigned long long sampleRate;
@property (readonly, nonatomic) double frequency;
@property (readonly, nonatomic) AXMADSREnvelope *envelope;
@property (retain, nonatomic) AXMSynthPatch *patch;
@property (nonatomic) double gain;
@property (readonly, nonatomic) double aWeighting;

- (id)init;
- (void).cxx_destruct;
- (void)_setFrequency:(double)a0;
- (double)_rawValueForTonePhase:(double)a0;
- (id)initWithSampleRate:(double)a0 envelope:(id)a1;
- (void)renderInBuffer:(void *)a0 atFrame:(unsigned long long)a1;

@end
