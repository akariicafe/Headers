@class NSDictionary, NSString, FigSDOFRenderingTuningParameters;

@interface BWStillImagePortraitMetadataNode : BWNode {
    int _sdofRenderingVersion;
    NSDictionary *_sensorConfigurationsByPortType;
    NSString *_defaultPortType;
    float _defaultZoomFactor;
    Class _sdofRenderingTuningParametersClass;
    NSString *_currentPortType;
    float _currentZoomFactorForSDOFRenderingParameters;
    NSDictionary *_sdofRenderingParameters;
    FigSDOFRenderingTuningParameters *_sdofRenderingTuningParameters;
}

+ (void)initialize;

- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)initWithNodeConfiguration:(id)a0 sdofRenderingVersion:(int)a1 sensorConfigurationsByPortType:(id)a2 defaultPortType:(id)a3 defaultZoomFactor:(float)a4;

@end
