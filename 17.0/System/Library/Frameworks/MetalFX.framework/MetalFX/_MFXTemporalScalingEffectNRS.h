@class NSString;
@protocol MTLComputePipelineState, MTLRenderPipelineState, MTLTexture, MTLFence, MTLBuffer;

@interface _MFXTemporalScalingEffectNRS : _MTLFXTemporalScaler <MTLFXTemporalScalerSPI> {
    void /* unknown type, empty encoding */ _jitterOffset;
    void /* unknown type, empty encoding */ _motionVectorScale;
    id<MTLBuffer> _internal_is_history_invalid;
    struct { float emaFactor; id<MTLBuffer> prevExposure; id<MTLBuffer> currExposure; id<MTLBuffer> lumaLogSums; id<MTLComputePipelineState> lumaLogSumKernel; id<MTLComputePipelineState> lumaLogSumToExposureKernel; id<MTLComputePipelineState> exposureToBufferKernel; } _internalExposure;
    struct { id<MTLTexture> colorRangeReduced; id<MTLTexture> dilatedFlow; id<MTLTexture> pixelData; id<MTLTexture> variance0; id<MTLTexture> variance1; id<MTLTexture> variance2; id<MTLComputePipelineState> kernel; id<MTLRenderPipelineState> tileKernel; BOOL kernelUsesImageblock; } _internalRenderResolution;
    struct { id<MTLTexture> prevHistory0; id<MTLTexture> prevHistory1; id<MTLTexture> currHistory0; id<MTLTexture> currHistory1; id<MTLComputePipelineState> kernel; id<MTLRenderPipelineState> tileKernel; BOOL kernelUsesImageblock; BOOL emulateSRGB; } _internalOutputResolution;
}

@property (nonatomic) struct CGPoint { double x; double y; } previousJitterOffset;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } currentWorldToViewMatrix;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } currentViewToClipMatrix;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } previousWorldToViewMatrix;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } previousViewToClipMatrix;
@property (retain, nonatomic) id<MTLTexture> debugTexture;
@property (readonly, nonatomic) unsigned long long colorTextureUsage;
@property (readonly, nonatomic) unsigned long long depthTextureUsage;
@property (readonly, nonatomic) unsigned long long motionTextureUsage;
@property (readonly, nonatomic) unsigned long long outputTextureUsage;
@property (nonatomic) unsigned long long inputContentWidth;
@property (nonatomic) unsigned long long inputContentHeight;
@property (retain, nonatomic) id<MTLTexture> colorTexture;
@property (retain, nonatomic) id<MTLTexture> depthTexture;
@property (retain, nonatomic) id<MTLTexture> motionTexture;
@property (retain, nonatomic) id<MTLTexture> outputTexture;
@property (retain, nonatomic) id<MTLTexture> exposureTexture;
@property (nonatomic) float preExposure;
@property (nonatomic) float jitterOffsetX;
@property (nonatomic) float jitterOffsetY;
@property (nonatomic) float motionVectorScaleX;
@property (nonatomic) float motionVectorScaleY;
@property (nonatomic) BOOL reset;
@property (nonatomic, getter=isDepthReversed) BOOL depthReversed;
@property (readonly, nonatomic) unsigned long long colorTextureFormat;
@property (readonly, nonatomic) unsigned long long depthTextureFormat;
@property (readonly, nonatomic) unsigned long long motionTextureFormat;
@property (readonly, nonatomic) unsigned long long outputTextureFormat;
@property (readonly, nonatomic) unsigned long long inputWidth;
@property (readonly, nonatomic) unsigned long long inputHeight;
@property (readonly, nonatomic) unsigned long long outputWidth;
@property (readonly, nonatomic) unsigned long long outputHeight;
@property (readonly, nonatomic) float inputContentMinScale;
@property (readonly, nonatomic) float inputContentMaxScale;
@property (retain, nonatomic) id<MTLFence> fence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 descriptor:(id)a1;
- (void)encodeToCommandBuffer:(id)a0;
- (void)encodeToCommandQueue:(id)a0;
- (struct CGPoint { double x0; double x1; })jitterOffset;
- (struct CGPoint { double x0; double x1; })motionVectorScale;
- (BOOL)reversedDepth;
- (void)setJitterOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)setMotionVectorScale:(struct CGPoint { double x0; double x1; })a0;
- (void)setReversedDepth:(BOOL)a0;

@end
