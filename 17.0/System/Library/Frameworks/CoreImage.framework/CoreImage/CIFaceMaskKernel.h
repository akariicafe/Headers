@interface CIFaceMaskKernel : CIImageProcessorKernel

+ (BOOL)synchronizeInputs;
+ (int)formatForInputAtIndex:(int)a0;
+ (BOOL)processWithInputs:(id)a0 arguments:(id)a1 output:(id)a2 error:(id *)a3;
+ (int)outputFormat;
+ (void)releaseBuffers;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })roiForInput:(int)a0 arguments:(id)a1 outputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (BOOL)hasValidBuffers;
+ (void)allocateBuffers:(id)a0;
+ (void)allocateBuffersIfNeeded:(id)a0;
+ (void)compilePipelines:(id)a0;
+ (void)compilePipelinesIfNeeded:(id)a0;
+ (BOOL)hasValidPipelines;
+ (void)releasePipelines;

@end
