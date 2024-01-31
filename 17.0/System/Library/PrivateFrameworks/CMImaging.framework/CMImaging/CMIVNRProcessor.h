@class NSString, VNRTuning, VNRPyramid, CMIVNRPrepareDescriptor, NSDictionary, CMIExternalMemoryResource, FigMetalContext, VNRShaders;
@protocol MTLDevice, MTLCommandBuffer, MTLTexture, MTLCommandQueue;

@interface CMIVNRProcessor : NSObject <MetalImageBufferProcessor> {
    id<MTLCommandBuffer> _metalCommandBuffer;
    CMIVNRPrepareDescriptor *_prepareDescriptor;
    FigMetalContext *_metalContext;
}

@property (readonly) VNRTuning *tuning;
@property (retain, nonatomic) id<MTLDevice> metalDevice;
@property (readonly) id<MTLCommandBuffer> metalCommandBuffer;
@property (retain, nonatomic) VNRShaders *metalShaders;
@property (retain, nonatomic) id<MTLTexture> previousLumaTex;
@property (retain, nonatomic) id<MTLTexture> previousChromaTex;
@property (retain, nonatomic) VNRPyramid *inputPyramid;
@property (retain, nonatomic) VNRPyramid *previousOutputPyramid;
@property (retain, nonatomic) VNRPyramid *deghostPyramid;
@property (retain, nonatomic) VNRPyramid *outputPyramid;
@property (nonatomic) unsigned long long frameIndex;
@property (retain, nonatomic) struct __CVBuffer { } *inputPixelBuffer;
@property (retain, nonatomic) NSDictionary *inputMetadata;
@property (retain, nonatomic) struct __CVBuffer { } *outputPixelBuffer;
@property (retain, nonatomic) id<MTLCommandQueue> metalCommandQueue;
@property (readonly, nonatomic) BOOL supportsExternalMemoryResource;
@property (retain, nonatomic) CMIExternalMemoryResource *externalMemoryResource;
@property (retain, nonatomic) NSDictionary *tuningParameters;
@property (retain, nonatomic) NSDictionary *cameraInfoByPortType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_productTypeFromMGGetProductType:(int)a0;
+ (id)getDefaultTuningParameters;
+ (id)getTuningParametersForCurrentDevice;

- (int)resetState;
- (int)prewarm;
- (void)dealloc;
- (int)finishProcessing;
- (int)process;
- (void).cxx_destruct;
- (int)prepareToProcess:(unsigned int)a0;
- (id)initWithCommandQueue:(id)a0;
- (int)purgeResources;
- (int)setup;
- (int)prepareToProcess:(unsigned int)a0 prepareDescriptor:(id)a1;
- (id)bindTextureToPixelBuffer:(struct __CVBuffer { } *)a0 plane:(unsigned long long)a1 metalPixelFormat:(unsigned long long)a2 usage:(unsigned long long)a3;
- (int)fillInputPyramid:(id)a0 previousOutputPyramid:(id)a1 deghostPyramid:(id)a2 inputLuma:(id)a3 inputChroma:(id)a4 previousOutputLuma:(id)a5 previousOutputChroma:(id)a6;
- (int)fuseWithInputPyramid:(id)a0 deghostPyramid:(id)a1 previousOutputPyramid:(id)a2 outputPyramid:(id)a3 inputLuma:(id)a4 inputChroma:(id)a5 previousOutputLuma:(id)a6 previousOutputChroma:(id)a7 outputLuma:(id)a8 outputChroma:(id)a9 frameIdx:(unsigned long long)a10;
- (int)propagateDeghostingScoresDownPyramid:(id)a0;
- (void)waitUntilScheduledWithWorkloadName:(const char *)a0;

@end
