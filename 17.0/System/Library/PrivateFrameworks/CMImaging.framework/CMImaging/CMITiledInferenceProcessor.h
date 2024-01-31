@class CMITiledInferenceProcessorConfig;
@protocol MTLCommandQueue, MTLDevice, CMIInferenceDevice;

@interface CMITiledInferenceProcessor : NSObject {
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    id<CMIInferenceDevice> _inferenceDevice;
    CMITiledInferenceProcessorConfig *_config;
}

- (void).cxx_destruct;
- (id)initWithCommandQueue:(id)a0;
- (id)initWithMetalContext:(id)a0;
- (int)loadWithConfig:(id)a0;
- (int)_createInferenceDeviceWithConfig:(id)a0;
- (int)allocateIOBuffers;
- (int)runWithTileCount:(SEL)a0;
- (int)runWithTileCount:(SEL)a0 withCompletionHandler:(id /* block */)a1;

@end
