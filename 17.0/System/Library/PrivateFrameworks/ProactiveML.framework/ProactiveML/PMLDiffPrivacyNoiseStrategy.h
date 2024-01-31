@class NSString;

@interface PMLDiffPrivacyNoiseStrategy : NSObject <PMLNoiseStrategy> {
    unsigned long long _seed;
    BOOL _inplaceNorm;
    int _maxIterations;
}

@property (nonatomic) struct { float gaussianScaleFactor; float laplaceScaleFactor; } noiseScaleFactors;
@property (nonatomic) float minimumMagnitude;
@property (nonatomic) long long noiseMechanism;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)gaussianNoiseWithScaleFactor:(float)a0 minimumMagnitude:(float)a1 seed:(int)a2;

- (id)initWithPlist:(id)a0 chunks:(id)a1 context:(id)a2;
- (id)toPlistWithChunks:(id)a0;
- (void)addNoiseToSparseMatrix:(id)a0;
- (void)addNoiseToSparseVector:(id)a0;
- (id)createDefaultSampler;
- (id)createSamplerByName:(id)a0;
- (id)initWithMaxIterationCount:(int)a0 noiseScaleFactors:(struct { float x0; float x1; })a1 minimumMagnitude:(float)a2 noiseMechanism:(long long)a3 inplaceNorm:(BOOL)a4;
- (id)initWithMaxIterationCount:(int)a0 noiseScaleFactors:(struct { float x0; float x1; })a1 minimumMagnitude:(float)a2 seed:(int)a3 noiseMechanism:(long long)a4 inplaceNorm:(BOOL)a5;
- (struct _PMLPreNoiseScaleFactorAndNoiseSampler { id x0; float x1; })samplerWithScaleFactorFor:(id)a0 usingNorm:(BOOL)a1;
- (BOOL)scaleAndAddNoiseToDenseVector:(id)a0 usingNorm:(BOOL)a1 scaleFactor:(float *)a2;

@end
