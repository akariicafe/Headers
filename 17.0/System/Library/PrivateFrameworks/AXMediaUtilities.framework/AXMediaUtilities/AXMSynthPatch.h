@class NSArray;

@interface AXMSynthPatch : NSObject {
    double _baseFrequency;
    double _baseAmplitude;
    double *_harmonics;
    double *_amplitudes;
    long long _n;
}

@property (copy, nonatomic) NSArray *harmonicInfos;

+ (id)defaultPatch;
+ (id)sawPatch;
+ (id)sinePatch;
+ (id)squarePatch;
+ (id)trapeziumPatch;
+ (id)trianglePatch;
+ (id)violinPatch;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithHarmonics:(id)a0;
- (double)waveformValueForPhase:(double)a0 frequency:(double)a1 amplitude:(double)a2;

@end
