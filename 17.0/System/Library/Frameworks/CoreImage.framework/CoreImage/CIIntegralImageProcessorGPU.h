@interface CIIntegralImageProcessorGPU : CIImageProcessorKernel

+ (BOOL)canReduceOutputChannels;
+ (BOOL)processWithInputs:(id)a0 arguments:(id)a1 output:(id)a2 error:(id *)a3;
+ (int)outputFormat;

@end
