@class CMITiledInferenceProcessorConfig, CMITiledInferenceProcessorTileInfoImpl;
@protocol CMIInferenceNetworkInstance, CMIInferenceExecutionStream, MTLCommandQueue, CMIInferenceDevice;

@interface CMITiledInferenceProcessorInstanceExecutor : NSObject {
    unsigned long long _instanceIndex;
    id<CMIInferenceDevice> _inferenceDevice;
    id<MTLCommandQueue> _commandQueue;
    CMITiledInferenceProcessorConfig *_config;
    CMITiledInferenceProcessorTileInfoImpl *_tileInfo;
    id<CMIInferenceExecutionStream> _inferenceStream;
    BOOL _active;
    unsigned long long _stageIndex;
    BOOL _preStep;
    id /* block */ _completionHandler;
    id<CMIInferenceNetworkInstance> _networkInstanceToWaitOn;
}

- (void).cxx_destruct;
- (BOOL)isActive;
- (int)scheduleWaitsWithCommandBuffer:(id)a0;
- (id)initWithIndex:(SEL)a0 inferenceDevice:(unsigned long long)a1 commandQueue:(id)a2 config:(id)a3 tileCount:(id)a4;
- (int)scheduleWorkWithCommandBuffer:(id)a0;
- (int)startTileWithIndex:(SEL)a0 completionHandler:(id /* block */)a1;

@end
