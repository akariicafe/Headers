@class NSMutableArray;

@interface FusionDeviceParameters : NSObject {
    float temporalFusionEffectivenessPerBracket;
    float hdrGrayGhostingCutoff;
    float hdrGrayGhostingEV0WeightThreshold;
    float hdrGrayGhostingEV0EVMDifferenceThreshold;
    float hdrBlackSubtractionLowLimit;
    float hdrBlackSubtractionClippingRatio;
    float hdrMaximumContrastStrength;
    float hdrDetailEnhanceLeftLimit;
    float hdrDetailEnhanceRightLimit;
    float hdrDetailEnhanceStrength;
    float hdrEVPChromaWeightBoost;
    float oisMotionThreshold;
    float denseRegisterLastFrameBelowNormalizedSNR;
    float accumulatedWeightSaturationOffset;
    BOOL supportStaticOis;
    BOOL reduceOisGhosting;
    BOOL fixPyramidAlignment;
    BOOL supportLumaBlotchinessRemoval;
    NSMutableArray *bands;
}

- (id)init;
- (void).cxx_destruct;

@end
