@class NSMutableArray;

@interface BWPortraitAutoSuggest : NSObject {
    BOOL _doSuggest;
    BOOL _lastDoSuggest;
    unsigned int _validityCounter;
    unsigned int _validObjectCounterOld;
    unsigned int _invalidityCounter;
    float _validObjectIntervalThSec;
    unsigned int _validObjectIntervalTh;
    float _fadeValidThInvalidityActiveSec;
    unsigned int _fadeValidThInvalidityActive;
    float _fadeValidThInvalidityBuildSec;
    unsigned int _fadeValidThInvalidityBuild;
    float _fadeInvalidThCst;
    float _objectFrameRatio;
    unsigned int _objectBoxFrameAreaValidityRatio;
    unsigned int _objectBoxFrameAreaValidityRatioWhenOn;
    unsigned int _marginInRatioWidth;
    unsigned int _marginInRatioHeight;
    unsigned int _marginOutRatioWidth;
    unsigned int _marginOutRatioHeight;
    unsigned int _temporalValidityTh;
    unsigned int _fadeValidTh;
    unsigned int _fadeInvalidTh;
    float _objectCentersLookbackIntervalSec;
    unsigned int _objectCentersLookbackInterval;
    unsigned int _maxMotionThreshold;
    unsigned int _minMotionThreshold;
    float _xObjectCenterStdTh;
    float _yObjectCenterStdTh;
    NSMutableArray *_trackers;
}

@property (nonatomic) BOOL shallowDepthOfFieldRenderingEnabled;
@property (nonatomic) BOOL portTypeIsFFC;

+ (void)initialize;

- (void)dealloc;
- (id)initWithTuningParameters:(id)a0;
- (BOOL)runAutoSuggestionWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 portraitSceneMonitorStatus:(int *)a1 zoomFactor:(float)a2;

@end
