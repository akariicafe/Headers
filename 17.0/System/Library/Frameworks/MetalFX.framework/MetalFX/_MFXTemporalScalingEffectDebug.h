@class NSString;
@protocol MTLTexture, MTLFence, MTLComputePipelineState;

@interface _MFXTemporalScalingEffectDebug : _MTLFXTemporalScaler <MTLFXTemporalScalerSPI> {
    void /* unknown type, empty encoding */ _jitterOffset;
    void /* unknown type, empty encoding */ _motionVectorScale;
    id<MTLTexture> _dilatedFlow;
    id<MTLTexture> _history[2];
    id<MTLComputePipelineState> _dilateFlowPSO;
    id<MTLComputePipelineState> _blendUnjitterCurrAndPrev;
    unsigned char _currHistoryIdx;
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
