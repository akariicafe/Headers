@class NSArray, NSString;

@interface BWUBCaptureParameters : NSObject {
    NSString *_portType;
    NSArray *_deepFusionHDREVZeroCountByEffectiveIntegrationTime;
    int _maxNumberOfFramesForAdaptiveBracketing;
    double _digitalFlashAvailableEffectiveIntegrationTimeThreshold;
    double _digitalFlashRecommendedEffectiveIntegrationTimeThreshold;
    double _stationaryDigitalFlashRecommendedEffectiveIntegrationTimeThreshold;
    float _digitalFlashRecommendRegularFlashSNRThreshold;
    float _digitalFlashBacklitRecommendRegularFlashSNRThreshold;
    float _digitalFlashBacklitRecommendRegularFlashAERelativeDifferenceThreshold;
    BOOL _digitalFlashHighlightRecoveryEnabled;
    int _referenceFrameSelectionMethod;
    BOOL _usePreviousSIFR;
    NSArray *_motionAndFocusScoreWeights;
}

@property (readonly, nonatomic) BOOL nonHDRBrightLightCapturesEnabled;
@property (readonly, nonatomic) double lowLightEffectiveIntegrationTimeThreshold;
@property (readonly, nonatomic) double sifrMainEffectiveIntegrationTimeThreshold;
@property (readonly, nonatomic) float sifrGainThreshold;
@property (readonly, nonatomic) float lowLightHDRWithoutSIFRISPDGainThreshold;
@property (readonly, nonatomic) double longWithoutSphereEffectiveIntegrationTimeThreshold;
@property (readonly, nonatomic) double deepFusionEffectiveIntegrationTimeThreshold;
@property (readonly, nonatomic) double deepFusionEnhancedResolutionQuadraLongEffectiveIntegrationTimeThreshold;
@property (readonly, nonatomic) int deepFusionBracketedCaptureReferenceFrameIndex;
@property (readonly, nonatomic) double learnedNRUltraHighResolutionDowngradeEffectiveIntegrationTimeThreshold;
@property (readonly, nonatomic) double redSaturationMainEffectiveIntegrationTimeThreshold;
@property (readonly, nonatomic) float redSaturationSIFRGainThreshold;
@property (readonly, nonatomic) int toneCurveBehavior;
@property (readonly, nonatomic) BOOL preserveBlackLevel;
@property (readonly, nonatomic) float nightModeMinGainThreshold;
@property (readonly, nonatomic) BOOL alwaysUseAFTimeout;
@property (readonly, nonatomic) NSArray *afWindowParams;

- (void)dealloc;
- (BOOL)digitalFlashHighlightRecoveryEnabled;
- (double)digitalFlashRecommendedEffectiveIntegrationTimeThreshold;
- (BOOL)usePreviousSIFR;
- (float)digitalFlashRecommendRegularFlashSNRThreshold;
- (id)description;
- (int)deepFusionHDREVZeroCountForEffectiveIntegrationTime:(double)a0;
- (double)digitalFlashAvailableEffectiveIntegrationTimeThreshold;
- (id)motionAndFocusScoreWeights;
- (int)referenceFrameSelectionMethod;
- (int)maxNumberOfFramesForAdaptiveBracketing;
- (float)digitalFlashBacklitRecommendRegularFlashAERelativeDifferenceThreshold;
- (id)initWithPortType:(id)a0 sensorIDDictionary:(id)a1;
- (float)digitalFlashBacklitRecommendRegularFlashSNRThreshold;
- (double)stationaryDigitalFlashRecommendedEffectiveIntegrationTimeThreshold;

@end
