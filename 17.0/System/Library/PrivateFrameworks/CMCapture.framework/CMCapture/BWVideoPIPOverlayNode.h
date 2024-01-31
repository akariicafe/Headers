@class BWRamp, BWScalingSession, NSDictionary, CIColor, CIFilter, CIBlendKernel, CIContext;
@protocol BWVideoPIPOverlayDelegate, CIRoundedRectangleStrokeGenerator;

@interface BWVideoPIPOverlayNode : BWNode {
    struct CGContext { } *_bitmapContext;
    BWScalingSession *_scalingSession;
    BOOL _useGPUForDrawing;
    float _overCaptureTargetRatio;
    BOOL _overCaptureTargetRatioSmoothingEnabled;
    int _zoomPIPWidth;
    float _overCaptureTargetInterpolationScale;
    float _overCaptureTargetRatioInterpolationStart;
    float _lastTeleMaxScale;
    float _lastTeleMaxScaleZoomFactor;
    NSDictionary *_baseZoomFactorsByPortType;
    float _frameRate;
    BOOL _secondaryCameraStreamingEnabled;
    struct opaqueCMSampleBuffer { } *_previousAttachedSampleBuffer;
    float _reticleLineThickness;
    CIFilter<CIRoundedRectangleStrokeGenerator> *_drawRectangleFilter;
    CIBlendKernel *_sourceOverBlendKernel;
    CIContext *_ciContext;
    BOOL _gpuPathInitialized;
    CIColor *_ciReticleColor;
    id<BWVideoPIPOverlayDelegate> _delegate;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _normalizedOutputRect;
    struct opaqueCMSampleBuffer { } *_fadeReferenceSampleBuffer;
    BWRamp *_fadeRamp;
    float _fadeInDurationSeconds;
    float _fadeOutDurationSeconds;
    float _dropShadowWidth;
    float _dropShadowBlurSigma;
    float _dropShadowAlpha;
    BOOL _highQualitySamplingEnabled;
    BOOL _isDeviceBravoVariant;
}

+ (void)initialize;

- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)_releaseResources;
- (void)dealloc;
- (id)nodeType;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)nodeSubType;
- (int)_drawOverlayRects:(id)a0 toPixelBuffer:(struct __CVBuffer { } *)a1 withinRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)_drawPIPUsingCPUAndMSRToOutputPixelBuffer:(struct __CVBuffer { } *)a0 attachedPixelBuffer:(struct __CVBuffer { } *)a1 outputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 inputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 normalizedReticleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 primaryCaptureRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 uprightExifOrientation:(int)a6;
- (void)_drawPIPUsingGPUToOutputPixelBuffer:(struct __CVBuffer { } *)a0 attachedPixelBuffer:(struct __CVBuffer { } *)a1 filters:(id)a2 outputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 inputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 normalizedReticleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 uprightExifOrientation:(int)a6 pipOpacity:(float)a7;
- (void)_ensureGPUResources;
- (void)_renderAttachedPixelBuffersFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 toPixelBuffer:(struct __CVBuffer { } *)a1;
- (id)_reticleCIColorForPixelBuffer:(struct __CVBuffer { } *)a0 opacity:(float)a1;
- (id)_strokedRectangleImageWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 thickness:(float)a1 c:(id)a2;
- (id)initWithDelegate:(id)a0 secondaryCameraStreamingEnabled:(BOOL)a1 secondaryCameraFrameRate:(float)a2 maxLossyCompressionLevel:(int)a3 isDeviceBravoVariant:(BOOL)a4 baseZoomFactorsByPortType:(id)a5;

@end
