@class NSString, NSArray, NSData, MPSGraphDevice, MPSNDArray;

@interface MPSGraphTensorData : MPSGraphObject {
    unsigned long long _rowBytes;
    unsigned long long _numElements;
    void /* unknown type, empty encoding */ _shapeValues;
    unsigned long long _rank;
    MPSNDArray *_mpsndarray;
    NSArray *_mpsimagebatch;
    struct __IOSurface { } *_iosurface;
    NSData *_data;
}

@property (readonly, nonatomic) struct __IOSurface { } *iosurface;
@property (readonly, nonatomic) long long tensorDataType;
@property (retain, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) NSArray *shape;
@property (readonly, nonatomic) unsigned int dataType;
@property (readonly, nonatomic) MPSGraphDevice *device;

- (void)dealloc;
- (void)print;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)checkTensorData:(const float *)a0 nativeUlps:(float)a1 absoluteErr:(float)a2;
- (id)checkTensorData:(const float *)a0 nativeUlps:(float)a1 absoluteErr:(float)a2 PSNR:(float)a3;
- (id)checkWithReferenceTensorData:(id)a0 nativeUlps:(float)a1 absoluteError:(float)a2 PSNR:(float)a3;
- (void)commonInitialize;
- (void)copyDataFromNDArrayToImageBatchWithCommandBuffer:(id)a0;
- (id)initEmptyWithShape:(id)a0 dataType:(unsigned int)a1 device:(id)a2;
- (id)initWithDevice:(id)a0 IOSurface:(struct __IOSurface { } *)a1 rowBytesAlignment:(unsigned long long)a2 shape:(id)a3 dataType:(unsigned int)a4;
- (id)initWithDevice:(id)a0 data:(id)a1 shape:(id)a2 dataType:(unsigned int)a3;
- (id)initWithDevice:(id)a0 rowBytesAlignment:(unsigned long long)a1 shape:(id)a2 dataType:(unsigned int)a3;
- (id)initWithMPSImageBatch:(id)a0;
- (id)initWithMPSMatrix:(id)a0;
- (id)initWithMPSMatrix:(id)a0 rank:(unsigned long long)a1;
- (id)initWithMPSNDArray:(id)a0;
- (id)initWithMPSNDArray:(id)a0 device:(id)a1;
- (id)initWithMPSVector:(id)a0;
- (id)initWithMPSVector:(id)a0 rank:(unsigned long long)a1;
- (id)initWithMTLBuffer:(id)a0 shape:(id)a1 dataType:(unsigned int)a2;
- (id)initWithMTLBuffer:(id)a0 shape:(id)a1 dataType:(unsigned int)a2 rowBytes:(unsigned long long)a3;
- (id)initWithMTLBuffer:(id)a0 shape:(id)a1 strideBytes:(id)a2 dataType:(unsigned int)a3;
- (id)initWithMTLBuffer:(id)a0 shape:(id)a1 strides:(id)a2 dataType:(unsigned int)a3;
- (id)initWithMTLBuffer:(id)a0 shape:(id)a1 strides:(id)a2 interleaves:(id)a3 dataType:(unsigned int)a4;
- (id)mpsndarray;
- (id)mpsndarrayWithCommandBuffer:(id)a0;
- (void)printIOSurface;
- (void)printNDArray;

@end
