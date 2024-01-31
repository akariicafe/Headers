@interface MLCGPUHelper : NSObject

+ (id)allocateAndCopyToTemporaryMPSImageBatchForTensor:(id)a0 commandBuffer:(id)a1 batchSize:(unsigned long long)a2 copyingKernel:(id)a3 sourceMTLBuffer:(id)a4 MLCDataType:(int)a5 heapAllocator:(id)a6;
+ (id)allocateMPSImageBatchForTensor:(id)a0 commandBuffer:(id)a1 kernel:(id)a2 batchSize:(unsigned long long)a3 heapAllocator:(id)a4 imageBatchIsTemporary:(BOOL)a5;
+ (id)allocateTemporaryMPSImageBatchForTensor:(id)a0 commandBuffer:(id)a1 kernel:(id)a2 batchSize:(unsigned long long)a3;
+ (void)concatChannelsForwardWithParams:(struct ConcatImageParams { unsigned short x0; unsigned short x1; unsigned short x2; })a0 sourceImageBatch:(id)a1 resultImageBatch:(id)a2 commandBuffer:(id)a3 device:(id)a4 deviceIndex:(unsigned long long)a5;
+ (void)copyMPSImageBatchToMTLBuffer:(id)a0 commandBuffer:(id)a1 sourceImageBatch:(id)a2 destinationMTLBuffer:(id)a3 MLCDataType:(int)a4;
+ (void)copyMTLBufferToMPSImageBatch:(id)a0 commandBuffer:(id)a1 sourceMTLBuffer:(id)a2 destinationImageBatch:(id)a3 MLCDataType:(int)a4;
+ (void)didModifyRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 buffer:(id)a1;
+ (unsigned long long)mtlResourceOptions;
+ (unsigned long long)mtlStorageMode;
+ (void)synchronizeResource:(id)a0 commandBuffer:(id)a1;

@end
