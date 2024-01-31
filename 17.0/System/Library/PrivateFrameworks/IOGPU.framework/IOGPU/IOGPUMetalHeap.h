@class NSString, IOGPUMetalResource, IOGPUMetalDevice;
@protocol MTLDevice;

@interface IOGPUMetalHeap : _MTLHeap {
    IOGPUMetalResource *_resource;
    IOGPUMetalDevice<MTLDevice> *_device;
    struct MTLRangeAllocator { struct MTLRangeAllocatorElement *elements; unsigned int numElements; unsigned long long capacity; unsigned long long capacityIncrement; unsigned long long defaultAlignmentMask; } _allocator;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
    unsigned long long _size;
}

@property (copy) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long size;
@property (readonly) unsigned long long usedSize;
@property (readonly) unsigned long long storageMode;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly) unsigned long long currentAllocatedSize;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) unsigned long long resourceOptions;
@property (readonly) unsigned long long unfilteredResourceOptions;
@property (readonly, nonatomic) unsigned long long protectionOptions;
@property (readonly) long long type;

- (id)newAccelerationStructureWithDescriptor:(id)a0;
- (unsigned long long)setPurgeableState:(unsigned long long)a0;
- (id)newAccelerationStructureWithSize:(unsigned long long)a0 resourceIndex:(unsigned long long)a1;
- (id)newAccelerationStructureWithSize:(unsigned long long)a0;
- (void)dealloc;
- (id)initWithDevice:(id)a0 size:(unsigned long long)a1 options:(unsigned long long)a2 args:(struct IOGPUNewResourceArgs { struct IOGPUNewResourceData { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned int x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned int x14; union { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; union { unsigned int x0; unsigned long long x1; } x3; } x0; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4[2]; } x1; } x15; } x0; } *)a3 argsSize:(unsigned int)a4;
- (unsigned long long)gpuAddress;
- (id)newAccelerationStructureWithSize:(unsigned long long)a0 offset:(unsigned long long)a1 resourceIndex:(unsigned long long)a2;
- (id)newSubResourceWithLength:(unsigned long long)a0 alignment:(unsigned long long)a1 options:(unsigned long long)a2 offset:(unsigned long long *)a3;
- (void)setLabel:(id)a0;
- (id)newAccelerationStructureWithDescriptor:(id)a0 offset:(unsigned long long)a1;
- (id)newAccelerationStructureWithSize:(unsigned long long)a0 offset:(unsigned long long)a1;
- (void)unpinMemoryAtOffset:(unsigned long long)a0 withLength:(unsigned long long)a1;
- (unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)a0;
- (id)initWithDevice:(id)a0 size:(unsigned long long)a1 options:(unsigned long long)a2 args:(struct IOGPUNewResourceArgs { struct IOGPUNewResourceData { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned int x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned int x14; union { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; union { unsigned int x0; unsigned long long x1; } x3; } x0; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4[2]; } x1; } x15; } x0; } *)a3 argsSize:(unsigned int)a4 desc:(id)a5;
- (id)newSubResourceAtOffset:(unsigned long long)a0 withLength:(unsigned long long)a1 alignment:(unsigned long long)a2 options:(unsigned long long)a3;
- (void)deallocHeapSubResource;

@end
