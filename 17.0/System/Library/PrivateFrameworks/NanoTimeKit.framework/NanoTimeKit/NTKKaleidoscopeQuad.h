@class NTKKaleidoscopeResourceManager, CLKUITexture;
@protocol MTLBuffer, MTLRenderPipelineState;

@interface NTKKaleidoscopeQuad : CLKUIQuad {
    NTKKaleidoscopeResourceManager *_loader;
    id<MTLBuffer> _geomBuffer;
    id<MTLRenderPipelineState> _mtlPipelineOpaque;
    id<MTLRenderPipelineState> _mtlPipelineBlend;
    void /* unknown type, empty encoding */ _aspect;
}

@property (retain, nonatomic) CLKUITexture *primaryLumaTexture;
@property (retain, nonatomic) CLKUITexture *primaryChromaTexture;
@property (retain, nonatomic) CLKUITexture *secondaryTexture;
@property (readonly, nonatomic) unsigned long long shaderType;
@property (nonatomic) float alpha;
@property (nonatomic) void /* unknown type, empty encoding */ sampleCenter;
@property (nonatomic) void /* unknown type, empty encoding */ sampleRadius;
@property (nonatomic) float rotation;
@property (nonatomic) float dialRadius;
@property (nonatomic) float lineThickness;

+ (id)quadWithShaderType:(unsigned long long)a0;

- (void)purge;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)prepareForTime:(double)a0;
- (id)geomBuffer;
- (id)initWithShaderType:(unsigned long long)a0;
- (id)mtlPipelineBlend;
- (id)mtlPipelineOpaque;
- (void)renderForDisplayWithEncoder:(id)a0;
- (void)setupForQuadView:(id)a0;

@end
