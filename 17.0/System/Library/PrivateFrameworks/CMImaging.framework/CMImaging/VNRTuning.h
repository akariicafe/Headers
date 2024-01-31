@class NSArray, VNRGainValueArray;

@interface VNRTuning : NSObject {
    VNRGainValueArray *_deghostPatchSigmaLumaGVA;
    VNRGainValueArray *_deghostPatchSigmaChromaGVA;
    VNRGainValueArray *_deghostBoostFactorGVA;
    VNRGainValueArray *_fusionStrengthLumaGVA;
    VNRGainValueArray *_fusionStrengthChromaGVA;
    VNRGainValueArray *_ghostAttenuationLumaGVA;
    VNRGainValueArray *_ghostAttenuationBreakthroughSigmaLumaGVA;
    VNRGainValueArray *_ghostAttenuationChromaGVA;
    VNRGainValueArray *_ghostAttenuationBreakthroughSigmaChromaGVA;
    float _deghostPatchSigmaLuma;
    float _deghostPatchSigmaChroma;
    float _deghostBoostFactor;
    float _fusionStrengthLuma;
    float _fusionStrengthChroma;
    float _ghostAttenuationLuma;
    float _ghostAttenuationBreakthroughSigmaLuma;
    float _ghostAttenuationChroma;
    float _ghostAttenuationBreakthroughSigmaChroma;
    NSArray *_lumaBands;
    NSArray *_chromaBands;
}

- (void).cxx_destruct;
- (int)updateWithGain:(float)a0;
- (id)initWithTuningParamsDict:(id)a0;

@end
