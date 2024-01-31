@class BWSensorConfiguration, FigFocusPixelDisparityGenerator, BWStillImageNodeConfiguration;

@interface BWStillImageFocusPixelDisparityNode : BWNode {
    BWStillImageNodeConfiguration *_nodeConfiguration;
    BWSensorConfiguration *_sensorConfiguration;
    FigFocusPixelDisparityGenerator *_focusPixelDisparityGenerator;
    struct opaqueCMFormatDescription { } *_disparityFormatDescription;
    struct { void /* unknown type, empty encoding */ columns[4]; } _identityExtrinsicMatrix;
    float _pixelSizeInMm;
    BOOL _depthIsAlwaysHighQuality;
}

+ (void)initialize;

- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (id)nodeType;
- (id)nodeSubType;
- (id)initWithNodeConfiguration:(id)a0 sensorConfiguration:(id)a1 disparityMapWidth:(unsigned long long)a2 disparityMapHeight:(unsigned long long)a3 depthIsAlwaysHighQuality:(BOOL)a4;

@end
