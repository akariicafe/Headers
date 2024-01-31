@class NSString, MPSCommandBufferImageCache;
@protocol MTLDevice;

@interface MPSNDArray : NSObject {
    void /* unknown type, empty encoding */ _dimensionLengths;
    void /* unknown type, empty encoding */ _sliceOffsets;
    void /* unknown type, empty encoding */ _sliceLengths;
    void /* unknown type, empty encoding */ _strideBytes;
    void /* unknown type, empty encoding */ _strideElements;
    void /* unknown type, empty encoding */ _dimensionOrder;
    void *_device;
    struct MPSAutoBuffer { struct atomic<void *> { struct __cxx_atomic_impl<void *, std::__cxx_atomic_base_impl<void *>> { _Atomic void *__a_value; } __a_; } _buffer; unsigned long long _requestedSize; id<MTLDevice> _device; MPSCommandBufferImageCache *_cache; struct { unsigned long long size; unsigned long long align; } _resourceSize; } _buffer;
    struct __IOSurface { } *_iosurface;
    unsigned long long _offset;
    unsigned long long _rowBytes;
    void *_library;
    BOOL _isTemporary;
}

@property (copy) NSString *label;
@property (readonly, nonatomic) unsigned int dataType;
@property (readonly, nonatomic) unsigned long long dataTypeSize;
@property (readonly, nonatomic) unsigned long long numberOfDimensions;
@property (readonly, retain, nonatomic) id<MTLDevice> device;
@property (readonly, retain, nonatomic) MPSNDArray *parent;

+ (const struct MPSLibraryInfo { int x0; unsigned int x1; char *x2; void /* function */ *x3; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x4; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x5; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x6; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x7; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x8; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x9; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x10; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x11; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x12; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x13; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x14; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x15; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x16; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x17; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x18; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x19; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x20; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x21; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x22; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x23; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x24; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x25; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x26; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x27; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x28; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x29; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x30; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x31; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x32; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x33; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x34; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x35; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x36; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x37; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x38; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x39; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x40; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x41; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x42; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x43; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x44; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x45; } *)libraryInfo:(void *)a0;
+ (id)defaultAllocator;

- (id)init;
- (void)dealloc;
- (unsigned long long)offset;
- (id)descriptor;
- (id).cxx_construct;
- (id)buffer;
- (unsigned long long)resourceSize;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithDevice:(id)a0 descriptor:(id)a1;
- (void)synchronizeOnCommandBuffer:(id)a0;
- (id)arrayViewWithCommandBuffer:(id)a0 computeEncoder:(id)a1 descriptor:(id)a2 destinationArray:(id)a3 aliasing:(unsigned long long)a4;
- (id)checkNDArray:(const float *)a0 nativeUlps:(float)a1 absoluteErr:(float)a2 PSNR:(float)a3;
- (void)exportDataWithCommandBuffer:(id)a0 toBuffer:(id)a1 destinationDataType:(unsigned int)a2 offset:(unsigned long long)a3 rowStrides:(long long *)a4;
- (void)exportDataWithCommandBuffer:(id)a0 toImages:(id)a1 offset:(struct MPSImageCoordinate { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2;
- (void)importDataWithCommandBuffer:(id)a0 fromBuffer:(id)a1 sourceDataType:(unsigned int)a2 offset:(unsigned long long)a3 rowStrides:(long long *)a4;
- (void)importDataWithCommandBuffer:(id)a0 fromImages:(id)a1 offset:(struct MPSImageCoordinate { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2;
- (id)initWithBuffer:(id)a0 descriptor:(id)a1;
- (void)printNDArray;
- (void)readBytes:(void *)a0 strideBytes:(long long *)a1;
- (id)safeArrayViewWithCommandBuffer:(id)a0 computeEncoder:(id)a1 descriptor:(id)a2 aliasing:(unsigned long long)a3;
- (id)safeArrayViewWithCommandBuffer:(id)a0 descriptor:(id)a1 aliasing:(unsigned long long)a2;
- (void)updateStrides;
- (void)writeBytes:(void *)a0 strideBytes:(long long *)a1;
- (id)arrayViewWithCommandBuffer:(id)a0 descriptor:(id)a1 aliasing:(unsigned long long)a2;
- (id)matrixWithCommandBuffer:(id)a0 descriptor:(id)a1 aliasing:(unsigned long long)a2;
- (void)arrayViewWithCommandBuffer:(id)a0 descriptor:(id)a1 destinationArray:(id)a2 aliasing:(unsigned long long)a3;
- (id)checkNDArray:(const float *)a0 nativeUlps:(float)a1 absoluteErr:(float)a2;
- (void)copyDataWithCommandBuffer:(id)a0 images:(id)a1 offset:(struct MPSImageCoordinate { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2 imageToArray:(BOOL)a3;
- (id)dataWithCommandBuffer:(id)a0;
- (void)encodeCopyWithCommandBuffer:(id)a0 computeEncoder:(id)a1 toBuffer:(id)a2 destinationDataType:(unsigned int)a3 destinationOffsetBytes:(unsigned long long)a4 destinationStrideBytes:(long long *)a5;
- (void)encodeReshapedMatrixWithCommandBuffer:(id)a0 computeEncoder:(id)a1 toBuffer:(id)a2 destinationDataType:(unsigned int)a3 destinationOffsetBytes:(unsigned long long)a4 destinationRowBytes:(unsigned long long)a5 destinationColumns:(unsigned long long)a6 destinationRows:(unsigned long long)a7;
- (void)exportDataWithCommandBuffer:(id)a0 computeEncoder:(id)a1 toBuffer:(id)a2 destinationDataType:(unsigned int)a3 offset:(unsigned long long)a4 rowStrides:(long long *)a5 lengths:(unsigned long long *)a6 numLengths:(unsigned long long)a7 flatteningLevel:(unsigned long long)a8;
- (void)exportDataWithCommandBuffer:(id)a0 toBuffer:(id)a1 destinationDataType:(unsigned int)a2 offset:(unsigned long long)a3 rowStrides:(long long *)a4 lengths:(unsigned long long *)a5 numLengths:(unsigned long long)a6 flatteningLevel:(unsigned long long)a7;
- (void)importDataWithCommandBuffer:(id)a0 computeEncoder:(id)a1 fromBuffer:(id)a2 sourceDataType:(unsigned int)a3 offset:(unsigned long long)a4 rowStrides:(long long *)a5;
- (id)initWithDevice:(id)a0 matrix:(id)a1;
- (id)initWithDevice:(id)a0 scalar:(double)a1;
- (unsigned long long)lengthOfDimension:(unsigned long long)a0;
- (void)makeStrideBytesInArray:(long long *)a0;
- (void)printNDArrayToFile:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0;

@end
