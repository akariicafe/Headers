@class GVSOverscanPredictor, NSDictionary;
@protocol BWVISOverscanPredictionDelegate;

@interface BWVISOverscanPredictionNode : BWNode {
    GVSOverscanPredictor *_visOverscanPredictor;
    NSDictionary *_cameraInfoByPortType;
    id<BWVISOverscanPredictionDelegate> _delegate;
}

+ (void)initialize;

- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (id)nodeType;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)nodeSubType;
- (id)initWithCameraInfoByPortType:(id)a0 delegate:(id)a1;

@end
