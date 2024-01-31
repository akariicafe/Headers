@protocol MTLDevice, MTLCommandBuffer, MTLLibrary, MTLCommandQueue, MTLPipelineLibrarySPI;

@interface PTMetalContext : NSObject <NSCopying>

@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) id<MTLCommandQueue> commandQueue;
@property (retain, nonatomic) id<MTLLibrary> library;
@property (retain, nonatomic) id<MTLCommandBuffer> commandBuffer;
@property (retain, nonatomic) id<MTLPipelineLibrarySPI> pipelineLibrary;
@property (nonatomic) BOOL allowCommandbufferAllocation;

- (void)commit;
- (void)waitForIdle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)functionWithName:(id)a0 withConstants:(id)a1;
- (void)checkCurrentThreadEqualsCommandBufferThread;
- (void)commitAndWaitUntilCompleted;
- (void)commitAndWaitUntilScheduled;
- (id)computePipelineStateFor:(id)a0 withConstants:(id)a1;
- (id)initWithCommandQueue:(id)a0 bundleClass:(Class)a1;
- (id)initWithDevice:(id)a0 bundleClass:(Class)a1;
- (BOOL)isCommandBufferCommitted;

@end
