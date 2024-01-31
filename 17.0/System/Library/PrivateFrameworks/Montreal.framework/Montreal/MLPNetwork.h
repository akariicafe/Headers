@class MPSImageCopyToMatrix, NSArray, NSDictionary, MLPDeviceHandler, MPSMatrixCopyToImage, MontrealNNModelOptimizerParam;

@interface MLPNetwork : NSObject

@property (retain) NSDictionary *options;
@property (retain) NSArray *layers;
@property unsigned long long networkType;
@property (retain) MLPDeviceHandler *deviceHandler;
@property (retain) MPSImageCopyToMatrix *i2mKernel;
@property (retain) MPSMatrixCopyToImage *m2iKernel;
@property (retain) MontrealNNModelOptimizerParam *optimizerParams;
@property unsigned long long inputLength;
@property unsigned long long inputHeight;
@property unsigned long long inputChannels;
@property unsigned long long batchSize;
@property unsigned long long lossBatchSize;
@property BOOL computeLossOnInference;

+ (id)networkWithLayers:(id)a0 inputLength:(unsigned long long)a1 inputHeight:(unsigned long long)a2 inputChannels:(unsigned long long)a3 batchSize:(unsigned long long)a4 lossBatchSize:(unsigned long long)a5 options:(id)a6 deviceHandler:(id)a7 optimizerParams:(id)a8;

- (void).cxx_destruct;
- (id)initWithLayers:(id)a0;
- (id)computeInference:(id)a0;
- (void)createLayerKernels;
- (void *)generateModelContainer;
- (id)initWithNetworkType:(unsigned long long)a0 layers:(id)a1;
- (unsigned long long)runInference:(id)a0 databatch:(id)a1 inferredResult:(id)a2 semaphore:(id)a3;
- (void)runTraining:(id)a0 databatch:(id)a1 iteration:(unsigned long long)a2 lossCallback:(id /* block */)a3 semaphore:(id)a4;

@end
