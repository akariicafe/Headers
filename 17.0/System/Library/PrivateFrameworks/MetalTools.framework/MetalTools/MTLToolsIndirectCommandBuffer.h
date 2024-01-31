@class NSString;
@protocol MTLHeap, MTLDevice;

@interface MTLToolsIndirectCommandBuffer : MTLToolsResource <MTLIndirectCommandBufferSPI>

@property (readonly) unsigned long long uniqueIdentifier;
@property (readonly) unsigned long long storageMode;
@property (readonly, nonatomic) unsigned long long gpuAddress;
@property (readonly, nonatomic) unsigned long long resourceIndex;
@property (readonly) unsigned long long gpuHandle;
@property (readonly) unsigned long long size;
@property (readonly) struct MTLResourceID { unsigned long long x0; } gpuResourceID;
@property (copy) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) unsigned long long resourceOptions;
@property (readonly) id<MTLHeap> heap;
@property (readonly) unsigned long long heapOffset;
@property (readonly) unsigned long long allocatedSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)resourceIndex;
- (id)indirectRenderCommandAtIndex:(unsigned long long)a0;
- (void)resetWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)getHeader:(void **)a0 headerSize:(unsigned long long *)a1;
- (id)indirectComputeCommandAtIndex:(unsigned long long)a0;

@end
