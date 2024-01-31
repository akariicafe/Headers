@class MTKView, NSString;
@protocol MTLBuffer, MTLDevice, MTLCommandQueue, MTLRenderPipelineState;

@interface ColorTemperatureSpectrumRenderer : NSObject <MTKViewDelegate>

@property (retain, nonatomic) MTKView *metalView;
@property (retain, nonatomic) id<MTLCommandQueue> commandQueue;
@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) id<MTLRenderPipelineState> pipelineState;
@property (retain, nonatomic) id<MTLBuffer> vertexBuffer;
@property (retain, nonatomic) id<MTLBuffer> fragmentShaderArgumentBuffer;
@property (nonatomic) unsigned short startColor;
@property (nonatomic) unsigned short endColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (float)colorAtLocation:(struct CGPoint { double x0; double x1; })a0;
+ (struct CGPoint { double x0; double x1; })positionForColor:(float)a0;

- (void)mtkView:(id)a0 drawableSizeWillChange:(struct CGSize { double x0; double x1; })a1;
- (void)drawInMTKView:(id)a0;
- (void).cxx_destruct;
- (float)colorAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithMetal:(id)a0 startColor:(unsigned short)a1 endColor:(unsigned short)a2;
- (void)initializeVertexBuffer;
- (struct CGPoint { double x0; double x1; })positionForColor:(float)a0;
- (void)setupRenderPipeline;

@end
