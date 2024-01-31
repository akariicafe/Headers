@protocol MTLCommandQueue, MTLDevice;

@interface MLPDeviceHandler : NSObject {
    struct mersenne_twister_engine<unsigned int, 32UL, 624UL, 397UL, 31UL, 2567483615U, 11UL, 4294967295U, 7UL, 2636928640U, 15UL, 4022730752U, 18UL, 1812433253U> { unsigned int __x_[624]; unsigned long long __i_; } weightSeed;
}

@property (readonly) id<MTLDevice> device;
@property (readonly) id<MTLCommandQueue> commandQueue;
@property (readonly) unsigned long long dataLayout;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)matrixToVector:(id)a0;
- (id)biasVectorWithLength:(unsigned long long)a0 stdDev:(float)a1 values:(const void *)a2;
- (id)deduceDevice;
- (id)imageBatchFromMatrix:(id)a0 m2iKernel:(id)a1 cmdBuf:(id)a2 width:(unsigned long long)a3 height:(unsigned long long)a4 channels:(unsigned long long)a5;
- (id)imageFromData:(id)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 featureChannels:(unsigned long long)a3;
- (id)imageFromMatrix:(id)a0 m2iKernel:(id)a1 cmdBuf:(id)a2 width:(unsigned long long)a3 height:(unsigned long long)a4 featureChannels:(unsigned long long)a5;
- (void)importDataFromGPU:(id)a0 cmdBuf:(id)a1;
- (id)initWithDataLayout:(id)a0;
- (id)matrixFromImages:(id)a0 i2mKernel:(id)a1 cmdBuf:(id)a2;
- (id)matrixWithRows:(unsigned long long)a0 columns:(unsigned long long)a1 cmdBuf:(id)a2;
- (void)sendDataToGPU:(id)a0;
- (id)tempMatrixFromImages:(id)a0 i2mKernel:(id)a1 cmdBuf:(id)a2;
- (id)tempMatrixWithRows:(unsigned long long)a0 columns:(unsigned long long)a1 cmdBuf:(id)a2;
- (float)uniformRandWithParamA:(float)a0 paramB:(float)a1;
- (id)vectorWithLength:(unsigned long long)a0 cmdBuf:(id)a1;
- (id)weightMatrixFixedRowBytesWithRows:(unsigned long long)a0 columns:(unsigned long long)a1;
- (id)weightMatrixWithRows:(unsigned long long)a0 columns:(unsigned long long)a1 stdDev:(float)a2 initialValues:(const void *)a3 columnMajor:(BOOL)a4;

@end
