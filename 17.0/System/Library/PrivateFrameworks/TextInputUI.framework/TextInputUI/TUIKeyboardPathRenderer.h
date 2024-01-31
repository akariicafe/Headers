@class NSString, MTKView;
@protocol MTLPipelineLibrarySPI, MTLDevice, MTLCommandQueue, MTLBuffer, MTLRenderPipelineState, TUIKeyboardPathRendererDataSource;

@interface TUIKeyboardPathRenderer : NSObject <MTKViewDelegate> {
    BOOL _generatePipelineDescriptors;
    id<MTLDevice> _device;
    MTKView *_view;
    BOOL _drawing;
    BOOL _setupCompleted;
    unsigned long long _colorPixelFormat;
    id<MTLRenderPipelineState> _pipelineState;
    id<MTLPipelineLibrarySPI> _pipelineLibrary;
    id<MTLCommandQueue> _commandQueue;
    void /* unknown type, empty encoding */ _viewportPointSize;
    void /* unknown type, empty encoding */ _viewportPixelSize;
    float _scale;
    id<MTLBuffer> _vertexBuffer;
    unsigned long long _vertexCount;
}

@property (weak, nonatomic) id<TUIKeyboardPathRendererDataSource> datasource;
@property (nonatomic) void /* unknown type, empty encoding */ pathColor;
@property (nonatomic) BOOL paused;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generatePipelineDescriptorsForMTKView:(id)a0;

- (void)mtkView:(id)a0 drawableSizeWillChange:(struct CGSize { double x0; double x1; })a1;
- (void)drawInMTKView:(id)a0;
- (void).cxx_destruct;
- (void)keyboardDidHide;
- (void)completeRendering;
- (id)initWithMTKView:(id)a0 generatePipelineDescriptors:(BOOL)a1;
- (void)setupMetal;
- (void)setupPipeline;
- (void)updateVertexBufferForPaths:(id)a0;

@end
