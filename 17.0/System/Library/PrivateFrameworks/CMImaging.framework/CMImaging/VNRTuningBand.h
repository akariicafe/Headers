@class VNRGainValueArray;

@interface VNRTuningBand : NSObject {
    VNRGainValueArray *_deghostPatchSigmaScalingGVA;
    VNRGainValueArray *_deghostBoostFactorScalingGVA;
    VNRGainValueArray *_fusionStrengthScalingGVA;
    float _deghostPatchSigmaScaling;
    float _deghostBoostFactorScaling;
    float _fusionStrengthScaling;
}

- (void).cxx_destruct;
- (int)updateWithGain:(float)a0;
- (id)initWithTuningParamsDict:(id)a0;

@end
