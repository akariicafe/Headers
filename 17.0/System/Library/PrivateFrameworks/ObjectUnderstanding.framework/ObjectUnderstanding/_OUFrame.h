@protocol OUCamera;

@interface _OUFrame : NSObject <OUFrame> {
    struct __CVBuffer { } *sceneColorBufferBGRA;
}

@property (nonatomic) double timestamp;
@property (retain, nonatomic) id<OUCamera> camera;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } referenceOriginTransform;
@property (nonatomic) struct __CVBuffer { } *colorBuffer;
@property (retain, nonatomic) id<OUCamera> sceneCamera;
@property (nonatomic) struct __CVBuffer { } *sceneColorBuffer;
@property (nonatomic) struct __CVBuffer { } *sceneDepthBuffer;
@property (nonatomic) struct __CVBuffer { } *sceneDepthConfidenceBuffer;
@property (nonatomic) struct __CVBuffer { } *semanticLabelBuffer;
@property (nonatomic) struct __CVBuffer { } *semanticConfidenceBuffer;
@property (nonatomic) long long vioTrackingState;
@property (readonly, nonatomic) long long deviceOrientation;
@property (nonatomic) struct __CVBuffer { } *semanticLabelBufferOnWideCamera;

- (void)dealloc;
- (id)initWithFrame:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (struct float4x4 { void /* unknown type, empty encoding */ x0[4]; })GetSceneCameraPoseInVisionWorld;
- (struct float4x4 { void /* unknown type, empty encoding */ x0[4]; })GetCameraPoseInVisionWorld;
- (struct float4x4 { void /* unknown type, empty encoding */ x0[4]; })GetSceneCameraProjectionMatrixInVisionWorld;
- (void /* unknown type, empty encoding */)GetSceneRgbToDepthRatio;
- (struct __CVBuffer { } *)LoadImageToCVPixelBufferTest:(id)a0 PixelType:(unsigned int)a1;
- (id)LoadRgb:(id)a0;
- (struct float4x4 { void /* unknown type, empty encoding */ x0[4]; })GetProjectionMatrixInVisionWorld;
- (struct __CVBuffer { } *)GetSceneColorBufferBGRA;
- (id)LoadDepth:(id)a0;
- (id)LoadLabel:(id)a0;
- (id)LoadVote:(id)a0;
- (id)initWithSceneYUV:(struct __CVBuffer { } *)a0 sceneDepth:(struct __CVBuffer { } *)a1 referenceOriginTranform:(struct float4x4 { void /* unknown type, empty encoding */ x0[4]; })a2 OUCamera:(id)a3;

@end
