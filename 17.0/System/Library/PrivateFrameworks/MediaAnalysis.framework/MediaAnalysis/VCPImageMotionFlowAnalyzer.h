@class MPSImageSpatioTemporalGuidedFilter, MPSImageBilinearScale;
@protocol MTLCommandQueue, MTLDeviceSPI;

@interface VCPImageMotionFlowAnalyzer : VCPImageAnalyzer {
    int _cnnInputHeight;
    int _cnnInputWidth;
    unsigned int _computationAccuracy;
    id<MTLDeviceSPI> _device;
    id<MTLCommandQueue> _commandQueue;
    MPSImageBilinearScale *_bilinearScale;
    MPSImageSpatioTemporalGuidedFilter *_guidedFilter;
}

@property (readonly, nonatomic) int cnnOutputHeight;
@property (readonly, nonatomic) int cnnOutputWidth;

+ (id)analyzeWithLightweightOption:(BOOL)a0 aspectRatio:(id)a1 computationAccuracy:(unsigned int)a2 forceCPU:(BOOL)a3 sharedModel:(BOOL)a4 flushModel:(BOOL)a5 cancel:(id /* block */)a6;

- (id)init;
- (void).cxx_destruct;
- (int)analyzeImages:(struct __CVBuffer { } *)a0 secondImage:(struct __CVBuffer { } *)a1 cancel:(id /* block */)a2;
- (int)combineBufferTo:(struct __CVBuffer { } *)a0 flowX:(struct __CVBuffer { } *)a1 flowY:(struct __CVBuffer { } *)a2;
- (int)configForAspectRatio:(id)a0;
- (int)flowScalingTo:(struct __CVBuffer { } *)a0 flowBufferY:(struct __CVBuffer { } *)a1 scalerX:(float)a2 scalerY:(float)a3;
- (int)flowScalingTo:(struct __CVBuffer { } *)a0 scalerX:(float)a1 scalerY:(float)a2;
- (int)getFlowToBuffer:(struct __CVBuffer { } *)a0;
- (float *)getFlowWithHeight:(int *)a0 andWidth:(int *)a1;
- (int)guidedUpsampling:(struct __CVBuffer { } *)a0 inBGRA:(struct __CVBuffer { } *)a1;
- (id)initWithLightweightOption:(BOOL)a0 aspectRatio:(id)a1 computationAccuracy:(unsigned int)a2 forceCPU:(BOOL)a3 sharedModel:(BOOL)a4 flushModel:(BOOL)a5 cancel:(id /* block */)a6;
- (int)preferredInputFormat:(int *)a0 height:(int *)a1 format:(unsigned int *)a2;
- (int)prepareWithLightweightOption:(BOOL)a0 aspectRatio:(id)a1 forceCPU:(BOOL)a2 sharedModel:(BOOL)a3 flushModel:(BOOL)a4;
- (int)prepareWithLightweightOption:(BOOL)a0 aspectRatio:(id)a1 numLevels:(int)a2 startLevel:(int)a3 cancel:(id /* block */)a4;
- (int)reInitModel;
- (int)scaleFlowTo:(struct __CVBuffer { } *)a0;
- (int)updateModelForAspectRatio:(id)a0 computationAccuracy:(unsigned int)a1;

@end
