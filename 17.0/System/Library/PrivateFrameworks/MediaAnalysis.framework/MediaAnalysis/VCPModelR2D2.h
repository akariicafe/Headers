@class NSObject, NSString, VCPBackwarp, VCPFlowDecoder, VCPFlowFeatureExtractor, VCPCorrelation;
@protocol OS_dispatch_semaphore;

@interface VCPModelR2D2 : VCPImageMotionFlowAnalyzer {
    NSString *_resConfig;
    int _numLevels;
    int _startLevel;
    struct __CVBuffer { } *_firstBuffer;
    struct __CVBuffer { } *_secondBuffer;
    struct __CVBuffer { } *_outputFlow;
    VCPFlowFeatureExtractor *_featureExtractor;
    VCPFlowDecoder *_flowDecoder[7];
    VCPCorrelation *_correlation;
    VCPBackwarp *_backwarp;
    struct { struct { int channels; int height; int width; } featureShape[7]; struct __CVBuffer *feature[7]; } _imageFeature[2];
    struct { struct __CVBuffer *correlations[7]; struct __CVBuffer *flows[7]; struct __CVBuffer *upscaledFlows[7]; struct __CVBuffer *warpedBuffers[7]; } _storage;
    NSObject<OS_dispatch_semaphore> *_flowDecoderSemaphore;
    struct Scaler { struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } pool_; int width_; int height_; unsigned int format_; struct CF<OpaqueVTPixelTransferSession *> { struct OpaqueVTPixelTransferSession *value_; } transfer_session_; } _scaler;
}

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)releaseStorages;
- (int)allocateCorreleationBuffer:(struct __CVBuffer **)a0 forLevel:(unsigned int)a1;
- (int)allocateFeatures;
- (int)allocateInputAndOutputBuffers;
- (int)allocateStorages;
- (int)analyzeImages:(struct __CVBuffer { } *)a0 secondImage:(struct __CVBuffer { } *)a1 cancel:(id /* block */)a2;
- (int)configForAspectRatio:(id)a0;
- (int)copyImage:(struct __CVBuffer { } *)a0 toBuffer:(struct __CVBuffer { } *)a1 withChannels:(int)a2;
- (int)createInput:(struct __CVBuffer { } *)a0 withImage:(struct __CVBuffer { } *)a1 modelInputHeight:(int)a2 modelInputWidth:(int)a3;
- (int)createModules:(id /* block */)a0;
- (int)estimateFlowForLevel:(int)a0 upperFlow:(struct __CVBuffer { } *)a1 outputFlow:(struct __CVBuffer { } *)a2;
- (int)estimateMotionFlow:(struct __CVBuffer { } *)a0;
- (int)extractFeatureFromImage:(struct __CVBuffer { } *)a0 toFeature:(struct { struct { int x0; int x1; int x2; } x0[7]; struct __CVBuffer *x1[7]; } *)a1;
- (int)extractFeaturesFromFirst:(struct __CVBuffer { } *)a0 andSecond:(struct __CVBuffer { } *)a1;
- (int)flowScalingTo:(struct __CVBuffer { } *)a0 flowBufferY:(struct __CVBuffer { } *)a1 scalerX:(float)a2 scalerY:(float)a3;
- (int)flowScalingTo:(struct __CVBuffer { } *)a0 scalerX:(float)a1 scalerY:(float)a2;
- (int)getFlowToBuffer:(struct __CVBuffer { } *)a0;
- (int)prepareWithLightweightOption:(BOOL)a0 aspectRatio:(id)a1 numLevels:(int)a2 startLevel:(int)a3 cancel:(id /* block */)a4;
- (void)releaseFeatureBuffers;
- (int)releaseInputAndOutputBuffers;
- (void)releaseMemory;
- (int)updateModelForAspectRatio:(id)a0 computationAccuracy:(unsigned int)a1;
- (int)updateModulesWithConfig:(id)a0;

@end
