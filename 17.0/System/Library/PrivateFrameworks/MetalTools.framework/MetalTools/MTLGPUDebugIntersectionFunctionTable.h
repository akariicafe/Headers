@class NSString, MTLGPUDebugRenderPipelineState, MTLGPUDebugComputePipelineState;
@protocol MTLDevice, MTLHeap, MTLBuffer, MTLIntersectionFunctionTable;

@interface MTLGPUDebugIntersectionFunctionTable : MTLToolsIntersectionFunctionTable <MTLGPUDebugResource> {
    unsigned long long _gpuIdentifier;
    unsigned long long _functionCount;
    MTLGPUDebugComputePipelineState *_computePipelineState;
    MTLGPUDebugRenderPipelineState *_renderPipelineState;
    id<MTLBuffer> _handleBuffer;
    unsigned long long _stage;
}

@property (retain, nonatomic) id<MTLIntersectionFunctionTable> baseObject;
@property (readonly, nonatomic) unsigned long long length;
@property (readonly, nonatomic) unsigned long long gpuAddress;
@property (readonly, nonatomic) unsigned long long underlyingGPUAddress;
@property int responsibleProcess;
@property (readonly) unsigned long long allocationID;
@property (readonly) unsigned long long protectionOptions;
@property (readonly) unsigned long long unfilteredResourceOptions;
@property (copy) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly) unsigned long long storageMode;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) unsigned long long resourceOptions;
@property (readonly) id<MTLHeap> heap;
@property (readonly) unsigned long long heapOffset;
@property (readonly) unsigned long long allocatedSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setVisibleFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)dealloc;
- (void)setFunctions:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setVisibleFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setBuffers:(const id *)a0 offsets:(const unsigned long long *)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)setFunction:(id)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)bufferAddressAtIndex:(unsigned long long)a0;
- (void)_initHandleBuffer;
- (void)_setupIdentifier;
- (unsigned long long)handleForOffset:(unsigned long long)a0;
- (id)initWithIntersectionFunctionTable:(id)a0 device:(id)a1 descriptor:(id)a2;
- (id)initWithIntersectionFunctionTable:(id)a0 device:(id)a1 descriptor:(id)a2 computePipelineState:(id)a3;
- (id)initWithIntersectionFunctionTable:(id)a0 device:(id)a1 descriptor:(id)a2 renderPipelineState:(id)a3 stage:(unsigned long long)a4;
- (void)useWithComputeEncoder:(id)a0 usage:(unsigned long long)a1;
- (void)useWithRenderEncoder:(id)a0 usage:(unsigned long long)a1 stages:(struct optional<unsigned long> { union { char x0; unsigned long long x1; } x0; BOOL x1; })a2;

@end
