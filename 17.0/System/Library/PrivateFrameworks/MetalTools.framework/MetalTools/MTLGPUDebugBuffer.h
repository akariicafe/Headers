@class NSString;
@protocol MTLHeap, MTLBuffer, MTLDevice;

@interface MTLGPUDebugBuffer : MTLToolsBuffer <MTLGPUDebugResource> {
    unsigned long long _bufferIndex;
    unsigned long long _offset;
    unsigned long long _length;
    void *_descriptorHeap;
}

@property (readonly, nonatomic) unsigned long long offset;
@property (readonly, nonatomic) unsigned long long gpuAddress;
@property (retain, nonatomic) id<MTLBuffer> baseObject;
@property (nonatomic) unsigned long long bufferIndex;
@property (readonly, nonatomic) BOOL isTracked;
@property (readonly, nonatomic) unsigned long long length;
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

- (void)dealloc;
- (void *)contents;
- (id)newLinearTextureWithDescriptor:(id)a0 offset:(unsigned long long)a1 bytesPerRow:(unsigned long long)a2 bytesPerImage:(unsigned long long)a3;
- (id)newTextureWithDescriptor:(id)a0 offset:(unsigned long long)a1 bytesPerRow:(unsigned long long)a2;
- (unsigned long long)handleForOffset:(unsigned long long)a0;
- (id)initWithBuffer:(id)a0 device:(id)a1;
- (id)initWithBuffer:(id)a0 device:(id)a1 offset:(unsigned long long)a2 length:(unsigned long long)a3;
- (id)initWithBuffer:(id)a0 device:(id)a1 offset:(unsigned long long)a2 length:(unsigned long long)a3 track:(BOOL)a4;
- (id)initWithBuffer:(id)a0 heap:(id)a1 device:(id)a2;
- (id)initWithBuffer:(id)a0 heap:(id)a1 device:(id)a2 offset:(unsigned long long)a3 length:(unsigned long long)a4 track:(BOOL)a5;
- (void)useWithComputeEncoder:(id)a0 usage:(unsigned long long)a1;
- (void)useWithRenderEncoder:(id)a0 usage:(unsigned long long)a1 stages:(struct optional<unsigned long> { union { char x0; unsigned long long x1; } x0; BOOL x1; })a2;

@end
