@class NSBundle;
@protocol MTLBuffer, MTLDevice, MTLRenderPipelineState;

@interface NTKKaleidoscopeResourceManager : NSObject {
    NSBundle *_bundle;
    id<MTLDevice> _device;
    unsigned long long _clients;
    unsigned long long _viewMtlPixelFormat;
    id<MTLRenderPipelineState> _renderPipelines[4][2];
    id<MTLBuffer> _mtlBuffer;
}

+ (void)_deallocInstance:(id)a0;
+ (id)sharedInstanceWithPixelFormat:(unsigned long long)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithPixelFormat:(unsigned long long)a0;
- (void)_asyncDeallocInstance;
- (void)_loadMTLBufferData;
- (void)_loadPrograms;
- (id)_pipelineStateForShaderType:(unsigned long long)a0 vertexName:(id)a1 fragmentName:(id)a2 inLibrary:(id)a3 archive:(id)a4 allowsBlending:(BOOL)a5;
- (void)_queue_setupPipelineForType:(unsigned long long)a0 vertexName:(id)a1 fragmentName:(id)a2 inLibrary:(id)a3 archive:(id)a4;
- (void)addClient;
- (id)getGeometryBuffer;
- (id)getPipelineForShaderType:(unsigned long long)a0 blending:(BOOL)a1;
- (void)removeClient;

@end
