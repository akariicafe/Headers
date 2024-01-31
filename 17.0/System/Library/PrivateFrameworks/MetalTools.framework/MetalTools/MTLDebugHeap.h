@class MTLDebugDevice;

@interface MTLDebugHeap : MTLToolsHeap <MTLDebugResourcePurgeable> {
    struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _purgeableStateToken;
    BOOL _purgeableStateHasBeenSet;
}

@property (readonly, nonatomic) MTLDebugDevice *debugDevice;

- (id)newAccelerationStructureWithDescriptor:(id)a0;
- (unsigned long long)setPurgeableState:(unsigned long long)a0;
- (id)newAccelerationStructureWithSize:(unsigned long long)a0 resourceIndex:(unsigned long long)a1;
- (id)newAccelerationStructureWithSize:(unsigned long long)a0;
- (id)newTextureWithDescriptor:(id)a0;
- (id)newBufferWithLength:(unsigned long long)a0 options:(unsigned long long)a1 offset:(unsigned long long)a2;
- (id)newAccelerationStructureWithSize:(unsigned long long)a0 offset:(unsigned long long)a1 resourceIndex:(unsigned long long)a2;
- (id)newAccelerationStructureWithDescriptor:(id)a0 offset:(unsigned long long)a1;
- (id)newAccelerationStructureWithSize:(unsigned long long)a0 offset:(unsigned long long)a1;
- (unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)a0;
- (id)newTextureWithDescriptor:(id)a0 offset:(unsigned long long)a1;
- (id)newBufferWithLength:(unsigned long long)a0 options:(unsigned long long)a1;
- (BOOL)purgeableStateValidForRendering;
- (id)_newDebugAccelerationStructure:(id)a0;
- (id)initWithHeap:(id)a0 device:(id)a1;
- (void)lockPurgeableState;
- (void)unlockPurgeableState;
- (void)validateHeapResourceOptions:(unsigned long long)a0 isTexture:(BOOL)a1 isIOSurface:(BOOL)a2 context:(struct _MTLMessageContext { long long x0; char *x1; unsigned int x2; id x3; long long x4; id x5; char *x6; } *)a3;
- (void)validateHeapTextureUsage:(unsigned long long)a0 options:(unsigned long long)a1 context:(struct _MTLMessageContext { long long x0; char *x1; unsigned int x2; id x3; long long x4; id x5; char *x6; } *)a2;
- (void)validateOffset:(unsigned long long)a0 withRequirements:(struct { unsigned long long x0; unsigned long long x1; })a1;
- (void)validatePixelFormatWithHeap:(unsigned long long)a0 context:(struct _MTLMessageContext { long long x0; char *x1; unsigned int x2; id x3; long long x4; id x5; char *x6; } *)a1;
- (void)validateRaytracingHeap;
- (void)validateTextureAtomicFlags:(id)a0 context:(struct _MTLMessageContext { long long x0; char *x1; unsigned int x2; id x3; long long x4; id x5; char *x6; } *)a1;

@end
