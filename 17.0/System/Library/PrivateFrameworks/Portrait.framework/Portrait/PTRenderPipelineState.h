@class PTMetalContext, NSString, PTRenderPipelineDescriptor, PTRenderEffectManager, PTUtil, PTTexture;
@protocol RenderingIntegration;

@interface PTRenderPipelineState : NSObject <PTRenderState> {
    PTMetalContext *_metalContext;
    PTRenderPipelineDescriptor *_pipelineDescritor;
    id<RenderingIntegration> _renderIntegration;
    struct CGSize { double width; double height; } _colorOutputSizeCropped;
    struct CGSize { double width; double height; } _colorOutputSize;
    struct CGSize { double width; double height; } _colorInputSize;
    int _quality;
    unsigned long long _renderingVersion;
    PTRenderEffectManager *_renderEffects;
    int _colorOutputRotationDegrees;
    PTUtil *_util;
    PTTexture *_intermediateOutput;
}

@property (readonly) int quality;
@property (nonatomic) int sourceColorBitDepth;
@property (nonatomic) unsigned long long renderingVersion;
@property (nonatomic) int hwModelID;
@property (nonatomic) float focalLenIn35mmFilm;
@property (nonatomic) int conversionGain;
@property (nonatomic) int readNoise_1x;
@property (nonatomic) int readNoise_8x;
@property (nonatomic) float noiseScaleFactor;
@property (nonatomic) int rawSensorHeight;
@property (nonatomic) int rawSensorWidth;
@property (nonatomic) void /* unknown type, empty encoding */ visCropFactor;
@property (nonatomic) int sensorID;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } totalSensorCrop;
@property (nonatomic) float networkBias;
@property (readonly) struct { void /* unknown type, empty encoding */ x0[3]; } cameraIntrinsicMatrix;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)classForVersion:(unsigned long long)a0;

- (void)adjustScissorRect:(id)a0;
- (BOOL)prepareForRendering;
- (void)addRenderEffect:(id)a0;
- (int)encodeRenderTo:(id)a0 withRenderRequest:(id)a1;
- (void).cxx_destruct;
- (id)initWithPipelineDescriptor:(id)a0 metalContext:(id)a1 quality:(int)a2;
- (BOOL)prepareForRendering:(BOOL)a0;

@end
