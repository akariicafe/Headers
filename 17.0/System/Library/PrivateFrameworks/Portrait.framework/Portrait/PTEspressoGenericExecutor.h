@class PTMetalContext, NSMutableDictionary, NSString, NSURL, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, MTLComputePipelineState;

@interface PTEspressoGenericExecutor : NSObject {
    void *_ctx;
    void *_plan;
    struct { void *plan; int network_index; } _net;
    NSMutableDictionary *_inputsMap;
    NSMutableDictionary *_outputsMap;
    NSMutableArray *_inputInterleavedToPlanarConversion;
    NSMutableArray *_outputPlanarToInterleavedConversion;
    NSMutableArray *_tensorSwap;
    NSObject<OS_dispatch_queue> *_espressoCallbackQueue;
    PTMetalContext *_metalContext;
    id<MTLComputePipelineState> _interleavedToPlanar;
    id<MTLComputePipelineState> _planarToInterleaved;
    NSURL *_url;
    NSString *_networkVersion;
}

+ (unsigned long long)getEspressoMetalDeviceId:(id)a0;

- (void)dealloc;
- (unsigned int)execute;
- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0;
- (unsigned int)executeAsync:(id /* block */)a0;
- (short)bindBuffers:(id)a0 toMap:(id)a1 isInput:(BOOL)a2;
- (unsigned int)bindInputResourceWithName:(id)a0 to:(struct __CVBuffer { } *)a1;
- (short)bindTensorSwaps:(id)a0;
- (unsigned int)convertBindInput:(id)a0;
- (unsigned int)convertBindOutput:(id)a0;
- (void)convertInterleavedWithMetalContext:(id)a0 inInterleaved:(id)a1 outPlanar:(id)a2;
- (void)convertPlanarWithMetalContext:(id)a0 inPlanarTexture:(id)a1 outInterleaved:(id)a2;
- (unsigned int)executeAsync;
- (unsigned int)executeAsync:(id /* block */)a0 metalContext:(id)a1;
- (id)getInputResourceWithName:(id)a0;
- (id)getOutputResourceWithName:(id)a0;
- (id)getResourceWithName:(id)a0 fromMap:(id)a1;
- (id)initWithMetalContext:(id)a0 url:(id)a1 inputNames:(id)a2 outputNames:(id)a3 tensorSwapNames:(id)a4 reshapeNetworkSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } *)a5 configuration:(id)a6;
- (id)networkVersion;
- (unsigned int)tensorSwap:(int)a0;
- (id)texture2DArrayToTexture2D:(id)a0;

@end
