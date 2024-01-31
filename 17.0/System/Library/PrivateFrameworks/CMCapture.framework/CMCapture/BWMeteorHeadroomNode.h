@class NSString, FigMetalContext, NSDictionary, FigMetalHistogram;

@interface BWMeteorHeadroomNode : BWNode {
    NSString *_lastCaptureRequestIdentifier;
    float _lastMeteorHeadroom;
    float _gainMapMainImageDownscalingFactor;
    int _headroomProcessingType;
    FigMetalContext *_metalContext;
    FigMetalHistogram *_histogram;
    NSDictionary *_meteorHeadroomParametersByPortType;
}

+ (void)initialize;

- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (float)gainMapMainImageDownscalingFactor;
- (id)initWithNodeConfiguration:(id)a0 sensorConfigurationsByPortType:(id)a1;
- (void)setGainMapMainImageDownscalingFactor:(float)a0;
- (int)headroomProcessingType;
- (void)setHeadroomProcessingType:(int)a0;

@end
