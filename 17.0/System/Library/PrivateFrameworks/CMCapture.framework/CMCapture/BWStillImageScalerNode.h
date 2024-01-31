@class BWVideoFormat, BWPixelBufferPool, NSDictionary, NSMutableDictionary, BWStillImageNodeConfiguration;

@interface BWStillImageScalerNode : BWNode {
    BWStillImageNodeConfiguration *_nodeConfiguration;
    BWVideoFormat *_outputFormat;
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    int _poolCapacity;
    BWPixelBufferPool *_pool;
    struct OpaqueVTPixelTransferSession { } *_scalingSession;
    BOOL _blackFillingRequired;
    BOOL _enforcesZoomingForPortraitCaptures;
    NSDictionary *_mainImageDownscalingFactorByAttachedMediaKey;
    NSDictionary *_outputSizeByAttachedMediaKey;
    NSMutableDictionary *_pixelBufferPoolByAttachedMediaKey;
    NSMutableDictionary *_preparedVideoFormatByAttachedMediaKey;
    struct OpaqueVTPixelTransferSession { } *_attachedMediaScalingSession;
    BOOL _backPressureDrivenPipelining;
    struct { int width; int height; } _resizedOutputDimensions;
}

@property (nonatomic) struct { int x0; int x1; } resizedOutputDimensions;

+ (void)initialize;

- (id)initWithPoolCapacity:(int)a0 nodeConfiguration:(id)a1;
- (void)setMainImageDownscalingFactorByAttachedMediaKey:(id)a0;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (id)nodeType;
- (void)setBackPressureDrivenPipelining:(BOOL)a0;
- (id)outputSizeByAttachedMediaKey;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)nodeSubType;
- (BOOL)backPressureDrivenPipelining;
- (BOOL)enforcesZoomingForPortraitCaptures;
- (BOOL)blackFillingRequired;
- (void)setEnforcesZoomingForPortraitCaptures:(BOOL)a0;
- (void)setOutputSizeByAttachedMediaKey:(id)a0;
- (id)mainImageDownscalingFactorByAttachedMediaKey;
- (void)setBlackFillingRequired:(BOOL)a0;

@end
