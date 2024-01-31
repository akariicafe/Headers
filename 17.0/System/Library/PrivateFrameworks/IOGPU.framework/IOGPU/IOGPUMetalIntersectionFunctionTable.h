@class NSString, IOGPUMetalResource;
@protocol MTLDevice, MTLVisibleFunctionTableSPI, MTLHeap, MTLBuffer;

@interface IOGPUMetalIntersectionFunctionTable : IOGPUMetalResource <MTLIntersectionFunctionTableSPI> {
    IOGPUMetalResource<MTLVisibleFunctionTableSPI> *_visibleFunctionTable;
}

@property (retain, nonatomic) id<MTLBuffer> globalBuffer;
@property (nonatomic) unsigned long long globalBufferOffset;
@property (readonly, nonatomic) unsigned long long resourceIndex;
@property (readonly) unsigned long long uniqueIdentifier;
@property (readonly, nonatomic) unsigned long long gpuHandle;
@property (readonly) struct MTLResourceID { unsigned long long x0; } gpuResourceID;
@property (readonly, nonatomic) IOGPUMetalResource<MTLVisibleFunctionTableSPI> *visibleFunctionTable;
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
- (id)initWithVisibleFunctionTable:(id)a0;
- (void)setOpaqueCurveIntersectionFunctionWithSignature:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setOpaqueCurveIntersectionFunctionWithSignature:(unsigned long long)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setOpaqueTriangleIntersectionFunctionWithSignature:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setOpaqueTriangleIntersectionFunctionWithSignature:(unsigned long long)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
