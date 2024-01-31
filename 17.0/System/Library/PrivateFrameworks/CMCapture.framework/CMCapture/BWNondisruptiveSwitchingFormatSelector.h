@class NSString, NSDictionary;

@interface BWNondisruptiveSwitchingFormatSelector : NSObject {
    NSString *_portType;
    float _baseZoomFactor;
    NSDictionary *_zoomFactorToNondisruptiveSwitchingFormatIndexSIFRBinned;
    NSDictionary *_zoomFactorToNondisruptiveSwitchingFormatIndexSIFRNonBinned;
    int _mainFormatSIFRBinningFactor;
    int _videoStabilizationStrength;
    NSDictionary *_quadraSubPixelSwitchingParameters;
    struct BWSmartCameraScene { BOOL enabled; BOOL confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; short confidenceHysteresisTemporalLagBeforeConfident; short confidenceHysteresisTemporalLagBeforeNotConfident; short currentTemporalHysteresis; BOOL resetTemporalHysteresisAndFilteringOnNextUpdate; char *name; } _quadraSubPixelSceneBasedOnNormalizedSNR;
    struct BWSmartCameraScene { BOOL enabled; BOOL confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; short confidenceHysteresisTemporalLagBeforeConfident; short confidenceHysteresisTemporalLagBeforeNotConfident; short currentTemporalHysteresis; BOOL resetTemporalHysteresisAndFilteringOnNextUpdate; char *name; } _quadraSubPixelSceneBasedOnLuxLevel;
    BOOL _quadraSubPixelSceneMonitoringForActionCameraEnabled;
    BOOL _quadraSubPixelSceneMonitoringForDigitalFlashEnabled;
    float _lastZoomFactor;
    int _lastDigitalFlashMode;
    BOOL _lastStationary;
    int _lastNondisruptiveSwitchingFormatIndex;
    NSString *_lastQuadraSubPixelSwitchingIntent;
}

+ (void)initialize;

- (void)dealloc;
- (void)setVideoStabilizationStrength:(int)a0;
- (int)formatIndexForZoomFactor:(float)a0 frameStatistics:(id)a1 stillImageDigitalFlashMode:(int)a2 isStationary:(BOOL)a3 isSlave:(BOOL)a4 binnedSIFROnSlaveAllowed:(BOOL)a5;
- (id)initWithPortType:(id)a0 sensorIDString:(id)a1 baseZoomFactor:(float)a2 zoomFactorToNondisruptiveSwitchingFormatIndexSIFRBinned:(id)a3 zoomFactorToNondisruptiveSwitchingFormatIndexSIFRNonBinned:(id)a4 mainFormatSIFRBinningFactor:(int)a5;

@end
