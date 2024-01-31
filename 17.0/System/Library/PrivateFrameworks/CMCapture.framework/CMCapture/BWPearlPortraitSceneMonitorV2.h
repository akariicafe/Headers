@class NSString, BWPortraitAutoSuggest;

@interface BWPearlPortraitSceneMonitorV2 : NSObject <BWPortraitSceneMonitor> {
    int _numberOfFramesToWaitForAEAndLTMToStabilize;
    float _sdofDepthQualitySmoothingFactor;
    float _luxLevelSmoothingFactor;
    int _numberOfDisabledFramesInARow;
    int _numberOfFramesToStayEnabledThreshold;
    unsigned short _sdofTooBrightLuxLevelThreshold;
    unsigned short _sdofTooBrightMaxLuxLevelThreshold;
    float _sdofTooBrightDepthQualityMinThreshold;
    float _sdofDepthQualityKCount;
    float _sdofTooCloseDepthDistanceThreshold;
    float _sdofTooFarDepthDistanceThreshold;
    float _sdofTooBrightTooFarDepthDistanceThreshold;
    int _sdofNumberOfFramesSinceLastFaceThreshold;
    float _stageTooBrightDepthQualityThreshold;
    float _stageTooCloseDepthDistanceThreshold;
    float _stageTooFarDepthDistanceThreshold;
    float _stageBackgroundTooFarDepthQualityThreshold;
    unsigned short _stageBackgroundTooFarLuxLevelThreshold;
    int _stageFaceNumberOfFramesSinceLastFaceThreshold;
    float _closeDepthDistanceAverage;
    float _sdofDepthQuality;
    float _sdofDepthQualityFiltered;
    float _stageDepthQuality;
    float _luxLevelFiltered;
    BOOL _aeStableAfterStartStreaming;
    int _sdofNumFramesSinceAEBecameStable;
    BOOL _depthSensorOccluded;
    BOOL _stageFaceDetected;
    int _numberOfFramesSinceLastFace;
    BOOL _stageFaceHasBeenSeen;
    int _stageMostRecentFacesCount;
    BOOL _autoSuggestEnabled;
    BWPortraitAutoSuggest *_autoSuggestMonitor;
    int _autoSuggestMaxThermalPressureLevel;
    int _autoSuggestMaxPeakPowerPressureLevel;
}

@property (nonatomic) BOOL shallowDepthOfFieldRenderingEnabled;
@property (nonatomic) BOOL portraitSceneMonitoringRequiresStageThresholds;
@property (readonly, nonatomic) float focusDistanceToMaxAllowedFocusDistanceRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void)focusScanDidComplete;
- (id)initWithTuningParameters:(id)a0 attachDebugFrameStatistics:(BOOL)a1 portraitAutoSuggestEnabled:(BOOL)a2 shallowDepthOfFieldEnabled:(BOOL)a3;
- (BOOL)resolveSDOFStatusWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 frameStatisticsByPortType:(id)a1 sceneFlags:(unsigned long long)a2 flashOrTorchWillBeActive:(BOOL)a3 digitalFlashWillFire:(BOOL)a4 thermalPressureLevel:(int)a5 peakPowerPressureLevel:(int)a6 effectStatus:(int *)a7 stagePreviewStatus:(int *)a8;
- (void)setAutoFocusInProgress:(BOOL)a0 focusLocked:(BOOL)a1 oneShotFocusScanInProgress:(BOOL)a2;
- (void)setSDOFBackgroundShiftSum:(float)a0 invalidShiftRatio:(float)a1 closeCanonicalDisparityAverage:(float)a2 faceCanonicalDisparityAverages:(id)a3 erodedForegroundRatio:(float)a4 foregroundRatio:(float)a5 occluded:(BOOL)a6 faces:(id)a7;

@end
